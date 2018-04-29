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

void Inits(void);//��ʼ��

void Mouse_display(void);//��ʾ���

DAC_WAVE_Typedef DAC_SETTING;

 int main(void)
 { 

	POINT_COLOR=RED;//��������Ϊ��ɫ 
	Inits();
	 collect_once();
	LCD_Clear(WHITE);//����
	 while(1)
	 {
		 Mouse_display();
			GUI_draw();

	 }
}
 
 void Mouse_display(void)
{
		LCD_Display_Dir(0);//����
		TP_Scan(0);
		 //LCD_Draw_Circle(tp_dev.x[0],tp_dev.y[0],7);
}

void Inits()
{
	delay_init();	    	 //��ʱ������ʼ��	  
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2); //����NVIC�жϷ���2:2λ��ռ���ȼ���2λ��Ӧ���ȼ�
	uart_init(9600);	 	//���ڳ�ʼ��Ϊ9600
	LED_Init();		  		//��ʼ����LED���ӵ�Ӳ���ӿ�
	LCD_Init();			   	//��ʼ��LCD 	
	KEY_Init();				//������ʼ��		 	
	tp_dev.init();			//��������ʼ��
	usmart_dev.init(72); 	//��ʼ��USMART		
		Adc_Init();
	DAC_SETTING.WAVE_P=sin_wave;
	DAC_SETTING.HZ=5;
	Wave_Init(&DAC_SETTING);
}

