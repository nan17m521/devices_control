#ifndef __COMMUNICATION_H
#define __COMMUNICATION_H

#include <stdint.h>
#include "messages.h"
#include "device.h"

bool parse_normal_package(device_settings *device_struct,  uint8_t  *message);
bool parse_device_package(device_settings *device_struct,  uint8_t  *message);
void normal_response();
void device_response();


#endif //__COMMUNICATION_H
