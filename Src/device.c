
#include "main.h"
#include "device.h"

device_settings device_struct1;

void UpdateDeviceSettings(device_settings *device_struct)
{
	if  (device_struct->PWM_Duty  >=  0)  {
		TIM3->CCR3  =  0;
		TIM3->CCR4  =  device_struct->PWM_Duty;
	}  else  {
		TIM3->CCR4  =  0;
		TIM3->CCR3  =  ~(device_struct->PWM_Duty)  +  1;
	}
}

