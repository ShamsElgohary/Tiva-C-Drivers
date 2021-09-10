 /******************************************************************************
 *
 * Module: PORT
 *
 * File Name: GPIO_Port.c
 *
 * Description: Source file for the TM4C123GH6PM Microcontroller - Port driver
 *
 * Author: Shams Elgohary
 *
 *******************************************************************************/

#include "GPIO_Port.h"



/************************************************************************************
* Service Name: GPIO_Channel_Init
* Sync/Async: Synchronous
* Reentrancy: Non reentrant
* Return value: None
* Description: Function to Initialize any channel
************************************************************************************/
void GPIO_Channel_Init(ChannelConfig *Config)
{
    volatile uint32 *BaseAddressPointer = NULL_PTR;
    /* Activate Clock for GPIO PORT */
    SYSCTL_RCGCGPIO_R |= Config->Port;

    /* Delay of 3 clock cycles and getting the base address */
    switch(Config->Port)
    {
    case 0:
        BaseAddressPointer = (volatile uint32 *) GPIO_PORTA_BASE_ADDRESS;
        break;
    case 1:
        BaseAddressPointer = (volatile uint32 *) GPIO_PORTB_BASE_ADDRESS;
        break;
    case 2:
        BaseAddressPointer = (volatile uint32 *) GPIO_PORTC_BASE_ADDRESS;
        break;
    case 3:
        BaseAddressPointer = (volatile uint32 *) GPIO_PORTD_BASE_ADDRESS;
        break;
    case 4:
        BaseAddressPointer = (volatile uint32 *) GPIO_PORTE_BASE_ADDRESS;
        break;
    case 5:
        BaseAddressPointer = (volatile uint32 *) GPIO_PORTF_BASE_ADDRESS;
        break;
    default:
        return;
    }

    /*NO UNLOCK FOR SAFETY */


    if(Config->AFSEL == AFSEL_ON )
    {
        /*ACTIVATE ALTERNATIVE FUNCTION SELECT CAN PINS */
    ACCESS_REG_OFFSET( BaseAddressPointer, PORT_ALT_FUNC_REG_OFFSET ) |= (Config->ChannelGroup);
    }
    else
    {
       /*DEACTIVATE ALTERNATIVE FUNCTION SELECT CAN PINS */
    ACCESS_REG_OFFSET( BaseAddressPointer, PORT_ALT_FUNC_REG_OFFSET ) &= ~(Config->ChannelGroup);
    }


    if(Config->DEN == DEN_ON )
    {
        /*ACTIVATE DIGITAL ENABLE FUNCTION SELECTED PINS AND DISABLE ANALOG */
    ACCESS_REG_OFFSET( BaseAddressPointer, PORT_DIGITAL_ENABLE_REG_OFFSET ) |= (Config->ChannelGroup);
    ACCESS_REG_OFFSET( BaseAddressPointer, PORT_ANALOG_MODE_SEL_REG_OFFSET ) &= ~(Config->ChannelGroup);
    }
    else if (Config->DEN == DEN_OFF )
    {
        /* DIGITAL DISABLE, ENABLE ANALOG  */
    ACCESS_REG_OFFSET( BaseAddressPointer, PORT_DIGITAL_ENABLE_REG_OFFSET ) &= ~(Config->ChannelGroup);
    ACCESS_REG_OFFSET( BaseAddressPointer, PORT_ANALOG_MODE_SEL_REG_OFFSET ) |= (Config->ChannelGroup);
    }


        /*  ASSIGN SIGNALS  */
    ACCESS_REG_OFFSET( BaseAddressPointer, PORT_CTL_REG_OFFSET ) |= (Config->PCTL);

    if(Config->DIR == INPUT )
    {
        /* CONFIGURE PIN TO BE INPUT*/
        ACCESS_REG_OFFSET( BaseAddressPointer, PORT_DIGITAL_ENABLE_REG_OFFSET ) &= ~(Config->ChannelGroup);

        /* CONFIGURE PULL UP PIN */
        if(Config->PU == PU_ON )
        {
            ACCESS_REG_OFFSET( BaseAddressPointer, PORT_PULL_UP_REG_OFFSET ) |= (Config->ChannelGroup);
        }

        else
        {
            ACCESS_REG_OFFSET( BaseAddressPointer, PORT_PULL_UP_REG_OFFSET ) &= ~(Config->ChannelGroup);
        }

        /* CONFIGURE PULL DOWN PIN */
        if(Config->PD == PD_ON )
        {
            ACCESS_REG_OFFSET( BaseAddressPointer, PORT_PULL_DOWN_REG_OFFSET ) |= (Config->ChannelGroup);
        }
        else
        {
            ACCESS_REG_OFFSET( BaseAddressPointer, PORT_PULL_DOWN_REG_OFFSET ) |= (Config->ChannelGroup);
        }

    }


    else if( Config->DIR == OUTPUT )
    {
        /* CONFIGURE PIN TO BE OUTPUT*/
        ACCESS_REG_OFFSET( BaseAddressPointer, PORT_DIGITAL_ENABLE_REG_OFFSET ) |= (Config->ChannelGroup);
    }


}
