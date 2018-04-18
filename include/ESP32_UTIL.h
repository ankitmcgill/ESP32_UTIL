//ESP32 UTIL
//ESP32 UTILITY ROUTINES
//
//APRIL 17 2018
//ankit.bhatnagarindia@gmail.com

#ifndef _ESP32_UTIL_
#define _ESP32_UTIL_

#include <stdio.h>
#include <stdbool.h>
#include "esp_system.h"
#include "esp_spi_flash.h"

#define ESP32_WIFIMANAGER_TAG   "ESP32:UTIL"

#define PROJECT_NAME            "RGB NTP Weather Clock"
#define PROJECT_START_DATE      "April 17 2018"
#define PROJECT_VERSION         "1.0"

void ESP32_UTIL_PrintProjectInfo(void);
void ESP32_UTIL_PrintChipInfo(void);

#endif
