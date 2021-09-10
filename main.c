#include "UART.h"
#include "SSI.h"
#include "I2C.h"
#include "CAN.h"
#include "GPIO_Port.h"

/* Enable IRQ Interrupts ... This Macro enables IRQ interrupts by clearing the I-bit in the PRIMASK. */
#define Enable_Interrupts()    __asm("  CPSIE I")

/* Disable IRQ Interrupts ... This Macro disables IRQ interrupts by setting the I-bit in the PRIMASK. */
#define Disable_Interrupts()   __asm("  CPSID I")






int main()
{

  I2C_Init(&I2C_Configuration);

  SSI_Init(&SSI_Configuration);

  CAN_Init(&CAN_Configuration);

  UART0_Init();
 
  Enable_Interrupts();
 
 while(1)
  {
  }

}
