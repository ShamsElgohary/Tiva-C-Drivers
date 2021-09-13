 /******************************************************************************
 *
 * Module: PORT
 *
 * File Name: GPIO_Private.h
 *
 * Description: Register and Preprocessor definition file for the TM4C123GH6PM Microcontroller - Port driver
 *
 * Author: Shams Elgohary
 *
 *******************************************************************************/


#ifndef GPIO_PRIVATE_H_
#define GPIO_PRIVATE_H_

#include "Std_Types.h"



/*****************************************************************************
GPIO registers base addresses
*****************************************************************************/
#define GPIO_PORTA_BASE_ADDRESS           0x40004000
#define GPIO_PORTB_BASE_ADDRESS           0x40005000
#define GPIO_PORTC_BASE_ADDRESS           0x40006000
#define GPIO_PORTD_BASE_ADDRESS           0x40007000
#define GPIO_PORTE_BASE_ADDRESS           0x40024000
#define GPIO_PORTF_BASE_ADDRESS           0x40025000

/*****************************************************************************
GPIO registers offset addresses
*****************************************************************************/
#define PORT_DATA_REG_OFFSET              0x3FC
#define PORT_DIR_REG_OFFSET               0x400
#define PORT_ALT_FUNC_REG_OFFSET          0x420
#define PORT_PULL_UP_REG_OFFSET           0x510
#define PORT_PULL_DOWN_REG_OFFSET         0x514
#define PORT_DIGITAL_ENABLE_REG_OFFSET    0x51C
#define PORT_LOCK_REG_OFFSET              0x520
#define PORT_COMMIT_REG_OFFSET            0x524
#define PORT_ANALOG_MODE_SEL_REG_OFFSET   0x528
#define PORT_CTL_REG_OFFSET               0x52C

/*****************************************************************************
GPIO registers (PORTA)
*****************************************************************************/
#define GPIO_PORTA_DATA_REG       (*((volatile uint32 *)0x400043FC))
#define GPIO_PORTA_DIR_REG        (*((volatile uint32 *)0x40004400))
#define GPIO_PORTA_AFSEL_REG      (*((volatile uint32 *)0x40004420))
#define GPIO_PORTA_PUR_REG        (*((volatile uint32 *)0x40004510))
#define GPIO_PORTA_PDR_REG        (*((volatile uint32 *)0x40004514))
#define GPIO_PORTA_DEN_REG        (*((volatile uint32 *)0x4000451C))
#define GPIO_PORTA_LOCK_REG       (*((volatile uint32 *)0x40004520))
#define GPIO_PORTA_CR_REG         (*((volatile uint32 *)0x40004524))
#define GPIO_PORTA_AMSEL_REG      (*((volatile uint32 *)0x40004528))
#define GPIO_PORTA_PCTL_REG       (*((volatile uint32 *)0x4000452C))
#define GPIO_PORTA_ODR_R        (*((volatile unsigned long *)0x4000450C))

/* PORTA External Interrupts Registers */
#define GPIO_PORTA_IS_REG         (*((volatile uint32 *)0x40004404))
#define GPIO_PORTA_IBE_REG        (*((volatile uint32 *)0x40004408))
#define GPIO_PORTA_IEV_REG        (*((volatile uint32 *)0x4000440C))
#define GPIO_PORTA_IM_REG         (*((volatile uint32 *)0x40004410))
#define GPIO_PORTA_RIS_REG        (*((volatile uint32 *)0x40004414))
#define GPIO_PORTA_ICR_REG        (*((volatile uint32 *)0x4000441C))

/*****************************************************************************
GPIO registers (PORTB)
*****************************************************************************/
#define GPIO_PORTB_DATA_REG       (*((volatile uint32 *)0x400053FC))
#define GPIO_PORTB_DIR_REG        (*((volatile uint32 *)0x40005400))
#define GPIO_PORTB_AFSEL_REG      (*((volatile uint32 *)0x40005420))
#define GPIO_PORTB_PUR_REG        (*((volatile uint32 *)0x40005510))
#define GPIO_PORTB_PDR_REG        (*((volatile uint32 *)0x40005514))
#define GPIO_PORTB_DEN_REG        (*((volatile uint32 *)0x4000551C))
#define GPIO_PORTB_LOCK_REG       (*((volatile uint32 *)0x40005520))
#define GPIO_PORTB_CR_REG         (*((volatile uint32 *)0x40005524))
#define GPIO_PORTB_AMSEL_REG      (*((volatile uint32 *)0x40005528))
#define GPIO_PORTB_PCTL_REG       (*((volatile uint32 *)0x4000552C))
#define GPIO_PORTB_ODR_R        (*((volatile unsigned long *)0x4000550C))


/* PORTB External Interrupts Registers */
#define GPIO_PORTB_IS_REG         (*((volatile uint32 *)0x40005404))
#define GPIO_PORTB_IBE_REG        (*((volatile uint32 *)0x40005408))
#define GPIO_PORTB_IEV_REG        (*((volatile uint32 *)0x4000540C))
#define GPIO_PORTB_IM_REG         (*((volatile uint32 *)0x40005410))
#define GPIO_PORTB_RIS_REG        (*((volatile uint32 *)0x40005414))
#define GPIO_PORTB_ICR_REG        (*((volatile uint32 *)0x4000541C))

/*****************************************************************************
GPIO registers (PORTC)
*****************************************************************************/
#define GPIO_PORTC_DATA_REG       (*((volatile uint32 *)0x400063FC))
#define GPIO_PORTC_DIR_REG        (*((volatile uint32 *)0x40006400))
#define GPIO_PORTC_AFSEL_REG      (*((volatile uint32 *)0x40006420))
#define GPIO_PORTC_PUR_REG        (*((volatile uint32 *)0x40006510))
#define GPIO_PORTC_PDR_REG        (*((volatile uint32 *)0x40006514))
#define GPIO_PORTC_DEN_REG        (*((volatile uint32 *)0x4000651C))
#define GPIO_PORTC_LOCK_REG       (*((volatile uint32 *)0x40006520))
#define GPIO_PORTC_CR_REG         (*((volatile uint32 *)0x40006524))
#define GPIO_PORTC_AMSEL_REG      (*((volatile uint32 *)0x40006528))
#define GPIO_PORTC_PCTL_REG       (*((volatile uint32 *)0x4000652C))
#define GPIO_PORTC_ODR_R        (*((volatile unsigned long *)0x4000650C))

/* PORTC External Interrupts Registers */
#define GPIO_PORTC_IS_REG         (*((volatile uint32 *)0x40006404))
#define GPIO_PORTC_IBE_REG        (*((volatile uint32 *)0x40006408))
#define GPIO_PORTC_IEV_REG        (*((volatile uint32 *)0x4000640C))
#define GPIO_PORTC_IM_REG         (*((volatile uint32 *)0x40006410))
#define GPIO_PORTC_RIS_REG        (*((volatile uint32 *)0x40006414))
#define GPIO_PORTC_ICR_REG        (*((volatile uint32 *)0x4000641C))

/*****************************************************************************
GPIO registers (PORTD)
*****************************************************************************/
#define GPIO_PORTD_DATA_REG       (*((volatile uint32 *)0x400073FC))
#define GPIO_PORTD_DIR_REG        (*((volatile uint32 *)0x40007400))
#define GPIO_PORTD_AFSEL_REG      (*((volatile uint32 *)0x40007420))
#define GPIO_PORTD_PUR_REG        (*((volatile uint32 *)0x40007510))
#define GPIO_PORTD_PDR_REG        (*((volatile uint32 *)0x40007514))
#define GPIO_PORTD_DEN_REG        (*((volatile uint32 *)0x4000751C))
#define GPIO_PORTD_LOCK_REG       (*((volatile uint32 *)0x40007520))
#define GPIO_PORTD_CR_REG         (*((volatile uint32 *)0x40007524))
#define GPIO_PORTD_AMSEL_REG      (*((volatile uint32 *)0x40007528))
#define GPIO_PORTD_PCTL_REG       (*((volatile uint32 *)0x4000752C))

/* PORTD External Interrupts Registers */
#define GPIO_PORTD_IS_REG         (*((volatile uint32 *)0x40007404))
#define GPIO_PORTD_IBE_REG        (*((volatile uint32 *)0x40007408))
#define GPIO_PORTD_IEV_REG        (*((volatile uint32 *)0x4000740C))
#define GPIO_PORTD_IM_REG         (*((volatile uint32 *)0x40007410))
#define GPIO_PORTD_RIS_REG        (*((volatile uint32 *)0x40007414))
#define GPIO_PORTD_ICR_REG        (*((volatile uint32 *)0x4000741C))

/*****************************************************************************
GPIO registers (PORTE)
*****************************************************************************/
#define GPIO_PORTE_DATA_REG       (*((volatile uint32 *)0x400243FC))
#define GPIO_PORTE_DIR_REG        (*((volatile uint32 *)0x40024400))
#define GPIO_PORTE_AFSEL_REG      (*((volatile uint32 *)0x40024420))
#define GPIO_PORTE_PUR_REG        (*((volatile uint32 *)0x40024510))
#define GPIO_PORTE_PDR_REG        (*((volatile uint32 *)0x40024514))
#define GPIO_PORTE_DEN_REG        (*((volatile uint32 *)0x4002451C))
#define GPIO_PORTE_LOCK_REG       (*((volatile uint32 *)0x40024520))
#define GPIO_PORTE_CR_REG         (*((volatile uint32 *)0x40024524))
#define GPIO_PORTE_AMSEL_REG      (*((volatile uint32 *)0x40024528))
#define GPIO_PORTE_PCTL_REG       (*((volatile uint32 *)0x4002452C))

/* PORTE External Interrupts Registers */
#define GPIO_PORTE_IS_REG         (*((volatile uint32 *)0x40024404))
#define GPIO_PORTE_IBE_REG        (*((volatile uint32 *)0x40024408))
#define GPIO_PORTE_IEV_REG        (*((volatile uint32 *)0x4002440C))
#define GPIO_PORTE_IM_REG         (*((volatile uint32 *)0x40024410))
#define GPIO_PORTE_RIS_REG        (*((volatile uint32 *)0x40024414))
#define GPIO_PORTE_ICR_REG        (*((volatile uint32 *)0x4002441C))

/*****************************************************************************
GPIO registers (PORTF)
*****************************************************************************/
#define GPIO_PORTF_DATA_REG       (*((volatile uint32 *)0x400253FC))
#define GPIO_PORTF_DIR_REG        (*((volatile uint32 *)0x40025400))
#define GPIO_PORTF_AFSEL_REG      (*((volatile uint32 *)0x40025420))
#define GPIO_PORTF_PUR_REG        (*((volatile uint32 *)0x40025510))
#define GPIO_PORTF_PDR_REG        (*((volatile uint32 *)0x40025514))
#define GPIO_PORTF_DEN_REG        (*((volatile uint32 *)0x4002551C))
#define GPIO_PORTF_LOCK_REG       (*((volatile uint32 *)0x40025520))
#define GPIO_PORTF_CR_REG         (*((volatile uint32 *)0x40025524))
#define GPIO_PORTF_AMSEL_REG      (*((volatile uint32 *)0x40025528))
#define GPIO_PORTF_PCTL_REG       (*((volatile uint32 *)0x4002552C))

/* PORTF External Interrupts Registers */
#define GPIO_PORTF_IS_REG         (*((volatile uint32 *)0x40025404))
#define GPIO_PORTF_IBE_REG        (*((volatile uint32 *)0x40025408))
#define GPIO_PORTF_IEV_REG        (*((volatile uint32 *)0x4002540C))
#define GPIO_PORTF_IM_REG         (*((volatile uint32 *)0x40025410))
#define GPIO_PORTF_RIS_REG        (*((volatile uint32 *)0x40025414))
#define GPIO_PORTF_ICR_REG        (*((volatile uint32 *)0x4002541C))


/*****************************************************************************
NVIC Registers
*****************************************************************************/
#define NVIC_PRI0_REG             (*((volatile uint32 *)0xE000E400))
#define NVIC_PRI1_REG             (*((volatile uint32 *)0xE000E404))
#define NVIC_PRI2_REG             (*((volatile uint32 *)0xE000E408))
#define NVIC_PRI3_REG             (*((volatile uint32 *)0xE000E40C))
#define NVIC_PRI4_REG             (*((volatile uint32 *)0xE000E410))
#define NVIC_PRI5_REG             (*((volatile uint32 *)0xE000E414))
#define NVIC_PRI6_REG             (*((volatile uint32 *)0xE000E418))
#define NVIC_PRI7_REG             (*((volatile uint32 *)0xE000E41C))
#define NVIC_PRI8_REG             (*((volatile uint32 *)0xE000E420))
#define NVIC_PRI9_REG             (*((volatile uint32 *)0xE000E424))
#define NVIC_PRI10_REG            (*((volatile uint32 *)0xE000E428))
#define NVIC_PRI11_REG            (*((volatile uint32 *)0xE000E42C))
#define NVIC_PRI12_REG            (*((volatile uint32 *)0xE000E430))
#define NVIC_PRI13_REG            (*((volatile uint32 *)0xE000E434))
#define NVIC_PRI14_REG            (*((volatile uint32 *)0xE000E438))
#define NVIC_PRI15_REG            (*((volatile uint32 *)0xE000E43C))
#define NVIC_PRI16_REG            (*((volatile uint32 *)0xE000E440))
#define NVIC_PRI17_REG            (*((volatile uint32 *)0xE000E444))
#define NVIC_PRI18_REG            (*((volatile uint32 *)0xE000E448))
#define NVIC_PRI19_REG            (*((volatile uint32 *)0xE000E44C))
#define NVIC_PRI20_REG            (*((volatile uint32 *)0xE000E450))
#define NVIC_PRI21_REG            (*((volatile uint32 *)0xE000E454))
#define NVIC_PRI22_REG            (*((volatile uint32 *)0xE000E458))
#define NVIC_PRI23_REG            (*((volatile uint32 *)0xE000E45C))
#define NVIC_PRI24_REG            (*((volatile uint32 *)0xE000E460))
#define NVIC_PRI25_REG            (*((volatile uint32 *)0xE000E464))
#define NVIC_PRI26_REG            (*((volatile uint32 *)0xE000E468))
#define NVIC_PRI27_REG            (*((volatile uint32 *)0xE000E46C))
#define NVIC_PRI28_REG            (*((volatile uint32 *)0xE000E470))
#define NVIC_PRI29_REG            (*((volatile uint32 *)0xE000E474))
#define NVIC_PRI30_REG            (*((volatile uint32 *)0xE000E478))
#define NVIC_PRI31_REG            (*((volatile uint32 *)0xE000E47C))
#define NVIC_PRI32_REG            (*((volatile uint32 *)0xE000E480))
#define NVIC_PRI33_REG            (*((volatile uint32 *)0xE000E484))
#define NVIC_PRI34_REG            (*((volatile uint32 *)0xE000E488))

#define NVIC_EN0_REG              (*((volatile uint32 *)0xE000E100))
#define NVIC_EN1_REG              (*((volatile uint32 *)0xE000E104))
#define NVIC_EN2_REG              (*((volatile uint32 *)0xE000E108))
#define NVIC_EN3_REG              (*((volatile uint32 *)0xE000E10C))
#define NVIC_EN4_REG              (*((volatile uint32 *)0xE000E110))
#define NVIC_DIS0_REG             (*((volatile uint32 *)0xE000E180))
#define NVIC_DIS1_REG             (*((volatile uint32 *)0xE000E184))
#define NVIC_DIS2_REG             (*((volatile uint32 *)0xE000E188))
#define NVIC_DIS3_REG             (*((volatile uint32 *)0xE000E18C))
#define NVIC_DIS4_REG             (*((volatile uint32 *)0xE000E190))

#define NVIC_SYSTEM_PRI1_REG      (*((volatile uint32 *)0xE000ED18))
#define NVIC_SYSTEM_PRI2_REG      (*((volatile uint32 *)0xE000ED1C))
#define NVIC_SYSTEM_PRI3_REG      (*((volatile uint32 *)0xE000ED20))
#define NVIC_SYSTEM_SYSHNDCTRL    (*((volatile uint32 *)0xE000ED24))

/*****************************************************************************
 System Control registers (SYSCTL)
*****************************************************************************/

#define SYSCTL_REGCGC2_R      (*((volatile uint32 *)0x400FE108))
#define SYSCTL_DID0_R           (*((volatile unsigned long *)0x400FE000))
#define SYSCTL_DID1_R           (*((volatile unsigned long *)0x400FE004))
#define SYSCTL_DC0_R            (*((volatile unsigned long *)0x400FE008))
#define SYSCTL_DC1_R            (*((volatile unsigned long *)0x400FE010))
#define SYSCTL_DC2_R            (*((volatile unsigned long *)0x400FE014))
#define SYSCTL_DC3_R            (*((volatile unsigned long *)0x400FE018))
#define SYSCTL_DC4_R            (*((volatile unsigned long *)0x400FE01C))
#define SYSCTL_DC5_R            (*((volatile unsigned long *)0x400FE020))
#define SYSCTL_DC6_R            (*((volatile unsigned long *)0x400FE024))
#define SYSCTL_DC7_R            (*((volatile unsigned long *)0x400FE028))
#define SYSCTL_DC8_R            (*((volatile unsigned long *)0x400FE02C))
#define SYSCTL_PBORCTL_R        (*((volatile unsigned long *)0x400FE030))
#define SYSCTL_SRCR0_R          (*((volatile unsigned long *)0x400FE040))
#define SYSCTL_SRCR1_R          (*((volatile unsigned long *)0x400FE044))
#define SYSCTL_SRCR2_R          (*((volatile unsigned long *)0x400FE048))
#define SYSCTL_RIS_R            (*((volatile unsigned long *)0x400FE050))
#define SYSCTL_IMC_R            (*((volatile unsigned long *)0x400FE054))
#define SYSCTL_MISC_R           (*((volatile unsigned long *)0x400FE058))
#define SYSCTL_RESC_R           (*((volatile unsigned long *)0x400FE05C))
#define SYSCTL_RCC_R            (*((volatile unsigned long *)0x400FE060))
#define SYSCTL_GPIOHBCTL_R      (*((volatile unsigned long *)0x400FE06C))
#define SYSCTL_RCC2_R           (*((volatile unsigned long *)0x400FE070))
#define SYSCTL_MOSCCTL_R        (*((volatile unsigned long *)0x400FE07C))
#define SYSCTL_RCGC0_R          (*((volatile unsigned long *)0x400FE100))
#define SYSCTL_RCGC1_R          (*((volatile unsigned long *)0x400FE104))
#define SYSCTL_RCGC2_R          (*((volatile unsigned long *)0x400FE108))
#define SYSCTL_SCGC0_R          (*((volatile unsigned long *)0x400FE110))
#define SYSCTL_SCGC1_R          (*((volatile unsigned long *)0x400FE114))
#define SYSCTL_SCGC2_R          (*((volatile unsigned long *)0x400FE118))
#define SYSCTL_DCGC0_R          (*((volatile unsigned long *)0x400FE120))
#define SYSCTL_DCGC1_R          (*((volatile unsigned long *)0x400FE124))
#define SYSCTL_DCGC2_R          (*((volatile unsigned long *)0x400FE128))
#define SYSCTL_DSLPCLKCFG_R     (*((volatile unsigned long *)0x400FE144))
#define SYSCTL_SYSPROP_R        (*((volatile unsigned long *)0x400FE14C))
#define SYSCTL_PIOSCCAL_R       (*((volatile unsigned long *)0x400FE150))
#define SYSCTL_PIOSCSTAT_R      (*((volatile unsigned long *)0x400FE154))
#define SYSCTL_PLLFREQ0_R       (*((volatile unsigned long *)0x400FE160))
#define SYSCTL_PLLFREQ1_R       (*((volatile unsigned long *)0x400FE164))
#define SYSCTL_PLLSTAT_R        (*((volatile unsigned long *)0x400FE168))
#define SYSCTL_DC9_R            (*((volatile unsigned long *)0x400FE190))
#define SYSCTL_NVMSTAT_R        (*((volatile unsigned long *)0x400FE1A0))
#define SYSCTL_PPWD_R           (*((volatile unsigned long *)0x400FE300))
#define SYSCTL_PPTIMER_R        (*((volatile unsigned long *)0x400FE304))
#define SYSCTL_PPGPIO_R         (*((volatile unsigned long *)0x400FE308))
#define SYSCTL_PPDMA_R          (*((volatile unsigned long *)0x400FE30C))
#define SYSCTL_PPHIB_R          (*((volatile unsigned long *)0x400FE314))
#define SYSCTL_PPUART_R         (*((volatile unsigned long *)0x400FE318))
#define SYSCTL_PPSSI_R          (*((volatile unsigned long *)0x400FE31C))
#define SYSCTL_PPI2_R          (*((volatile unsigned long *)0x400FE320))
#define SYSCTL_PPUSB_R          (*((volatile unsigned long *)0x400FE328))
#define SYSCTL_PPCAN_R          (*((volatile unsigned long *)0x400FE334))
#define SYSCTL_PPADC_R          (*((volatile unsigned long *)0x400FE338))
#define SYSCTL_PPACMP_R         (*((volatile unsigned long *)0x400FE33C))
#define SYSCTL_PPPWM_R          (*((volatile unsigned long *)0x400FE340))
#define SYSCTL_PPQEI_R          (*((volatile unsigned long *)0x400FE344))
#define SYSCTL_PPEEPROM_R       (*((volatile unsigned long *)0x400FE358))
#define SYSCTL_PPWTIMER_R       (*((volatile unsigned long *)0x400FE35C))
#define SYSCTL_SRWD_R           (*((volatile unsigned long *)0x400FE500))
#define SYSCTL_SRTIMER_R        (*((volatile unsigned long *)0x400FE504))
#define SYSCTL_SRGPIO_R         (*((volatile unsigned long *)0x400FE508))
#define SYSCTL_SRDMA_R          (*((volatile unsigned long *)0x400FE50C))
#define SYSCTL_SRHIB_R          (*((volatile unsigned long *)0x400FE514))
#define SYSCTL_SRUART_R         (*((volatile unsigned long *)0x400FE518))
#define SYSCTL_SRSSI_R          (*((volatile unsigned long *)0x400FE51C))
#define SYSCTL_SRI2C_R          (*((volatile unsigned long *)0x400FE520))
#define SYSCTL_SRUSB_R          (*((volatile unsigned long *)0x400FE528))
#define SYSCTL_SRCAN_R          (*((volatile unsigned long *)0x400FE534))
#define SYSCTL_SRADC_R          (*((volatile unsigned long *)0x400FE538))
#define SYSCTL_SRACMP_R         (*((volatile unsigned long *)0x400FE53C))
#define SYSCTL_SRPWM_R          (*((volatile unsigned long *)0x400FE540))
#define SYSCTL_SRQEI_R          (*((volatile unsigned long *)0x400FE544))
#define SYSCTL_SREEPROM_R       (*((volatile unsigned long *)0x400FE558))
#define SYSCTL_SRWTIMER_R       (*((volatile unsigned long *)0x400FE55C))
#define SYSCTL_RCGCWD_R         (*((volatile unsigned long *)0x400FE600))
#define SYSCTL_RCGCTIMER_R      (*((volatile unsigned long *)0x400FE604))
#define SYSCTL_RCGCGPIO_R       (*((volatile unsigned long *)0x400FE608))
#define SYSCTL_RCGCDMA_R        (*((volatile unsigned long *)0x400FE60C))
#define SYSCTL_RCGCHIB_R        (*((volatile unsigned long *)0x400FE614))
#define SYSCTL_RCGCUART_R       (*((volatile unsigned long *)0x400FE618))
#define SYSCTL_RCGCSSI_R        (*((volatile unsigned long *)0x400FE61C))
#define SYSCTL_RCGCI2C_R        (*((volatile unsigned long *)0x400FE620))
#define SYSCTL_RCGCUSB_R        (*((volatile unsigned long *)0x400FE628))
#define SYSCTL_RCGCCAN_R        (*((volatile unsigned long *)0x400FE634))
#define SYSCTL_RCGCADC_R        (*((volatile unsigned long *)0x400FE638))
#define SYSCTL_RCGCACMP_R       (*((volatile unsigned long *)0x400FE63C))
#define SYSCTL_RCGCPWM_R        (*((volatile unsigned long *)0x400FE640))
#define SYSCTL_RCGCQEI_R        (*((volatile unsigned long *)0x400FE644))
#define SYSCTL_RCGCEEPROM_R     (*((volatile unsigned long *)0x400FE658))
#define SYSCTL_RCGCWTIMER_R     (*((volatile unsigned long *)0x400FE65C))
#define SYSCTL_SCGCWD_R         (*((volatile unsigned long *)0x400FE700))
#define SYSCTL_SCGCTIMER_R      (*((volatile unsigned long *)0x400FE704))
#define SYSCTL_SCGCDMA_R        (*((volatile unsigned long *)0x400FE70C))
#define SYSCTL_SCGCHIB_R        (*((volatile unsigned long *)0x400FE714))
#define SYSCTL_SCGCUART_R       (*((volatile unsigned long *)0x400FE718))
#define SYSCTL_SCGCSSI_R        (*((volatile unsigned long *)0x400FE71C))
#define SYSCTL_SCGCI2C_R        (*((volatile unsigned long *)0x400FE720))
#define SYSCTL_SCGCUSB_R        (*((volatile unsigned long *)0x400FE728))
#define SYSCTL_SCGCCAN_R        (*((volatile unsigned long *)0x400FE734))
#define SYSCTL_SCGCADC_R        (*((volatile unsigned long *)0x400FE738))
#define SYSCTL_SCGCACMP_R       (*((volatile unsigned long *)0x400FE73C))
#define SYSCTL_SCGCPWM_R        (*((volatile unsigned long *)0x400FE740))
#define SYSCTL_SCGCQEI_R        (*((volatile unsigned long *)0x400FE744))
#define SYSCTL_SCGCEEPROM_R     (*((volatile unsigned long *)0x400FE758))
#define SYSCTL_SCGCWTIMER_R     (*((volatile unsigned long *)0x400FE75C))
#define SYSCTL_DCGCWD_R         (*((volatile unsigned long *)0x400FE800))
#define SYSCTL_DCGCTIMER_R      (*((volatile unsigned long *)0x400FE804))
#define SYSCTL_DCGCGPIO_R       (*((volatile unsigned long *)0x400FE808))
#define SYSCTL_DCGCDMA_R        (*((volatile unsigned long *)0x400FE80C))
#define SYSCTL_DCGCHIB_R        (*((volatile unsigned long *)0x400FE814))
#define SYSCTL_DCGCUART_R       (*((volatile unsigned long *)0x400FE818))
#define SYSCTL_DCGCSSI_R        (*((volatile unsigned long *)0x400FE81C))
#define SYSCTL_DCGCI2C_R        (*((volatile unsigned long *)0x400FE820))
#define SYSCTL_DCGCUSB_R        (*((volatile unsigned long *)0x400FE828))
#define SYSCTL_DCGCCAN_R        (*((volatile unsigned long *)0x400FE834))
#define SYSCTL_DCGCADC_R        (*((volatile unsigned long *)0x400FE838))
#define SYSCTL_DCGCACMP_R       (*((volatile unsigned long *)0x400FE83C))
#define SYSCTL_DCGCPWM_R        (*((volatile unsigned long *)0x400FE840))
#define SYSCTL_DCGCQEI_R        (*((volatile unsigned long *)0x400FE844))
#define SYSCTL_DCGCEEPROM_R     (*((volatile unsigned long *)0x400FE858))
#define SYSCTL_DCGCWTIMER_R     (*((volatile unsigned long *)0x400FE85C))
#define SYSCTL_PRWD_R           (*((volatile unsigned long *)0x400FEA00))
#define SYSCTL_PRTIMER_R        (*((volatile unsigned long *)0x400FEA04))
#define SYSCTL_PRGPIO_R         (*((volatile unsigned long *)0x400FEA08))
#define SYSCTL_PRDMA_R          (*((volatile unsigned long *)0x400FEA0C))
#define SYSCTL_PRHIB_R          (*((volatile unsigned long *)0x400FEA14))
#define SYSCTL_PRUART_R         (*((volatile unsigned long *)0x400FEA18))
#define SYSCTL_PRSSI_R          (*((volatile unsigned long *)0x400FEA1C))
#define SYSCTL_PRI2C_R          (*((volatile unsigned long *)0x400FEA20))
#define SYSCTL_PRUSB_R          (*((volatile unsigned long *)0x400FEA28))
#define SYSCTL_PRCAN_R          (*((volatile unsigned long *)0x400FEA34))
#define SYSCTL_PRADC_R          (*((volatile unsigned long *)0x400FEA38))
#define SYSCTL_PRACMP_R         (*((volatile unsigned long *)0x400FEA3C))
#define SYSCTL_PRPWM_R          (*((volatile unsigned long *)0x400FEA40))
#define SYSCTL_PRQEI_R          (*((volatile unsigned long *)0x400FEA44))
#define SYSCTL_PREEPROM_R       (*((volatile unsigned long *)0x400FEA58))
#define SYSCTL_PRWTIMER_R       (*((volatile unsigned long *)0x400FEA5C))



//*****************************************************************************
//
// The following are defines for the bit fields in the GPIO_PCTL register for
// port A.
//
//*****************************************************************************
#define GPIO_PCTL_PA7_M         0xF0000000  // PA7 mask
#define GPIO_PCTL_PA7_I2C1SDA   0x30000000  // I2C1SDA on PA7
#define GPIO_PCTL_PA7_M1PWM3    0x50000000  // M1PWM3 on PA7
#define GPIO_PCTL_PA6_M         0x0F000000  // PA6 mask
#define GPIO_PCTL_PA6_I2C1SCL   0x03000000  // I2C1SCL on PA6
#define GPIO_PCTL_PA6_M1PWM2    0x05000000  // M1PWM2 on PA6
#define GPIO_PCTL_PA5_M         0x00F00000  // PA5 mask
#define GPIO_PCTL_PA5_SSI0TX    0x00200000  // SSI0TX on PA5
#define GPIO_PCTL_PA4_M         0x000F0000  // PA4 mask
#define GPIO_PCTL_PA4_SSI0RX    0x00020000  // SSI0RX on PA4
#define GPIO_PCTL_PA3_M         0x0000F000  // PA3 mask
#define GPIO_PCTL_PA3_SSI0FSS   0x00002000  // SSI0FSS on PA3
#define GPIO_PCTL_PA2_M         0x00000F00  // PA2 mask
#define GPIO_PCTL_PA2_SSI0CLK   0x00000200  // SSI0CLK on PA2
#define GPIO_PCTL_PA1_M         0x000000F0  // PA1 mask
#define GPIO_PCTL_PA1_U0TX      0x00000010  // U0TX on PA1
#define GPIO_PCTL_PA1_CAN1TX    0x00000080  // CAN1TX on PA1
#define GPIO_PCTL_PA0_M         0x0000000F  // PA0 mask
#define GPIO_PCTL_PA0_U0RX      0x00000001  // U0RX on PA0
#define GPIO_PCTL_PA0_CAN1RX    0x00000008  // CAN1RX on PA0

//*****************************************************************************
//
// The following are defines for the bit fields in the GPIO_PCTL register for
// port B.
//
//*****************************************************************************
#define GPIO_PCTL_PB7_M         0xF0000000  // PB7 mask
#define GPIO_PCTL_PB7_SSI2TX    0x20000000  // SSI2TX on PB7
#define GPIO_PCTL_PB7_M0PWM1    0x40000000  // M0PWM1 on PB7
#define GPIO_PCTL_PB7_T0CCP1    0x70000000  // T0CCP1 on PB7
#define GPIO_PCTL_PB6_M         0x0F000000  // PB6 mask
#define GPIO_PCTL_PB6_SSI2RX    0x02000000  // SSI2RX on PB6
#define GPIO_PCTL_PB6_M0PWM0    0x04000000  // M0PWM0 on PB6
#define GPIO_PCTL_PB6_T0CCP0    0x07000000  // T0CCP0 on PB6
#define GPIO_PCTL_PB5_M         0x00F00000  // PB5 mask
#define GPIO_PCTL_PB5_SSI2FSS   0x00200000  // SSI2FSS on PB5
#define GPIO_PCTL_PB5_M0PWM3    0x00400000  // M0PWM3 on PB5
#define GPIO_PCTL_PB5_T1CCP1    0x00700000  // T1CCP1 on PB5
#define GPIO_PCTL_PB5_CAN0TX    0x00800000  // CAN0TX on PB5
#define GPIO_PCTL_PB4_M         0x000F0000  // PB4 mask
#define GPIO_PCTL_PB4_SSI2CLK   0x00020000  // SSI2CLK on PB4
#define GPIO_PCTL_PB4_M0PWM2    0x00040000  // M0PWM2 on PB4
#define GPIO_PCTL_PB4_T1CCP0    0x00070000  // T1CCP0 on PB4
#define GPIO_PCTL_PB4_CAN0RX    0x00080000  // CAN0RX on PB4
#define GPIO_PCTL_PB3_M         0x0000F000  // PB3 mask
#define GPIO_PCTL_PB3_I2C0SDA   0x00003000  // I2C0SDA on PB3
#define GPIO_PCTL_PB3_T3CCP1    0x00007000  // T3CCP1 on PB3
#define GPIO_PCTL_PB2_M         0x00000F00  // PB2 mask
#define GPIO_PCTL_PB2_I2C0SCL   0x00000300  // I2C0SCL on PB2
#define GPIO_PCTL_PB2_T3CCP0    0x00000700  // T3CCP0 on PB2
#define GPIO_PCTL_PB1_M         0x000000F0  // PB1 mask
#define GPIO_PCTL_PB1_USB0VBUS  0x00000000  // USB0VBUS on PB1
#define GPIO_PCTL_PB1_U1TX      0x00000010  // U1TX on PB1
#define GPIO_PCTL_PB1_T2CCP1    0x00000070  // T2CCP1 on PB1
#define GPIO_PCTL_PB0_M         0x0000000F  // PB0 mask
#define GPIO_PCTL_PB0_USB0ID    0x00000000  // USB0ID on PB0
#define GPIO_PCTL_PB0_U1RX      0x00000001  // U1RX on PB0
#define GPIO_PCTL_PB0_T2CCP0    0x00000007  // T2CCP0 on PB0

//*****************************************************************************
//
// The following are defines for the bit fields in the GPIO_PCTL register for
// port C.
//
//*****************************************************************************
#define GPIO_PCTL_PC7_M         0xF0000000  // PC7 mask
#define GPIO_PCTL_PC7_U3TX      0x10000000  // U3TX on PC7
#define GPIO_PCTL_PC7_WT1CCP1   0x70000000  // WT1CCP1 on PC7
#define GPIO_PCTL_PC7_USB0PFLT  0x80000000  // USB0PFLT on PC7
#define GPIO_PCTL_PC6_M         0x0F000000  // PC6 mask
#define GPIO_PCTL_PC6_U3RX      0x01000000  // U3RX on PC6
#define GPIO_PCTL_PC6_PHB1      0x06000000  // PHB1 on PC6
#define GPIO_PCTL_PC6_WT1CCP0   0x07000000  // WT1CCP0 on PC6
#define GPIO_PCTL_PC6_USB0EPEN  0x08000000  // USB0EPEN on PC6
#define GPIO_PCTL_PC5_M         0x00F00000  // PC5 mask
#define GPIO_PCTL_PC5_U4TX      0x00100000  // U4TX on PC5
#define GPIO_PCTL_PC5_U1TX      0x00200000  // U1TX on PC5
#define GPIO_PCTL_PC5_M0PWM7    0x00400000  // M0PWM7 on PC5
#define GPIO_PCTL_PC5_PHA1      0x00600000  // PHA1 on PC5
#define GPIO_PCTL_PC5_WT0CCP1   0x00700000  // WT0CCP1 on PC5
#define GPIO_PCTL_PC5_U1CTS     0x00800000  // U1CTS on PC5
#define GPIO_PCTL_PC4_M         0x000F0000  // PC4 mask
#define GPIO_PCTL_PC4_U4RX      0x00010000  // U4RX on PC4
#define GPIO_PCTL_PC4_U1RX      0x00020000  // U1RX on PC4
#define GPIO_PCTL_PC4_M0PWM6    0x00040000  // M0PWM6 on PC4
#define GPIO_PCTL_PC4_IDX1      0x00060000  // IDX1 on PC4
#define GPIO_PCTL_PC4_WT0CCP0   0x00070000  // WT0CCP0 on PC4
#define GPIO_PCTL_PC4_U1RTS     0x00080000  // U1RTS on PC4
#define GPIO_PCTL_PC3_M         0x0000F000  // PC3 mask
#define GPIO_PCTL_PC3_TDO       0x00001000  // TDO on PC3
#define GPIO_PCTL_PC3_T5CCP1    0x00007000  // T5CCP1 on PC3
#define GPIO_PCTL_PC2_M         0x00000F00  // PC2 mask
#define GPIO_PCTL_PC2_TDI       0x00000100  // TDI on PC2
#define GPIO_PCTL_PC2_T5CCP0    0x00000700  // T5CCP0 on PC2
#define GPIO_PCTL_PC1_M         0x000000F0  // PC1 mask
#define GPIO_PCTL_PC1_TMS       0x00000010  // TMS on PC1
#define GPIO_PCTL_PC1_T4CCP1    0x00000070  // T4CCP1 on PC1
#define GPIO_PCTL_PC0_M         0x0000000F  // PC0 mask
#define GPIO_PCTL_PC0_TCK       0x00000001  // TCK on PC0
#define GPIO_PCTL_PC0_T4CCP0    0x00000007  // T4CCP0 on PC0

//*****************************************************************************
//
// The following are defines for the bit fields in the GPIO_PCTL register for
// port D.
//
//*****************************************************************************
#define GPIO_PCTL_PD7_M         0xF0000000  // PD7 mask
#define GPIO_PCTL_PD7_U2TX      0x10000000  // U2TX on PD7
#define GPIO_PCTL_PD7_PHB0      0x60000000  // PHB0 on PD7
#define GPIO_PCTL_PD7_WT5CCP1   0x70000000  // WT5CCP1 on PD7
#define GPIO_PCTL_PD7_NMI       0x80000000  // NMI on PD7
#define GPIO_PCTL_PD6_M         0x0F000000  // PD6 mask
#define GPIO_PCTL_PD6_U2RX      0x01000000  // U2RX on PD6
#define GPIO_PCTL_PD6_M0FAULT0  0x04000000  // M0FAULT0 on PD6
#define GPIO_PCTL_PD6_PHA0      0x06000000  // PHA0 on PD6
#define GPIO_PCTL_PD6_WT5CCP0   0x07000000  // WT5CCP0 on PD6
#define GPIO_PCTL_PD5_M         0x00F00000  // PD5 mask
#define GPIO_PCTL_PD5_USB0DP    0x00000000  // USB0DP on PD5
#define GPIO_PCTL_PD5_U6TX      0x00100000  // U6TX on PD5
#define GPIO_PCTL_PD5_WT4CCP1   0x00700000  // WT4CCP1 on PD5
#define GPIO_PCTL_PD4_M         0x000F0000  // PD4 mask
#define GPIO_PCTL_PD4_USB0DM    0x00000000  // USB0DM on PD4
#define GPIO_PCTL_PD4_U6RX      0x00010000  // U6RX on PD4
#define GPIO_PCTL_PD4_WT4CCP0   0x00070000  // WT4CCP0 on PD4
#define GPIO_PCTL_PD3_M         0x0000F000  // PD3 mask
#define GPIO_PCTL_PD3_AIN4      0x00000000  // AIN4 on PD3
#define GPIO_PCTL_PD3_SSI3TX    0x00001000  // SSI3TX on PD3
#define GPIO_PCTL_PD3_SSI1TX    0x00002000  // SSI1TX on PD3
#define GPIO_PCTL_PD3_IDX0      0x00006000  // IDX0 on PD3
#define GPIO_PCTL_PD3_WT3CCP1   0x00007000  // WT3CCP1 on PD3
#define GPIO_PCTL_PD3_USB0PFLT  0x00008000  // USB0PFLT on PD3
#define GPIO_PCTL_PD2_M         0x00000F00  // PD2 mask
#define GPIO_PCTL_PD2_AIN5      0x00000000  // AIN5 on PD2
#define GPIO_PCTL_PD2_SSI3RX    0x00000100  // SSI3RX on PD2
#define GPIO_PCTL_PD2_SSI1RX    0x00000200  // SSI1RX on PD2
#define GPIO_PCTL_PD2_M0FAULT0  0x00000400  // M0FAULT0 on PD2
#define GPIO_PCTL_PD2_WT3CCP0   0x00000700  // WT3CCP0 on PD2
#define GPIO_PCTL_PD2_USB0EPEN  0x00000800  // USB0EPEN on PD2
#define GPIO_PCTL_PD1_M         0x000000F0  // PD1 mask
#define GPIO_PCTL_PD1_AIN6      0x00000000  // AIN6 on PD1
#define GPIO_PCTL_PD1_SSI3FSS   0x00000010  // SSI3FSS on PD1
#define GPIO_PCTL_PD1_SSI1FSS   0x00000020  // SSI1FSS on PD1
#define GPIO_PCTL_PD1_I2C3SDA   0x00000030  // I2C3SDA on PD1
#define GPIO_PCTL_PD1_M0PWM7    0x00000040  // M0PWM7 on PD1
#define GPIO_PCTL_PD1_M1PWM1    0x00000050  // M1PWM1 on PD1
#define GPIO_PCTL_PD1_WT2CCP1   0x00000070  // WT2CCP1 on PD1
#define GPIO_PCTL_PD0_M         0x0000000F  // PD0 mask
#define GPIO_PCTL_PD0_AIN7      0x00000000  // AIN7 on PD0
#define GPIO_PCTL_PD0_SSI3CLK   0x00000001  // SSI3CLK on PD0
#define GPIO_PCTL_PD0_SSI1CLK   0x00000002  // SSI1CLK on PD0
#define GPIO_PCTL_PD0_I2C3SCL   0x00000003  // I2C3SCL on PD0
#define GPIO_PCTL_PD0_M0PWM6    0x00000004  // M0PWM6 on PD0
#define GPIO_PCTL_PD0_M1PWM0    0x00000005  // M1PWM0 on PD0
#define GPIO_PCTL_PD0_WT2CCP0   0x00000007  // WT2CCP0 on PD0

//*****************************************************************************
//
// The following are defines for the bit fields in the GPIO_PCTL register for
// port E.
//
//*****************************************************************************
#define GPIO_PCTL_PE5_M         0x00F00000  // PE5 mask
#define GPIO_PCTL_PE5_AIN8      0x00000000  // AIN8 on PE5
#define GPIO_PCTL_PE5_U5TX      0x00100000  // U5TX on PE5
#define GPIO_PCTL_PE5_I2C2SDA   0x00300000  // I2C2SDA on PE5
#define GPIO_PCTL_PE5_M0PWM5    0x00400000  // M0PWM5 on PE5
#define GPIO_PCTL_PE5_M1PWM3    0x00500000  // M1PWM3 on PE5
#define GPIO_PCTL_PE5_CAN0TX    0x00800000  // CAN0TX on PE5
#define GPIO_PCTL_PE4_M         0x000F0000  // PE4 mask
#define GPIO_PCTL_PE4_AIN9      0x00000000  // AIN9 on PE4
#define GPIO_PCTL_PE4_U5RX      0x00010000  // U5RX on PE4
#define GPIO_PCTL_PE4_I2C2SCL   0x00030000  // I2C2SCL on PE4
#define GPIO_PCTL_PE4_M0PWM4    0x00040000  // M0PWM4 on PE4
#define GPIO_PCTL_PE4_M1PWM2    0x00050000  // M1PWM2 on PE4
#define GPIO_PCTL_PE4_CAN0RX    0x00080000  // CAN0RX on PE4
#define GPIO_PCTL_PE3_M         0x0000F000  // PE3 mask
#define GPIO_PCTL_PE3_AIN0      0x00000000  // AIN0 on PE3
#define GPIO_PCTL_PE2_M         0x00000F00  // PE2 mask
#define GPIO_PCTL_PE2_AIN1      0x00000000  // AIN1 on PE2
#define GPIO_PCTL_PE1_M         0x000000F0  // PE1 mask
#define GPIO_PCTL_PE1_AIN2      0x00000000  // AIN2 on PE1
#define GPIO_PCTL_PE1_U7TX      0x00000010  // U7TX on PE1
#define GPIO_PCTL_PE0_M         0x0000000F  // PE0 mask
#define GPIO_PCTL_PE0_AIN3      0x00000000  // AIN3 on PE0
#define GPIO_PCTL_PE0_U7RX      0x00000001  // U7RX on PE0

//*****************************************************************************
//
// The following are defines for the bit fields in the GPIO_PCTL register for
// port F.
//
//*****************************************************************************
#define GPIO_PCTL_PF4_M         0x000F0000  // PF4 mask
#define GPIO_PCTL_PF4_M1FAULT0  0x00050000  // M1FAULT0 on PF4
#define GPIO_PCTL_PF4_IDX0      0x00060000  // IDX0 on PF4
#define GPIO_PCTL_PF4_T2CCP0    0x00070000  // T2CCP0 on PF4
#define GPIO_PCTL_PF4_USB0EPEN  0x00080000  // USB0EPEN on PF4
#define GPIO_PCTL_PF3_M         0x0000F000  // PF3 mask
#define GPIO_PCTL_PF3_SSI1FSS   0x00002000  // SSI1FSS on PF3
#define GPIO_PCTL_PF3_CAN0TX    0x00003000  // CAN0TX on PF3
#define GPIO_PCTL_PF3_M1PWM7    0x00005000  // M1PWM7 on PF3
#define GPIO_PCTL_PF3_T1CCP1    0x00007000  // T1CCP1 on PF3
#define GPIO_PCTL_PF3_TRCLK     0x0000E000  // TRCLK on PF3
#define GPIO_PCTL_PF2_M         0x00000F00  // PF2 mask
#define GPIO_PCTL_PF2_SSI1CLK   0x00000200  // SSI1CLK on PF2
#define GPIO_PCTL_PF2_M0FAULT0  0x00000400  // M0FAULT0 on PF2
#define GPIO_PCTL_PF2_M1PWM6    0x00000500  // M1PWM6 on PF2
#define GPIO_PCTL_PF2_T1CCP0    0x00000700  // T1CCP0 on PF2
#define GPIO_PCTL_PF2_TRD0      0x00000E00  // TRD0 on PF2
#define GPIO_PCTL_PF1_M         0x000000F0  // PF1 mask
#define GPIO_PCTL_PF1_U1CTS     0x00000010  // U1CTS on PF1
#define GPIO_PCTL_PF1_SSI1TX    0x00000020  // SSI1TX on PF1
#define GPIO_PCTL_PF1_M1PWM5    0x00000050  // M1PWM5 on PF1
#define GPIO_PCTL_PF1_PHB0      0x00000060  // PHB0 on PF1
#define GPIO_PCTL_PF1_T0CCP1    0x00000070  // T0CCP1 on PF1
#define GPIO_PCTL_PF1_C1O       0x00000090  // C1O on PF1
#define GPIO_PCTL_PF1_TRD1      0x000000E0  // TRD1 on PF1
#define GPIO_PCTL_PF0_M         0x0000000F  // PF0 mask
#define GPIO_PCTL_PF0_U1RTS     0x00000001  // U1RTS on PF0
#define GPIO_PCTL_PF0_SSI1RX    0x00000002  // SSI1RX on PF0
#define GPIO_PCTL_PF0_CAN0RX    0x00000003  // CAN0RX on PF0
#define GPIO_PCTL_PF0_M1PWM4    0x00000005  // M1PWM4 on PF0
#define GPIO_PCTL_PF0_PHA0      0x00000006  // PHA0 on PF0
#define GPIO_PCTL_PF0_T0CCP0    0x00000007  // T0CCP0 on PF0
#define GPIO_PCTL_PF0_NMI       0x00000008  // NMI on PF0


/* MASKS FOR GPIO CLOCKS */
#define SYSCTL_RCGCGPIO_GPIOA_MASK       0x01
#define SYSCTL_RCGCGPIO_GPIOB_MASK       0x02
#define SYSCTL_RCGCGPIO_GPIOC_MASK       0x04
#define SYSCTL_RCGCGPIO_GPIOD_MASK       0x08
#define SYSCTL_RCGCGPIO_GPIOE_MASK       0x010
#define SYSCTL_RCGCGPIO_GPIOF_MASK       0x20

#endif /* GPIO_PRIVATE_H_ */
