#ifndef __DAC_H
#define __DAC_H	 
#include "sys.h"	    
								    
typedef struct DAC_WAVE
{
	uint32_t HZ;//5-281250
	uint16_t DC_value;
	uint16_t Amplitude;//����
	uint16_t* WAVE_P;//����ָ��
}DAC_WAVE_Typedef;



void Wave_Init(DAC_WAVE_Typedef* wave);
void DAC_HZ_Add(void);
void DAC_HZ_Reduce(void);
void Dac1_Set_Vol(u16 vol);
#endif

















