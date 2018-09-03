//ESP32 UTIL
//ESP32 UTILITY ROUTINES
//
//APRIL 17 2018
//ankit.bhatnagarindia@gmail.com

#include "ESP32_UTIL.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

void ESP32_UTIL_PrintProjectInfo(void)
{
    //PRINT PROJECT INFORMATION

    printf("\n");
    printf("---------------------------------------\n");
    printf("Project Information\n");
    printf("---------------------------------------\n");
    printf("\n");

    printf("Project Name : \t\t"PROJECT_NAME"\n");
    printf("Project Start Date : \t"PROJECT_START_DATE"\n");
    printf("Project Version : \t"PROJECT_VERSION"\n");
    printf("\n");
}

void ESP32_UTIL_PrintChipInfo(void)
{
    //PRINT ESP32 CHIP INFORMATION

    esp_chip_info_t info;

    printf("\n");
    printf("---------------------------------------\n");
    printf("ESP32 Chip Info\n");
    printf("---------------------------------------\n");
    printf("\n");

    esp_chip_info(&info);

    switch(info.model)
    {
        case CHIP_ESP32:
            printf("MODEL : ESP32\n");
            break;
        
        default:
            printf("MODEL : UNKNOWN\n");
            break;
    }

    printf("FEATURES : ");
    if(info.features & CHIP_FEATURE_EMB_FLASH) { printf("EMB_FLASH | "); }
    if(info.features & CHIP_FEATURE_WIFI_BGN) { printf("WIFI_BGN | "); }
    if(info.features & CHIP_FEATURE_BLE) { printf("BLE | "); }
    if(info.features & CHIP_FEATURE_BT) { printf("BT | "); }
    printf("\n");

    printf("CORES : %u\n", info.cores);
    printf("REVISION : %u\n", info.revision);

    printf("FLASH SIZE : %uMb\n", spi_flash_get_chip_size() / (1024 * 1024));
    printf("\n");
}

void ESP32_UTIL_DelayBlockingMs(uint32_t ms)
{
    //BLOCKING DELA OF SPECIFIED MS

    vTaskDelay(ms / portTICK_PERIOD_MS);
}