/*
 * I2C_private.h
 *
 *  Created on: Sep 2, 2021
 *      Author: Shams
 */

#ifndef I2C_PRIVATE_H_
#define I2C_PRIVATE_H_

#include "Std_Types.h"

//
// I2C registers (I2C0)
//
//*****************************************************************************
#define I2C0_MSA_R              (*((volatile unsigned long *)0x40020000))
#define I2C0_MCS_R              (*((volatile unsigned long *)0x40020004))
#define I2C0_MDR_R              (*((volatile unsigned long *)0x40020008))
#define I2C0_MTPR_R             (*((volatile unsigned long *)0x4002000C))
#define I2C0_MIMR_R             (*((volatile unsigned long *)0x40020010))
#define I2C0_MRIS_R             (*((volatile unsigned long *)0x40020014))
#define I2C0_MMIS_R             (*((volatile unsigned long *)0x40020018))
#define I2C0_MICR_R             (*((volatile unsigned long *)0x4002001C))
#define I2C0_MCR_R              (*((volatile unsigned long *)0x40020020))
#define I2C0_MCLKOCNT_R         (*((volatile unsigned long *)0x40020024))
#define I2C0_MBMON_R            (*((volatile unsigned long *)0x4002002C))
#define I2C0_MCR2_R             (*((volatile unsigned long *)0x40020038))
#define I2C0_SOAR_R             (*((volatile unsigned long *)0x40020800))
#define I2C0_SCSR_R             (*((volatile unsigned long *)0x40020804))
#define I2C0_SDR_R              (*((volatile unsigned long *)0x40020808))
#define I2C0_SIMR_R             (*((volatile unsigned long *)0x4002080C))
#define I2C0_SRIS_R             (*((volatile unsigned long *)0x40020810))
#define I2C0_SMIS_R             (*((volatile unsigned long *)0x40020814))
#define I2C0_SICR_R             (*((volatile unsigned long *)0x40020818))
#define I2C0_SOAR2_R            (*((volatile unsigned long *)0x4002081C))
#define I2C0_SACKCTL_R          (*((volatile unsigned long *)0x40020820))
#define I2C0_PP_R               (*((volatile unsigned long *)0x40020FC0))
#define I2C0_PC_R               (*((volatile unsigned long *)0x40020FC4))

//*****************************************************************************
//
// I2C registers (I2C1)
//
//*****************************************************************************
#define I2C1_MSA_R              (*((volatile unsigned long *)0x40021000))
#define I2C1_MCS_R              (*((volatile unsigned long *)0x40021004))
#define I2C1_MDR_R              (*((volatile unsigned long *)0x40021008))
#define I2C1_MTPR_R             (*((volatile unsigned long *)0x4002100C))
#define I2C1_MIMR_R             (*((volatile unsigned long *)0x40021010))
#define I2C1_MRIS_R             (*((volatile unsigned long *)0x40021014))
#define I2C1_MMIS_R             (*((volatile unsigned long *)0x40021018))
#define I2C1_MICR_R             (*((volatile unsigned long *)0x4002101C))
#define I2C1_MCR_R              (*((volatile unsigned long *)0x40021020))
#define I2C1_MCLKOCNT_R         (*((volatile unsigned long *)0x40021024))
#define I2C1_MBMON_R            (*((volatile unsigned long *)0x4002102C))
#define I2C1_MCR2_R             (*((volatile unsigned long *)0x40021038))
#define I2C1_SOAR_R             (*((volatile unsigned long *)0x40021800))
#define I2C1_SCSR_R             (*((volatile unsigned long *)0x40021804))
#define I2C1_SDR_R              (*((volatile unsigned long *)0x40021808))
#define I2C1_SIMR_R             (*((volatile unsigned long *)0x4002180C))
#define I2C1_SRIS_R             (*((volatile unsigned long *)0x40021810))
#define I2C1_SMIS_R             (*((volatile unsigned long *)0x40021814))
#define I2C1_SICR_R             (*((volatile unsigned long *)0x40021818))
#define I2C1_SOAR2_R            (*((volatile unsigned long *)0x4002181C))
#define I2C1_SACKCTL_R          (*((volatile unsigned long *)0x40021820))
#define I2C1_PP_R               (*((volatile unsigned long *)0x40021FC0))
#define I2C1_PC_R               (*((volatile unsigned long *)0x40021FC4))

//*****************************************************************************
//
// I2C registers (I2C2)
//
//*****************************************************************************
#define I2C2_MSA_R              (*((volatile unsigned long *)0x40022000))
#define I2C2_MCS_R              (*((volatile unsigned long *)0x40022004))
#define I2C2_MDR_R              (*((volatile unsigned long *)0x40022008))
#define I2C2_MTPR_R             (*((volatile unsigned long *)0x4002200C))
#define I2C2_MIMR_R             (*((volatile unsigned long *)0x40022010))
#define I2C2_MRIS_R             (*((volatile unsigned long *)0x40022014))
#define I2C2_MMIS_R             (*((volatile unsigned long *)0x40022018))
#define I2C2_MICR_R             (*((volatile unsigned long *)0x4002201C))
#define I2C2_MCR_R              (*((volatile unsigned long *)0x40022020))
#define I2C2_MCLKOCNT_R         (*((volatile unsigned long *)0x40022024))
#define I2C2_MBMON_R            (*((volatile unsigned long *)0x4002202C))
#define I2C2_MCR2_R             (*((volatile unsigned long *)0x40022038))
#define I2C2_SOAR_R             (*((volatile unsigned long *)0x40022800))
#define I2C2_SCSR_R             (*((volatile unsigned long *)0x40022804))
#define I2C2_SDR_R              (*((volatile unsigned long *)0x40022808))
#define I2C2_SIMR_R             (*((volatile unsigned long *)0x4002280C))
#define I2C2_SRIS_R             (*((volatile unsigned long *)0x40022810))
#define I2C2_SMIS_R             (*((volatile unsigned long *)0x40022814))
#define I2C2_SICR_R             (*((volatile unsigned long *)0x40022818))
#define I2C2_SOAR2_R            (*((volatile unsigned long *)0x4002281C))
#define I2C2_SACKCTL_R          (*((volatile unsigned long *)0x40022820))
#define I2C2_PP_R               (*((volatile unsigned long *)0x40022FC0))
#define I2C2_PC_R               (*((volatile unsigned long *)0x40022FC4))

//*****************************************************************************
//
// I2C registers (I2C3)
//
//*****************************************************************************
#define I2C3_MSA_R              (*((volatile unsigned long *)0x40023000))
#define I2C3_MCS_R              (*((volatile unsigned long *)0x40023004))
#define I2C3_MDR_R              (*((volatile unsigned long *)0x40023008))
#define I2C3_MTPR_R             (*((volatile unsigned long *)0x4002300C))
#define I2C3_MIMR_R             (*((volatile unsigned long *)0x40023010))
#define I2C3_MRIS_R             (*((volatile unsigned long *)0x40023014))
#define I2C3_MMIS_R             (*((volatile unsigned long *)0x40023018))
#define I2C3_MICR_R             (*((volatile unsigned long *)0x4002301C))
#define I2C3_MCR_R              (*((volatile unsigned long *)0x40023020))
#define I2C3_MCLKOCNT_R         (*((volatile unsigned long *)0x40023024))
#define I2C3_MBMON_R            (*((volatile unsigned long *)0x4002302C))
#define I2C3_MCR2_R             (*((volatile unsigned long *)0x40023038))
#define I2C3_SOAR_R             (*((volatile unsigned long *)0x40023800))
#define I2C3_SCSR_R             (*((volatile unsigned long *)0x40023804))
#define I2C3_SDR_R              (*((volatile unsigned long *)0x40023808))
#define I2C3_SIMR_R             (*((volatile unsigned long *)0x4002380C))
#define I2C3_SRIS_R             (*((volatile unsigned long *)0x40023810))
#define I2C3_SMIS_R             (*((volatile unsigned long *)0x40023814))
#define I2C3_SICR_R             (*((volatile unsigned long *)0x40023818))
#define I2C3_SOAR2_R            (*((volatile unsigned long *)0x4002381C))
#define I2C3_SACKCTL_R          (*((volatile unsigned long *)0x40023820))
#define I2C3_PP_R               (*((volatile unsigned long *)0x40023FC0))
#define I2C3_PC_R               (*((volatile unsigned long *)0x40023FC4))



/*******************************************************************************
 *                      Preprocessor Macros                                    *
 *******************************************************************************/


/* MASK FOR I2C CLOCKS */
#define SYSCTL_RCGCI2C0_MASK           0x01
#define SYSCTL_RCGCI2C1_MASK           0x02
#define SYSCTL_RCGCI2C2_MASK           0x04
#define SYSCTL_RCGCI2C3_MASK           0x08


/* The following are defines for the bit fields in the I2C_MCR register */

#define I2C_MCR_GFE             0x00000040  // I2C Glitch Filter Enable
#define I2C_MCR_SFE             0x00000020  // I2C Slave Function Enable
#define I2C_MCR_MFE             0x00000010  // I2C Master Function Enable
#define I2C_MCR_LPBK            0x00000001  // I2C Loopback
#define BUSBSY_MASK             0x00000040
#define ERROR_MASK              0x00000002


/* ABOVE ARE THE PREPROCESSOR MACROS USED IN THIS MODULE */


//*****************************************************************************
//
// The following are defines for the bit fields in the I2C_O_MSA register.
//
//*****************************************************************************
#define I2C_MSA_SA_M            0x000000FE  // I2C Slave Address
#define I2C_MSA_RS              0x00000001  // Receive not send
#define I2C_MSA_SA_S            1

//*****************************************************************************
//
// The following are defines for the bit fields in the I2C_O_MCS register.
//
//*****************************************************************************
#define I2C_MCS_CLKTO           0x00000080  // Clock Timeout Error
#define I2C_MCS_BUSBSY          0x00000040  // Bus Busy
#define I2C_MCS_IDLE            0x00000020  // I2C Idle
#define I2C_MCS_ARBLST          0x00000010  // Arbitration Lost
#define I2C_MCS_HS              0x00000010  // High-Speed Enable
#define I2C_MCS_ACK             0x00000008  // Data Acknowledge Enable
#define I2C_MCS_DATACK          0x00000008  // Acknowledge Data
#define I2C_MCS_ADRACK          0x00000004  // Acknowledge Address
#define I2C_MCS_STOP            0x00000004  // Generate STOP
#define I2C_MCS_ERROR           0x00000002  // Error
#define I2C_MCS_START           0x00000002  // Generate START
#define I2C_MCS_RUN             0x00000001  // I2C Master Enable
#define I2C_MCS_BUSY            0x00000001  // I2C Busy

//*****************************************************************************
//
// The following are defines for the bit fields in the I2C_O_MDR register.
//
//*****************************************************************************
#define I2C_MDR_DATA_M          0x000000FF  // Data Transferred
#define I2C_MDR_DATA_S          0

//*****************************************************************************
//
// The following are defines for the bit fields in the I2C_O_MTPR register.
//
//*****************************************************************************
#define I2C_MTPR_HS             0x00000080  // High-Speed Enable
#define I2C_MTPR_TPR_M          0x0000007F  // Timer Period
#define I2C_MTPR_TPR_S          0

//*****************************************************************************
//
// The following are defines for the bit fields in the I2C_O_MIMR register.
//
//*****************************************************************************
#define I2C_MIMR_CLKIM          0x00000002  // Clock Timeout Interrupt Mask
#define I2C_MIMR_IM             0x00000001  // Master Interrupt Mask

//*****************************************************************************
//
// The following are defines for the bit fields in the I2C_O_MRIS register.
//
//*****************************************************************************
#define I2C_MRIS_CLKRIS         0x00000002  // Clock Timeout Raw Interrupt
                                            // Status
#define I2C_MRIS_RIS            0x00000001  // Master Raw Interrupt Status

//*****************************************************************************
//
// The following are defines for the bit fields in the I2C_O_MMIS register.
//
//*****************************************************************************
#define I2C_MMIS_CLKMIS         0x00000002  // Clock Timeout Masked Interrupt
                                            // Status
#define I2C_MMIS_MIS            0x00000001  // Masked Interrupt Status

//*****************************************************************************
//
// The following are defines for the bit fields in the I2C_O_MICR register.
//
//*****************************************************************************
#define I2C_MICR_CLKIC          0x00000002  // Clock Timeout Interrupt Clear
#define I2C_MICR_IC             0x00000001  // Master Interrupt Clear

//*****************************************************************************
//
// The following are defines for the bit fields in the I2C_O_MCR register.
//
//*****************************************************************************
#define I2C_MCR_GFE             0x00000040  // I2C Glitch Filter Enable
#define I2C_MCR_SFE             0x00000020  // I2C Slave Function Enable
#define I2C_MCR_MFE             0x00000010  // I2C Master Function Enable
#define I2C_MCR_LPBK            0x00000001  // I2C Loopback

//*****************************************************************************
//
// The following are defines for the bit fields in the I2C_O_MCLKOCNT register.
//
//*****************************************************************************
#define I2C_MCLKOCNT_CNTL_M     0x000000FF  // I2C Master Count
#define I2C_MCLKOCNT_CNTL_S     0

//*****************************************************************************
//
// The following are defines for the bit fields in the I2C_O_MBMON register.
//
//*****************************************************************************
#define I2C_MBMON_SDA           0x00000002  // I2C SDA Status
#define I2C_MBMON_SCL           0x00000001  // I2C SCL Status

//*****************************************************************************
//
// The following are defines for the bit fields in the I2C_O_MCR2 register.
//
//*****************************************************************************
#define I2C_MCR2_GFPW_M         0x00000070  // I2C Glitch Filter Pulse Width
#define I2C_MCR2_GFPW_BYPASS    0x00000000  // Bypass
#define I2C_MCR2_GFPW_1         0x00000010  // 1 clock
#define I2C_MCR2_GFPW_2         0x00000020  // 2 clocks
#define I2C_MCR2_GFPW_3         0x00000030  // 3 clocks
#define I2C_MCR2_GFPW_4         0x00000040  // 4 clocks
#define I2C_MCR2_GFPW_8         0x00000050  // 8 clocks
#define I2C_MCR2_GFPW_16        0x00000060  // 16 clocks
#define I2C_MCR2_GFPW_32        0x00000070  // 32 clocks

//*****************************************************************************
//
// The following are defines for the bit fields in the I2C_O_SOAR register.
//
//*****************************************************************************
#define I2C_SOAR_OAR_M          0x0000007F  // I2C Slave Own Address
#define I2C_SOAR_OAR_S          0

//*****************************************************************************
//
// The following are defines for the bit fields in the I2C_O_SCSR register.
//
//*****************************************************************************
#define I2C_SCSR_OAR2SEL        0x00000008  // OAR2 Address Matched
#define I2C_SCSR_FBR            0x00000004  // First Byte Received
#define I2C_SCSR_TREQ           0x00000002  // Transmit Request
#define I2C_SCSR_DA             0x00000001  // Device Active
#define I2C_SCSR_RREQ           0x00000001  // Receive Request

//*****************************************************************************
//
// The following are defines for the bit fields in the I2C_O_SDR register.
//
//*****************************************************************************
#define I2C_SDR_DATA_M          0x000000FF  // Data for Transfer
#define I2C_SDR_DATA_S          0

//*****************************************************************************
//
// The following are defines for the bit fields in the I2C_O_SIMR register.
//
//*****************************************************************************
#define I2C_SIMR_STOPIM         0x00000004  // Stop Condition Interrupt Mask
#define I2C_SIMR_STARTIM        0x00000002  // Start Condition Interrupt Mask
#define I2C_SIMR_DATAIM         0x00000001  // Data Interrupt Mask

//*****************************************************************************
//
// The following are defines for the bit fields in the I2C_O_SRIS register.
//
//*****************************************************************************
#define I2C_SRIS_STOPRIS        0x00000004  // Stop Condition Raw Interrupt
                                            // Status
#define I2C_SRIS_STARTRIS       0x00000002  // Start Condition Raw Interrupt
                                            // Status
#define I2C_SRIS_DATARIS        0x00000001  // Data Raw Interrupt Status

//*****************************************************************************
//
// The following are defines for the bit fields in the I2C_O_SMIS register.
//
//*****************************************************************************
#define I2C_SMIS_STOPMIS        0x00000004  // Stop Condition Masked Interrupt
                                            // Status
#define I2C_SMIS_STARTMIS       0x00000002  // Start Condition Masked Interrupt
                                            // Status
#define I2C_SMIS_DATAMIS        0x00000001  // Data Masked Interrupt Status

//*****************************************************************************
//
// The following are defines for the bit fields in the I2C_O_SICR register.
//
//*****************************************************************************
#define I2C_SICR_STOPIC         0x00000004  // Stop Condition Interrupt Clear
#define I2C_SICR_STARTIC        0x00000002  // Start Condition Interrupt Clear
#define I2C_SICR_DATAIC         0x00000001  // Data Interrupt Clear

//*****************************************************************************
//
// The following are defines for the bit fields in the I2C_O_SOAR2 register.
//
//*****************************************************************************
#define I2C_SOAR2_OAR2EN        0x00000080  // I2C Slave Own Address 2 Enable
#define I2C_SOAR2_OAR2_M        0x0000007F  // I2C Slave Own Address 2
#define I2C_SOAR2_OAR2_S        0

//*****************************************************************************
//
// The following are defines for the bit fields in the I2C_O_SACKCTL register.
//
//*****************************************************************************
#define I2C_SACKCTL_ACKOVAL     0x00000002  // I2C Slave ACK Override Value
#define I2C_SACKCTL_ACKOEN      0x00000001  // I2C Slave ACK Override Enable

//*****************************************************************************
//
// The following are defines for the bit fields in the I2C_O_PP register.
//
//*****************************************************************************
#define I2C_PP_HS               0x00000001  // High-Speed Capable

//*****************************************************************************
//
// The following are defines for the bit fields in the I2C_O_PC register.
//
//*****************************************************************************
#define I2C_PC_HS               0x00000001  // High-Speed Capable


/* Initiate a single byte transmit of the data from Master to Slave START, RUN , STOP , */
#define I2C0_MCS_SRS_MASK 0x7
#define I2C1_MCS_SRS_MASK 0x7


#endif /* I2C_PRIVATE_H_ */
