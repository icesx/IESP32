#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_system.h"
#include "../components/spi_display/spi_disaply.h"
void app_main(void){
    show_esp32_image();
}