#ifndef _PWM_H_
#define _PWM_H_
#include "sys.h"//IO�����йط�װ

#define PWM_out_pin GPIO_Pin_1
#define PWM_GPIO GPIOA

//TIM_SetCompare2(TIM3,pwmval);����ռ�ձ�
//TIM_SetAutoreload(TIM3,arr);��������

void PWM_config(void);


#endif
