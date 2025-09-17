#ifndef SD_INIT_H
#define SD_INIT_H

#include "esp_err.h"
#include "driver/gpio.h"

#define SD_MISO_PIN     GPIO_NUM_35
#define SD_MOSI_PIN     GPIO_NUM_37
#define SD_CLK_PIN      GPIO_NUM_36
#define SD_CS_PIN       GPIO_NUM_38

esp_err_t init_sd_card(void);
bool is_sd_card_mounted(void);

#endif // SD_INIT_H