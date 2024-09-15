/*
 * Motor_prog.c
 *
 * Created: 9/15/2024 10:45:36 AM
 *  Author: Hassan 
 */

#include "DIO_int.h"
#include "Motor_confg.h"
#include "Motor_interface.h"

void Motor_init (void)
{
    DIO_Void_SetPINDir(MOTOR_RIGHT_PORT,MOTOR_RIGHT_PIN0,DIO_uint8_Dir_OUTPUT);
    DIO_Void_SetPINDir(MOTOR_RIGHT_PORT,MOTOR_RIGHT_PIN1,DIO_uint8_Dir_OUTPUT);
    
    DIO_Void_SetPINDir(MOTOR_LEFT_PORT,MOTOR_LEFT_PIN0,DIO_uint8_Dir_OUTPUT);
    DIO_Void_SetPINDir(MOTOR_LEFT_PORT,MOTOR_LEFT_PIN1,DIO_uint8_Dir_OUTPUT);
}

void Motor_Forward (void)
{
    DIO_Void_SetPINValue(MOTOR_RIGHT_PORT,MOTOR_RIGHT_PIN0,DIO_uint8_Value_HIGH);
    DIO_Void_SetPINValue(MOTOR_RIGHT_PORT,MOTOR_RIGHT_PIN1,DIO_uint8_Value_LOW);
    
    DIO_Void_SetPINValue(MOTOR_LEFT_PORT,MOTOR_LEFT_PIN0,DIO_uint8_Value_HIGH);
    DIO_Void_SetPINValue(MOTOR_LEFT_PORT,MOTOR_LEFT_PIN1,DIO_uint8_Value_LOW);
}

void Motor_Backward (void)
{
    DIO_Void_SetPINValue(MOTOR_RIGHT_PORT,MOTOR_RIGHT_PIN0,DIO_uint8_Value_LOW);
    DIO_Void_SetPINValue(MOTOR_RIGHT_PORT,MOTOR_RIGHT_PIN1,DIO_uint8_Value_HIGH);
    
    DIO_Void_SetPINValue(MOTOR_LEFT_PORT,MOTOR_LEFT_PIN0,DIO_uint8_Value_LOW);
    DIO_Void_SetPINValue(MOTOR_LEFT_PORT,MOTOR_LEFT_PIN1,DIO_uint8_Value_HIGH);
}

void Motor_Turn_Right (void)
{
    DIO_Void_SetPINValue(MOTOR_RIGHT_PORT,MOTOR_RIGHT_PIN0,DIO_uint8_Value_LOW);
    DIO_Void_SetPINValue(MOTOR_RIGHT_PORT,MOTOR_RIGHT_PIN1,DIO_uint8_Value_LOW);
    
    DIO_Void_SetPINValue(MOTOR_LEFT_PORT,MOTOR_LEFT_PIN0,DIO_uint8_Value_HIGH);
    DIO_Void_SetPINValue(MOTOR_LEFT_PORT,MOTOR_LEFT_PIN1,DIO_uint8_Value_LOW);
}

void Motor_Turn_Left (void)
{
    DIO_Void_SetPINValue(MOTOR_RIGHT_PORT,MOTOR_RIGHT_PIN0,DIO_uint8_Value_HIGH);
    DIO_Void_SetPINValue(MOTOR_RIGHT_PORT,MOTOR_RIGHT_PIN1,DIO_uint8_Value_LOW);
    
    DIO_Void_SetPINValue(MOTOR_LEFT_PORT,MOTOR_LEFT_PIN0,DIO_uint8_Value_LOW);
    DIO_Void_SetPINValue(MOTOR_LEFT_PORT,MOTOR_LEFT_PIN1,DIO_uint8_Value_LOW);
}

void Motor_Stop (void)
{
	
	DIO_Void_SetPINValue(MOTOR_RIGHT_PORT,MOTOR_RIGHT_PIN0,DIO_uint8_Value_LOW);
	DIO_Void_SetPINValue(MOTOR_RIGHT_PORT,MOTOR_RIGHT_PIN1,DIO_uint8_Value_LOW);
	
	DIO_Void_SetPINValue(MOTOR_LEFT_PORT,MOTOR_LEFT_PIN0,DIO_uint8_Value_LOW);
	DIO_Void_SetPINValue(MOTOR_LEFT_PORT,MOTOR_LEFT_PIN1,DIO_uint8_Value_LOW);
}