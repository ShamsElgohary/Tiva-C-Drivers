 /******************************************************************************
 *
 * Module: PORT
 *
 * File Name: GPIO_Port.h
 *
 * Description: Header file for the TM4C123GH6PM Microcontroller - Port driver
 *
 * Author: Shams Elgohary
 *
 *******************************************************************************/


#ifndef GPIO_PORT_H_
#define GPIO_PORT_H_


#include "GPIO_private.h"
#include "Std_Types.h"
#include "common_macros.h"


typedef enum
{
    AFSEL_OFF,AFSEL_ON
}AFSEL_Config;


typedef enum
{
    DEN_OFF,DEN_ON
}DEN_Config;

typedef enum
{
    PU_OFF,PU_ON
}PullUp_Config;


typedef enum
{
    PD_OFF,PD_ON
}PullDown_Config;


typedef enum
{
    INPUT,OUTPUT
}Direction;



typedef struct
{
    /* CAN BE ONE OR MORE CHANNEL IN THE SAME PORT */
    uint8 ChannelGroup;
    /* PORT OF THE DESIRED CHANNEL TO BE CONFIGURED */
    uint8 Port;
    /* PCTL OF THE DESIRED ALTERNATIVE FUNCTION */
    uint32 PCTL;
    /* GPIO OR ALTERNATIVE FUNCTION */
    AFSEL_Config AFSEL;
    /* CHECK IF DIGITAL MODE IS ENABLED OR NOT */
    DEN_Config DEN;
    Direction DIR;
    PullUp_Config PU;
    PullDown_Config PD;

}ChannelConfig;


void GPIO_Channel_Init(ChannelConfig *Config);


#endif /* GPIO_PORT_H_ */
