 /******************************************************************************
 *
 * Module: I2C
 *
 * File Name: I2C.c
 *
 * Description: Source file for TM4C123GH6PM Microcontroller - I2C Driver
 *
 * Author: Shams Elgohary
 ******************************************************************************/


#include "I2C.h"


/************************************************************************************
* Service Name: I2C_Init
* Sync/Async: Synchronous
* Reentrancy: Non reentrant
* Return value: None
* Description: Function to Initialize the i2c module.
************************************************************************************/
void I2C_Init(const I2C_Config *Config)
{
    switch(Config->Instance)
    {

    case 0:

        /* Activate I2C CLOCK */
        SYSCTL_RCGCI2C_R |= SYSCTL_RCGCI2C0_MASK;

        /* PORT initialized for I2C0 */
        I2C0_PORT_init();

        /* MASTER/SLAVE ENABLE */
        I2C0_MCR_R |= (Config->Mode);

        if(Config->Mode == I2C_MCR_SFE)
        {
            /* IF MODE IS SLAVE THEN GIVE A SLAVE ADDRESS ..TO BE IMPLEMENTED */
        }

    /*  Assuming SCL_CLK IS 100 Kbps
     *  TPR = (System Clock/(2*(SCL_LP (Fixed at 6)  + SCL_HP (Fixed at 4) )*SCL_CLK))-1;
     *  TPR = (16MHz/(2*(6+4)*100000))-1;
     *  TPR =  7
     */
        I2C0_MTPR_R = (Config->TimePeriod);
        break;

    case 1:

        /* SAME STEPS AND COMMENTS AS CASE 0 */

        SYSCTL_RCGCI2C_R |= SYSCTL_RCGCI2C1_MASK;
        I2C1_PORT_init();
        I2C1_MCR_R |= (Config->Mode);
        I2C1_MTPR_R = (Config->TimePeriod);
        break;


        /* I2C-0 AND I2C-1 IS ENOUGH FOR THIS DRIVER */
    case 3:

    case 4:
        break;

    }

}

/************************************************************************************
* Service Name: I2C[i]_WriteByte
* Sync/Async: Synchronous
* Reentrancy: Non reentrant
* Return value: None
* Description: Function to Write a single byte to a slave.
************************************************************************************/
Std_ReturnType I2C0_WriteByte(const uint8 address, const uint8 data)
{
   /*
    * ADDRESS OF SLAVE WE WANT TO READ FROM
    * BIT0 = 0 (NEXT OPERATION IS A TRANSMIT)
    */
    I2C0_MSA_R |= (address<<1);

    /* Data to be transmitted */
    I2C0_MDR_R = (uint8)data ;

    /* Initiate a single byte transmit of the data from Master to Slave START, RUN , STOP , */
    I2C0_MCS_R |= I2C0_MCS_SRS_MASK;

    /* Wait until BUSBSY bit has been cleared */
    while( (I2C0_MCS_R & BUSBSY_MASK) != 0);

    /* Check the ERROR bit to confirm the transmit was acknowledged */
    if( (I2C0_MCS_R & ERROR_MASK ) != 1)
    {
       /* ( I2C0_MCS_R & ERROR_MASK) ->  ERROR  */
        return E_NOT_OK;
    }

    else
    {
        /* TRANSMISSION IS COMPLETED CORRECTLY  */
        return E_OK;
    }

}


Std_ReturnType I2C1_WriteByte(const uint8 address, const uint8 data)
{
   /*
    * ADDRESS OF SLAVE WE WANT TO READ FROM
    * BIT0 = 0 (NEXT OPERATION IS A TRANSMIT)
    */
    I2C1_MSA_R |= (address<<1);

    /* Data to be transmitted */
    I2C1_MDR_R = (uint8)data ;

    /* Initiate a single byte transmit of the data from Master to Slave START, RUN , STOP , */
    I2C1_MCS_R |= I2C1_MCS_SRS_MASK;

    /* Wait until BUSBSY bit has been cleared */
    while( (I2C1_MCS_R & BUSBSY_MASK) != 0);

    /* Check the ERROR bit to confirm the transmit was acknowledged */
    if( (I2C1_MCS_R & ERROR_MASK ) != 1)
    {
       /* ( I2C1_MCS_R & ERROR_MASK) ->  ERROR  */
        return E_NOT_OK;
    }

    else
    {
        /* TRANSMISSION IS COMPLETED CORRECTLY  */
        return E_OK;
    }

}

/************************************************************************************
* Service Name: I2C[i]_ReadByte
* Sync/Async: Synchronous
* Reentrancy: Non reentrant
* Return value: None
* Description: Function to Read a single byte from another device.
************************************************************************************/

uint8 I2C0_ReadByte(const uint8 address)
{
   /*
    * ADDRESS OF SLAVE WE WANT TO READ FROM
    * BIT0 = 0 (NEXT OPERATION IS A TRANSMIT)
    */
    I2C0_MSA_R |= (address<<1);

    /* Initiate a single byte transmit of the data from Master to Slave START, RUN , STOP , */
    I2C0_MCS_R |= I2C0_MCS_SRS_MASK;

    /* Wait until BUSBSY bit has been cleared */
    while( (I2C0_MCS_R & BUSBSY_MASK) != 0);

    /* Check the ERROR bit to confirm the transmit was acknowledged */
    if( (I2C0_MCS_R & ERROR_MASK ) != 1)
    {
        return ( I2C0_MCS_R & ERROR_MASK);
    }

    else
    {
        /* NO ERRORS --> READ SUCCESSFULLY */
        return (uint8)I2C0_MDR_R;
    }


}

uint8 I2C1_ReadByte(const uint8 address)
{
   /*
    * ADDRESS OF SLAVE WE WANT TO READ FROM
    * BIT0 = 0 (NEXT OPERATION IS A TRANSMIT)
    */
    I2C1_MSA_R |= (address<<1);

    /* Initiate a single byte transmit of the data from Master to Slave START, RUN , STOP , */
    I2C1_MCS_R |= I2C1_MCS_SRS_MASK;

    /* Wait until BUSBSY bit has been cleared */
    while( (I2C1_MCS_R & BUSBSY_MASK) != 0);

    /* Check the ERROR bit to confirm the transmit was acknowledged */
    if( (I2C1_MCS_R & ERROR_MASK ) != 1)
    {
        return ( I2C1_MCS_R & ERROR_MASK);
    }

    else
    {
        /* NO ERRORS --> READ SUCCESSFULLY */
        return (uint8)I2C1_MDR_R;
    }
}


/************************************************************************************
* Service Name: I2C[i]_PORT_init
* Sync/Async: Synchronous
* Reentrancy: Non reentrant
* Return value: None
* Description: Function to Initialize the Pins needed in the I2C_init fn.
************************************************************************************/
static void I2C0_PORT_init()
{
    /* Activate Clock for GPIO PORT */
    SYSCTL_RCGCGPIO_R |= SYSCTL_RCGCGPIO_GPIOB_MASK;

    /* Delay of 3 clock cycles */
    uint32 volatile delay=1;

    /* DEACTIVATE ANALOG SELECT FOR THE I2C 1 PINS */
    GPIO_PORTB_AMSEL_REG &= ~(I2C0_PINS);

    /*ACTIVATE ALTERNATIVE FUNCTION SELECT FOR I2C 1 Pins */
    GPIO_PORTB_AFSEL_REG |= (I2C0_PINS);

    /* ENABLE GPIO OPEN DRAIN SELECT FOR THE SDA PIN (DEN IS ALSO SET FOR THE CORRESPONDING PIN */
    GPIO_PORTB_ODR_R |= I2C0_PIN2;

    /* DIGITAL ENABLE FOR SCL PIN */
    GPIO_PORTB_DEN_REG |= I2C0_PIN1;

    /*  ASSIGN I2C SIGNALS  */
    GPIO_PORTB_PCTL_REG  |= 0X00003300;

}

static void I2C1_PORT_init()
{
    /* Activate Clock for GPIO PORT */
    SYSCTL_RCGCGPIO_R |= SYSCTL_RCGCGPIO_GPIOA_MASK;

    /* Delay of 3 clock cycles */
    uint32 volatile delay=1;

    /* DEACTIVATE ANALOG SELECT FOR THE I2C 1 PINS */
    GPIO_PORTA_AMSEL_REG &= ~(I2C1_PINS);

    /*ACTIVATE ALTERNATIVE FUNCTION SELECT FOR I2C 1 Pins */
    GPIO_PORTA_AFSEL_REG |= (I2C1_PINS);

    /* ENABLE GPIO OPEN DRAIN SELECT FOR THE SDA PIN (DEN IS ALSO SET FOR THE CORRESPONDING PIN */
    GPIO_PORTA_ODR_R |= I2C1_PIN2;

    /* DIGITAL ENABLE FOR SCL PIN */
    GPIO_PORTA_DEN_REG |= I2C1_PIN1;

    /*  ASSIGN I2C SIGNALS  */
    GPIO_PORTA_PCTL_REG  |= 0X33000000;
}
