
#include "device.h"

device_settings device_struct1;

void UpdateDeviceSettings(device_settings *device_struct) {
	TIM3->CCR1  =  device_struct->PWM_Duty;
}

