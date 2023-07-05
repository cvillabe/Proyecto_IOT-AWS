/*
 * UsoAws.h
 *
 *  Created on: 29/06/2023
 *      Author: cvill
 */

#ifndef MAIN_USOAWS_H_
#define MAIN_USOAWS_H_

#include <string.h>
#include <stdio.h>
#include "esp_system.h"
#include "esp_event.h"
#include "esp_log.h"
#include "aws_iot_config.h"
#include "aws_iot_log.h"
#include "aws_iot_version.h"
#include "aws_iot_mqtt_client_interface.h"
#include "UsoWifi.h"
#include "UsoAws.h"
#include <esp_idf_version.h>
#include "driver/gpio.h"

void EventoSuscripcion(IoT_Publish_Message_Params *params);

void iot_subscribe_callback_handler(AWS_IoT_Client *pClient, char *topicName, uint16_t topicNameLen,
                                    IoT_Publish_Message_Params *params, void *pData);

void disconnectCallbackHandler(AWS_IoT_Client *pClient, void *data);

void aws_iot_task(void *param);




#endif /* MAIN_USOAWS_H_ */
