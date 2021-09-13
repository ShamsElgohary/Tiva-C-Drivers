 /******************************************************************************
 *
 * Module: SSI
 *
 * File Name: SSI_PBCfg.c
 *
 * Description: Post Build Configuration Source file for the TM4C123GH6PM Microcontroller - SSI driver
 *
 * Author: Shams Elgohary
 *
 *******************************************************************************/


#include "SSI.h"


/* PB structure used with SSI_Init API */
/* Configuration Order */
/* Mode, Channel, Clock, Format, Prescale, DataSize, SerialClockRate, SSI_SPH, SSI_SPO */

const SSI_ConfigType SSI_Configuration = { {MASTER_SSI, SSI0, SOURCE_CLK, FREESCALE_SPI, 4, 0xF, 3, 0, 0} };

ChannelConfig GPIO_SSI0 = {SSI0_PINS, SSI0_PORT, SSI0_PCTL, AFSEL_OFF, DEN_ON, INPUT,PU_OFF,PD_OFF};



