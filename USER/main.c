#include "led.h"
#include "delay.h"
#include "sys.h"
#include "usart.h"
#include "lcd.h"
#include "key.h"  
#include "24cxx.h" 
#include "myiic.h"
#include "touch.h" 
#include "GUI.h"
#include "usmart.h"
#include "adc.h"
#include "dac.h"
#include "pwm.h"
#include "stm32f10x_dma.h"
#include "wave.h"

void Inits(void);//初始化

void Mouse_display(void);//显示鼠标

DAC_WAVE_Typedef DAC_SETTING;

 int main(void)
 { 

	POINT_COLOR=RED;//设置字体为红色 
	Inits();
	 collect_once();
	LCD_Clear(WHITE);//清屏
	 while(1)
	 {
		 Mouse_display();
			GUI_draw();

	 }
}
 
 void Mouse_display(void)
{
		LCD_Display_Dir(0);//竖屏
		TP_Scan(0);
		 //LCD_Draw_Circle(tp_dev.x[0],tp_dev.y[0],7);
}

void Inits()
{
	delay_init();	    	 //延时函数初始化	  
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2); //设置NVIC中断分组2:2位抢占优先级，2位响应优先级
	uart_init(9600);	 	//串口初始化为9600
	LED_Init();		  		//初始化与LED连接的硬件接口
	LCD_Init();			   	//初始化LCD 	
	KEY_Init();				//按键初始化		 	
	tp_dev.init();			//触摸屏初始化
	usmart_dev.init(72); 	//初始化USMART		
		Adc_Init();
	DAC_SETTING.WAVE_P=sin_wave;
	DAC_SETTING.HZ=5;
	Wave_Init(&DAC_SETTING);
}

