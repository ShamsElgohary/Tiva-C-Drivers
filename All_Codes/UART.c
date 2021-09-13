 /******************************************************************************
 *
 * Module: UART
 *
 * File Name: uart.c
 *
 * Description: Source file for the TM4C123GH6PM Microcontroller - UART driver
 *
* Author : Shams Elgohary
 *******************************************************************************/



#include "UART.h"

static void (*UART0_CallBackPtr)(void);



/*******************************************************************************
 *                             ISR                                             *
 *******************************************************************************/


void UART0_Handler(void)
{
    UART0_ICR_R |= RXIM_MASK;
    (*UART0_CallBackPtr)();
}



/*******************************************************************************
 *                           UART0                                             *
 *******************************************************************************/

void UART0_Init(void)
{
SYSCTL_RCGCUART_R |= SYSCTL_RCGCUART0_MASK;                 // ACTIVATE UART0 CLOCK
SYSCTL_RCGCGPIO_R |= SYSCTL_RCGCGPIO_GPIOA_MASK;             // ACTIVATE CLOCK FOR PORT A

UART0_CTL_R  = LOW;                                         // DISBALE UART
/* DECLARING THE BAUD RATE  */
UART0_IBRD_R = (USART_DIVINT_VALUE);                       //UART-_IBRD_R = 104  , MASKING ISN'T NESSECERALLY NEEDED HERE VALUE IS VERY LOW IN COMPARSION
UART0_FBRD_R = (USART_DIVFRAC_VALUE);                      //UART-_FBRD_R = 11
UART0_LCRH_R = UART_LCRH_8_Bits;                            // WLEN = 11 (DATA BITS = 8) FEN =1 (ENABLE 16 ELEMENTS IN BUFFER)
UART0_CTL_R  = UART_CTL_Enable;                             // ENABLE UART , ENABLE TRANSMITTER ,ENABLE RECEIVER
                     
GPIO_PORTA_AMSEL_REG &= ~(PORTA_PIN0_PIN1);                  // WE WANT THIS PIN DIGITAL -> GPIO_PORTA_AMSEL_REG &= ~0X03
GPIO_PORTA_AFSEL_REG |= (PORTA_PIN0_PIN1);                   // TO ACTIVATE ALTERNATIVE FUNCTION SELECT FOR PIN0 AND PIN1
GPIO_PORTA_PCTL_REG  |= 0X00000011;                             // CHOOSE PIN0 AND PIN1 TO BE UART0 RECEIVE AND TRANSMIT RESPECTIVELY
GPIO_PORTA_DEN_REG |= (PORTA_PIN0_PIN1);                     // TO ENABLE PIN TO BE DIGITAL


/* IF INTERRUPT IS ENABLED IN CONFIGURATIONS (uart.h) BUILD THIS PART OF THE CODE */
#if UART0_INT_ENABLED==TRUE

UART0_IM_R |= RXIM_MASK ;              // 0001 0000 | 0010 0000
NVIC_EN0_REG |= UART0_INT_NUM;        // UART0_INT_NUM= 0X20

#endif

UART0_CTL_R|=1;
}



void UART0_sendByte(const uint8 data)
{
   while( UART0_FR_R & TXFF);   //POLLING UNTIL TX FULL FLAG =0 (IF DATA BUFFER ISN'T FULL WE CAN SEND DATA) 
   UART0_DR_R=data;
}

uint8 UART0_recieveByte(void)
{
  while( UART0_FR_R & RXFE);    //POLLING UNTIL RX EMPTY FLAG =0 ( DATA BUFFER ISN'T EMPTY SO WE CAN START RECEIVING DATA)
  return (uint8)UART0_DR_R;     // RETURN FIRST 8 BITS IN UART0 DATA REGISTER
}


#if UART0_INT_ENABLED==TRUE

void UART0_SetCallBack( void (*PtrToFunction) (void) )
{ 
  UART0_CallBackPtr = PtrToFunction;
}

#endif



