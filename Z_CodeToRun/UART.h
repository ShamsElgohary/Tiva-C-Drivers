 /******************************************************************************
 *
 * Module: UART
 *
 * File Name: uart.h
 *
 * Description: Header file for the TM4C123GH6PM Microcontroller - UART driver
 *
 * Author: Shams Elgohary
 *
 *******************************************************************************/

#ifndef UART_H_
#define UART_H_

#include "GPIO_private.h"
#include "UART_private.h"
#include "Std_Types.h"
#include "common_macros.h"




/*******************************************************************************
 *                         Configurations                                      *
 *******************************************************************************/

#define UART0_INT_ENABLED  TRUE

/* MASKS FOR UART REGISTERS VALUES */

#define UART_LCRH_8_Bits 0x0060         // WLEN = 11 (DATA BITS = 8) FEN =1 (ENABLE 16 ELEMENTS IN BUFFER)
#define UART_CTL_Enable 0x0310          // ENABLE UART , ENABLE TRANSMITTER ,ENABLE RECEIVER

/* UART Driver Baud Rate */
#define USART_BAUDRATE 9600
#define USART_DIVINT_VALUE 104
#define USART_DIVFRAC_VALUE 11


/*******************************************************************************
 *                      Preprocessor Macros                                    *
 *******************************************************************************/

/* UART0 PINS */
#define  PORTA_PIN0   1
#define  PORTA_PIN1   2
#define  PORTA_PIN0_PIN1 3                //0b00000011
#define UART0_INT_NUM 0x21        // UART0 INTERRUPT NUM = 0X21



/*******************************************************************************
 *                      Functions Prototypes                                   *
 *******************************************************************************/

   
void UART0_Init(void);

void UART0_sendByte(const uint8 data);

uint8 UART0_recieveByte(void);

void UART0_SetCallBack( void (*PtrToFunction) (void) );


#endif /* UART_H_ */
