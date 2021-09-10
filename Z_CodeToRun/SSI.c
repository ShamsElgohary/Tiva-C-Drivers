 /******************************************************************************
 *
 * Module: SSI
 *
 * File Name: SSI.c
 *
 * Description: Source file for the TM4C123GH6PM Microcontroller - SSI driver
 *
 * Author: Shams Elgohary
 *
 *******************************************************************************/


#include "SSI.h"


static const SSI_ConfigureInstances *SSI_Config = NULL_PTR;


/************************************************************************************
* Service Name: SSI_Init
* Sync/Async: Synchronous
* Reentrancy: Non reentrant
* Return value: None
* Description: Function to Initialize the SSI module.
************************************************************************************/
void SSI_Init(const SSI_ConfigType *Config)
{

    /* ADDRESS OF THE FIRST CHANNEL STRUCTURE CONFIGURATION (->Channels[0]) */
     SSI_Config = Config->Instances;


    uint8 volatile i =0 ;
    for(i; i < SSI_CONFIGURED_INSTANCES ; i++)
    {

    switch(SSI_Config[i].InstanceID)
    {
    case 0:
        /* ACTIVATE CLOCK FOR SSI */
        SYSCTL_RCGCSSI_R |= SYSCTL_RCGCSSI_SSI0;

        /* PORT initialized for SSI0 */
        GPIO_Channel_Init(&GPIO_SSI0);

        /* Clearing the SSE bit before initialization */
        SSI0_CR1_R &= ~SSICR1_SSE_MASK;

        /* SET SSI MODE */
        SSI0_CR1_R |= SSI_Config[i].Mode;

        /* SET SSI CLOCK */
        SSI0_CC_R = SSI_Config[i].Clock;

        /* PRESCALE DIVIDOR
         * SSInClk = SysClk / (CPSDVSR * (1 + SCR))
         * Must be even value from 2 to 254
         * SOURCE CLK = 16MHZ , AND SCR_MASK = 3
         * TO GET 1Mbps from SSI -> PRESCALE = 4
         */
        SSI0_CPSR_R = SSI_Config[i].Prescale;

        /* DETERMINE NUMBER OF DATA BITS, AND FRAME FORMAT (Bits 4,5)  */
        SSI0_CR0_R |= SSI_Config[i].DataSize;
        SSI0_CR0_R |= (SSI_Config[i].Format)<<4;

        /* DEFINE CLOCK RATE , SERIAL CLOCK PHASE , SERIAL CLOCK POLARITY  */
        SSI0_CR0_R |= ( (SSI_Config[i].SerialClockRate) <<8 );
        SSI0_CR0_R |= ( (SSI_Config[i].SSI_SPH) << 7) | ( (SSI_Config[i].SSI_SPO)<<6 );

        if(SSI_Config[i].SSI_SPO == 1)
        {
            /* IF SERIAL CLOCK POLARITY =1 THEN WE MUST ENABLE PULL UP FOR SSInClk */
            GPIO_PORTA_PUR_REG |= SSI0_PIN0;
        }

        /* Enabling the SSE bit after initialization */
        SSI0_CR1_R |= SSICR1_SSE_MASK;


        /* Same Steps */
    case 1:
    case 2:
    case 3:

    default:
        /* REPORT ERROR  */
        break;

    }

    }

}


/************************************************************************************
* Service Name: SSI[i]_send
* Sync/Async: Synchronous
* Reentrancy: Non reentrant
* Return value: None
* Description: Function to send data
************************************************************************************/
void SSI0_Send(const uint16 data)
{
    while( (SSI0_SR_R & SSI_TNF) == 0 );
    SSI0_DR_R = data;
}


/************************************************************************************
* Service Name: SSI[i]_recieve
* Sync/Async: Synchronous
* Reentrancy: Non reentrant
* Return value: uint16
* Description: Function to recieve data
************************************************************************************/
uint16 SSI0_Recieve(void)
{
   /* POLLING UNTIL THE FIFO ISN'T EMPTY (DATA TO RECIEVE) */
   while((SSI0_SR_R & SSI_RNE) == 0 );
   return (uint16) SSI0_DR_R;
}



