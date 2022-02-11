#include "app.h"


void APP_Init(void)
{
	BSP_Init();
}


void APP_PollingTask(void)
{
    static u32_tim_dly_t apptim_dly, jumpapp_dly;	
	static u8 x;
	
	 if(Ok == TMR0_Delay(TRUE, &apptim_dly, TMR0_DELAY_MS(2000)))
	 {	
		x = !x;
		PC6Out(x);		 
	 }

	 if(Ok == TMR0_Delay(TRUE, &jumpapp_dly, TMR0_DELAY_MS(10000)))
	 {	
		jump_application(STM32_APP_BASE);
	 }
	 
	IWDG_Feed();
}

