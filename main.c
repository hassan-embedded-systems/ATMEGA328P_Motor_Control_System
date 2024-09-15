/*
 * motor_drive.c
 *
 * Created: 9/15/2024 10:05:22 AM
 * Author : Hassan Abdul-razeq
 */ 
#define F_CPU 16000000
#include "Motor_interface.h"
#include <util/delay.h>

int main(void)
{
	Motor_init();

	while (1)
	{
		Motor_Forward();
		_delay_ms(300);
		Motor_Stop();
		_delay_ms(100);

		Motor_Backward();
		_delay_ms(300);
		Motor_Stop();
		_delay_ms(100);

		Motor_Turn_Right();
		_delay_ms(300);
		Motor_Stop();
		_delay_ms(100);

		Motor_Turn_Left();
		_delay_ms(300);
		Motor_Stop();
		_delay_ms(100);

		Motor_Stop();
		_delay_ms(100);
		
	}
}


