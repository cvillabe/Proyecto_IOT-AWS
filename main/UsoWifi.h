/*
 * UsoWifi.h
 *
 *  Created on: 30/06/2023
 *      Author: cvill
 */

#ifndef MAIN_USOWIFI_H_
#define MAIN_USOWIFI_H_


#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/event_groups.h"
#include "esp_system.h"
#include "esp_wifi.h"
#include "esp_event.h"
#include "esp_log.h"
#include "esp_vfs_fat.h"
#include "driver/sdmmc_host.h"
#include "driver/gpio.h"

#include "nvs.h"
#include "nvs_flash.h"

#include "aws_iot_config.h"
#include "aws_iot_log.h"
#include "aws_iot_version.h"
#include "aws_iot_mqtt_client_interface.h"


#include "UsoWifi.h"

extern  EventGroupHandle_t wifi_event_group;
extern const int CONNECTED_BIT;

void event_handler(void* arg, esp_event_base_t event_base,
                          int32_t event_id, void* event_data);
void initialise_wifi(void);



#endif /* MAIN_USOWIFI_H_ */
