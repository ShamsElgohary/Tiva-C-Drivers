 /******************************************************************************
 *
 * Module: CAN
 *
 * File Name: CAN_PBCfg.c
 *
 * Description: Post Build Configuration Source file for the TM4C123GH6PM Microcontroller - CAN driver
 *
 * Author: Shams Elgohary
 *
 *******************************************************************************/


#include "CAN.h"


/* STRUCTURE USED TO INITILIAZE CAN1 PINS*/

ChannelConfig GPIO_CAN1 = {CAN1_PORT, GPIO_CAN1_PINS, GPIO_CAN1_PCTL, AFSEL_ON, DEN_ON};

/* STRUCTURE USED TO INITILIAZE CAN0 PINS */

ChannelConfig GPIO_CAN0 = {CAN0_PORT, GPIO_CAN0_PINS, GPIO_CAN0_PCTL, AFSEL_ON, DEN_ON};


/* USED TO SET BAUD RATE END OF FILE */
BitTime_Configuration BitTime = {0,3,0,4};

/* USED FOR CAN_INIT {CAN INSTANCE , BitTime Configuration} */
Can_ConfigType CAN_Configuration = {CAN0,  {0,3,0,4} };


/*
 *  ACCEPT ID =0 ( ACCEPT ANY MESSAGE )
 *  MessageID =8
 *  Message ID is 11 bits (Standard Format)
 *  Data Length is 8 bytes
 *  Message Object Address (Mail) is 1
 */
CAN_MessageConfig CAN_MssgConfig = {0, 0x80, StandardFormat, 0x08, MsgObj24, RemoteFrame_ON, UMASK_ON};










/*
Example for Bit Timing at High Baud Rate
In this example, the frequency of CAN clock is 16 MHz, and the bit rate is 1 Mbps.
bit time = 1 µs = n * tq = 5 * tq
tq = 200 ns
tq = (Baud rate Prescaler)/CAN Clock
Baud rate Prescaler = tq * CAN Clock
tSync = 1 * tq = 200 ns \\fixed at 1 time quanta
tProp > must be bigger than Physical Delay = 2 *Tq
bit time = tSync + tTSeg1 + tTSeg2 = 5 * tq = tSync + tProp + tPhase 1 + tPhase2
tPhase 1 + tPhase2 = bit time - tSync - tProp
tPhase 1 + tPhase2 = (5 * tq) - (1 * tq) - (2 * tq) = 2 * tq
tPhase1 = 1 * tq = tPhase2 =
tTSeg1 = tProp + tPhase1
tTSeg1 = (2 * tq) + (1 * tq) -> tTSeg1 = 3 * tq
tTSeg2 = tPhase2 = (Information Processing Time + 1) * tq = 1 * tq
tSJW = 1 * tq

TSEG2 = 0
TSEG1 = 3
SJW = 0
BRP =4*/




