#include "app.h"


void APP_Init(void)
{
	BSP_Init();

}


void APP_PollingTask(void)
{	
    static u32_tim_dly_t apptim_dly, reset_dly;	
	static u8 x;
	
//	 if(Ok == TMR0_Delay(TRUE, &apptim_dly, TMR0_DELAY_MS(300)))
//	 {	
//		x = !x;
//		PC6Out(x);		 
//	 }
//	 
//	 if(Ok == TMR0_Delay(TRUE, &reset_dly, TMR0_DELAY_MS(10000)))
//	 {	
//		//jump_application(STM32_BOOTLOADER_BASE);
//	 }
	 
	 
	//IWDG_Feed();
}


void APP_ParamInit(void)
{


}


void APP_ParamLoad(void)
{


}
