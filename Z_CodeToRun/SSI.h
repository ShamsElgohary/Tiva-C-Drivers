 /******************************************************************************
 *
 * Module: SSI
 *
 * File Name: SSI.h
 *
 * Description: Header file for the TM4C123GH6PM Microcontroller - SSI driver
 *
 * Author: Shams Elgohary
 *
 *******************************************************************************/

#ifndef SPI_H_
#define SPI_H_

#include "GPIO_Port.h"
#include "SSI_private.h"
#include "Std_Types.h"
#include "common_macros.h"


/*******************************************************************************
 *                            CONFIGURATION                                    *
 *******************************************************************************/

#define SSI_CONFIGURED_INSTANCES 1

/* SSI0 PINS */

#define SSI0_PIN0 0x04
#define SSI0_PIN1 0x08
#define SSI0_PIN2 0x10
#define SSI0_PIN3 0x20

#define SSI0_PINS 0x3C
#define SSI0_PCTL 0x00222200
#define SSI0_PORT 0

/*******************************************************************************
 *                      MODULE DATA TYPES                                      *
 *******************************************************************************/


/* SSI IS CONFIGURED AS EITHER A:
 * -MASTER
 * -SLAVE OUTPUT ENABLED
 * -SLAVE OUTPUT DISABLED
 */
typedef enum
{
    MASTER_SSI = SSICR1_MASTER_MASK, SLAVE_OP_SSI= SSICR1_SLAVE_OP_MASK, SLAVE_NOP_SSI= SSICR1_SLAVE_NOP_MASK
}SSI_Mode_Config;


/* NUMBER OF SSI INSTANCES */
typedef enum
{
    SSI0,SSI1,SSI2,SSI3
}SSI_InstanceID;


/* Baud clock source for the SSI module */
typedef enum
{
    SOURCE_CLK, PIOSC_CLK = 0x5
} SSI_Clock_Config;


/*  SSI Frame Format Select */
typedef enum
{
    FREESCALE_SPI, TI_SYNCHRONOUS_SERIAL, MICROWIRE
}SSI_Frame_Config;


/* Contains the configurations that will be used in the init fn.  */
typedef struct
{
    /* MASTER OR SLAVE DEVICE */
    SSI_Mode_Config Mode;
    /* SSI INSTANCE  */
    SSI_InstanceID InstanceID;
    /* BAUD CLOCK SOURCE FOR SSI MODULE */
    SSI_Clock_Config Clock;
    /* SSI FRAME FORMAT */
    SSI_Frame_Config Format;
    /* PRESCALE DIVIDOR
     * SSInClk = SysClk / (CPSDVSR * (1 + SCR))
     * Must be even value from 2 to 254
     * SOURCE CLK = 16MHZ , AND SCR_MASK = 3
     * TO GET 1Mbps from SSI -> PRESCALE = 4 EXAMPLE
     */
    uint8 Prescale;
    /* Data Size Select */
    uint8 DataSize;
    /* SCR */
    uint8 SerialClockRate;
    /* SERIAL CLOCK PHASE , SERIAL CLOCK POLARITY */
    bool SSI_SPH;
    bool SSI_SPO;

}SSI_ConfigureInstances;


/* FOR EVERY CHANNEL A DIFFRENT CONFIGURATION */
typedef struct
{
    SSI_ConfigureInstances Instances[SSI_CONFIGURED_INSTANCES];
}SSI_ConfigType;



/*******************************************************************************
 *                       External Variables                                    *
 *******************************************************************************/

/* Extern PB structures to be used by SSI and other modules */
extern const SSI_ConfigType SSI_Configuration;

extern ChannelConfig GPIO_SSI0;


/*******************************************************************************
 *                      Functions Prototypes                                   *
 *******************************************************************************/

void SSI_Init(const SSI_ConfigType *Config);
void SSI0_Send(const uint16 data);
uint16 SSI0_Recieve(void);
static void SSI0_PORT_init();

#endif
