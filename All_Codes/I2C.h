 /******************************************************************************
 *
 * Module: I2C
 *
 * File Name: I2C.h
 *
 * Description: Header file for TM4C123GH6PM Microcontroller - I2C Driver
 *
 * Author: Shams Elgohary
 ******************************************************************************/

#ifndef I2C_H_
#define I2C_H_

#include "GPIO_private.h"
#include "I2C_private.h"
#include "Std_Types.h"
#include "common_macros.h"



/*******************************************************************************
 *                      PREPROCCESSOR                                          *
 *******************************************************************************/

/*  I2C0   */

#define I2C0_PIN1 0X04
#define I2C0_PIN2 0X08
#define I2C0_PINS  (I2C1_PIN1 | I2C1_PIN2 )
#define I2C0_PCTL  (0X00003300)

/*  I2C1   */

#define I2C1_PIN1 0X40
#define I2C1_PIN2 0X80
#define I2C1_PINS  (I2C1_PIN1 | I2C1_PIN2 )
#define I2C1_PCTL  (0X33000000)



/*
 *  RELATED TO THE TRANSMISSION SPEED MASK
 *  Assuming SCL_CLK IS 100 Kbps
 *  TPR = (System Clock/(2*(SCL_LP (Fixed at 6)  + SCL_HP (Fixed at 4) )*SCL_CLK))-1;
 *  TPR = (16MHz/(2*(6+4)*100000))-1;
 *  TPR =  7
*/


/*******************************************************************************
 *                      MODULE DATA TYPES                                      *
 *******************************************************************************/

/* NUMBER OF I2C INSTANCES */
typedef enum
{
    I2C0,I2C1,I2C2,I2C3
}I2C_InstanceID;

/* CONFIGURE I2C AS A MASTER OR SLAVE */
typedef enum
{
    MASTER_I2C=I2C_MCR_MFE,SLAVE_I2C=I2C_MCR_SFE
}I2C_MODE;

/* STRUCTURE CONTAINS CONFIGURATION USER WANTS */
typedef struct
{
    /* CONFIGURE I2C AS A MASTER OR SLAVE */
    I2C_MODE Mode;
    /*  I2C INSTANCE ID TO CONFIGURE */
    I2C_InstanceID Instance;
    /* RELATED TO THE TRANSMISSION SPEED MASK */
    uint8 TimePeriod;

}I2C_Config;

/*******************************************************************************
 *                       External Variables                                    *
 *******************************************************************************/

extern const I2C_Config I2C_Configuration;

/*******************************************************************************
 *                      Function Prototypes                                    *
 *******************************************************************************/

void I2C_Init(const I2C_Config *Config);
Std_ReturnType I2C0_WriteByte(const uint8 address, const uint8 data);
uint8 I2C0_ReadByte(const uint8 address);
static void I2C0_PORT_init();
static void I2C1_PORT_init();




#endif /* I2C_H_ */
