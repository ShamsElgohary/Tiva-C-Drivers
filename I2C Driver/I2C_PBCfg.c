 /******************************************************************************
 *
 * Module: I2C
 *
 * File Name: I2C_PBCfg.c
 *
 * Description: Post Build Configuration Source file for the TM4C123GH6PM Microcontroller - I2C driver
 *
 * Author: Shams Elgohary
 *
 *******************************************************************************/

#include "I2C.h"

/* PB structure used with I2C_Init API */

/*
 *  RELATED TO THE TRANSMISSION SPEED MASK
 *  Assuming SCL_CLK IS 100 Kbps
 *  TPR = (System Clock/(2*(SCL_LP (Fixed at 6)  + SCL_HP (Fixed at 4) )*SCL_CLK))-1;
 *  TPR = (16MHz/(2*(6+4)*100000))-1;
 *  TPR =  7
*/

const I2C_Config I2C_Configuration = {MASTER_I2C, I2C0, 7};





