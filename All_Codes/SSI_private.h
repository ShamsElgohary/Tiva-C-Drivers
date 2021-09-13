/*
 * SSI_private.h
 *
 *  Created on: Sep 2, 2021
 *      Author: Shams
 */

#ifndef SSI_PRIVATE_H_
#define SSI_PRIVATE_H_

#include "Std_Types.h"


//*****************************************************************************
//
// SSI registers (SSI0)
//
//*****************************************************************************
#define SSI0_CR0_R              (*((volatile unsigned long *)0x40008000))
#define SSI0_CR1_R              (*((volatile unsigned long *)0x40008004))
#define SSI0_DR_R               (*((volatile unsigned long *)0x40008008))
#define SSI0_SR_R               (*((volatile unsigned long *)0x4000800C))
#define SSI0_CPSR_R             (*((volatile unsigned long *)0x40008010))
#define SSI0_IM_R               (*((volatile unsigned long *)0x40008014))
#define SSI0_RIS_R              (*((volatile unsigned long *)0x40008018))
#define SSI0_MIS_R              (*((volatile unsigned long *)0x4000801C))
#define SSI0_ICR_R              (*((volatile unsigned long *)0x40008020))
#define SSI0_DMACTL_R           (*((volatile unsigned long *)0x40008024))
#define SSI0_CC_R               (*((volatile unsigned long *)0x40008FC8))

//*****************************************************************************
//
// SSI registers (SSI1)
//
//*****************************************************************************
#define SSI1_CR0_R              (*((volatile unsigned long *)0x40009000))
#define SSI1_CR1_R              (*((volatile unsigned long *)0x40009004))
#define SSI1_DR_R               (*((volatile unsigned long *)0x40009008))
#define SSI1_SR_R               (*((volatile unsigned long *)0x4000900C))
#define SSI1_CPSR_R             (*((volatile unsigned long *)0x40009010))
#define SSI1_IM_R               (*((volatile unsigned long *)0x40009014))
#define SSI1_RIS_R              (*((volatile unsigned long *)0x40009018))
#define SSI1_MIS_R              (*((volatile unsigned long *)0x4000901C))
#define SSI1_ICR_R              (*((volatile unsigned long *)0x40009020))
#define SSI1_DMACTL_R           (*((volatile unsigned long *)0x40009024))
#define SSI1_CC_R               (*((volatile unsigned long *)0x40009FC8))

//*****************************************************************************
//
// SSI registers (SSI2)
//
//*****************************************************************************
#define SSI2_CR0_R              (*((volatile unsigned long *)0x4000A000))
#define SSI2_CR1_R              (*((volatile unsigned long *)0x4000A004))
#define SSI2_DR_R               (*((volatile unsigned long *)0x4000A008))
#define SSI2_SR_R               (*((volatile unsigned long *)0x4000A00C))
#define SSI2_CPSR_R             (*((volatile unsigned long *)0x4000A010))
#define SSI2_IM_R               (*((volatile unsigned long *)0x4000A014))
#define SSI2_RIS_R              (*((volatile unsigned long *)0x4000A018))
#define SSI2_MIS_R              (*((volatile unsigned long *)0x4000A01C))
#define SSI2_ICR_R              (*((volatile unsigned long *)0x4000A020))
#define SSI2_DMACTL_R           (*((volatile unsigned long *)0x4000A024))
#define SSI2_CC_R               (*((volatile unsigned long *)0x4000AFC8))

//*****************************************************************************
//
// SSI registers (SSI3)
//
//*****************************************************************************
#define SSI3_CR0_R              (*((volatile unsigned long *)0x4000B000))
#define SSI3_CR1_R              (*((volatile unsigned long *)0x4000B004))
#define SSI3_DR_R               (*((volatile unsigned long *)0x4000B008))
#define SSI3_SR_R               (*((volatile unsigned long *)0x4000B00C))
#define SSI3_CPSR_R             (*((volatile unsigned long *)0x4000B010))
#define SSI3_IM_R               (*((volatile unsigned long *)0x4000B014))
#define SSI3_RIS_R              (*((volatile unsigned long *)0x4000B018))
#define SSI3_MIS_R              (*((volatile unsigned long *)0x4000B01C))
#define SSI3_ICR_R              (*((volatile unsigned long *)0x4000B020))
#define SSI3_DMACTL_R           (*((volatile unsigned long *)0x4000B024))
#define SSI3_CC_R               (*((volatile unsigned long *)0x4000BFC8))



/*******************************************************************************
 *                      Preprocessor Macros                                    *
 *******************************************************************************/

/* MASK FOR SSI CLOCKS */
#define SYSCTL_RCGCSSI_SSI0 1
#define SYSCTL_RCGCSSI_SSI1 2
#define SYSCTL_RCGCSSI_SSI2 3
#define SYSCTL_RCGCSSI_SSI3 4



/* REGISTER VALUES */
#define SOURCE_CLOCK 0
/* SSE BIT */
#define SSICR1_SSE_MASK 1
/* SSI MASTER MODE */
#define SSICR1_MASTER_MASK 0
/* SLAVE OUTPUT ENABLED */
#define SSICR1_SLAVE_OP_MASK 0x04
/* SLAVE NO OUTPUT  */
#define SSICR1_SLAVE_NOP_MASK 0x0C
/* SSI Receive FIFO Not Empty */
#define SSI_RNE 0x04
/* SSI Transmit FIFO Not Full  */
#define SSI_TNF 0x02




#endif /* SSI_PRIVATE_H_ */
