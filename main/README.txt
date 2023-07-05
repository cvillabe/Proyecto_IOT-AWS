# Proyecto AWS IoT

Este proyecto es una aplicación para conectar y comunicarse con AWS IoT utilizando el ESP32. Permite enviar y recibir mensajes a través del protocolo MQTT y controlar un LED según los mensajes recibidos.

## Configuración

Antes de ejecutar el proyecto, asegúrate de realizar las siguientes configuraciones:

### Configuración del WiFi

En el archivo "UsoWifi.h", debes proporcionar la información de tu red WiFi:

- SSID: Nombre de la red WiFi a la que te quieres conectar.
- Contraseña: Contraseña de la red WiFi.

### Configuración del Cliente AWS

En el archivo "UsoAws.h", hay una variable llamada "ClienteAWS" que puedes modificar para establecer el nombre de tu cliente AWS. Además, debes configurar los certificados y claves necesarios para la conexión segura con AWS IoT.

### Configuración del Host de AWS

En el archivo "UsoAws.h", la variable "HostAddress" define la URL del host de AWS IoT. Por defecto, se establece como "a15uddaliiomur-ats.iot.us-east-1.amazonaws.com". Si deseas utilizar una URL diferente, puedes modificarla.

## Cómo funciona

El programa principal se encuentra en el archivo "subcribe_publish_aws.c" y consta de los siguientes pasos:

1. Inicialización del sistema de almacenamiento no volátil (NVS).

2. Inicialización de la conexión WiFi llamando a la función "initialise_wifi" en el archivo "UsoWifi.h". Asegúrate de proporcionar los detalles correctos de tu red WiFi.

3. Creación de una tarea llamada "aws_iot_task" utilizando la función "xTaskCreatePinnedToCore" de FreeRTOS. Esta tarea ejecutará la función "aws_iot_task" en el archivo "UsoAws.h" para establecer la conexión y comunicarse con AWS IoT.

## Contribuciones

Siéntete libre de contribuir a este proyecto mediante la apertura de issues o la presentación de pull requests. ¡Tus aportes son bienvenidos!

## Autor

Nombre: Cristian Villamarin beodya
Contacto: cvillabe@gmail.com

