set(SRC_FILES
#    "main.c"
#    "keypad/keypad.c"
#    "lcd/lcd_init.c"
#    "ui/lvgl_init.c"
#    "i2s/i2s_init.c"
#    "i2c/i2c_init.c"
#    "ui/ui.c"
#    "sound/sound.c"
#    "storage/spiffs.c"
    "storage/sd_init.c"
#    "candidate/candidate.c"
#    "wifi/wifi.c"
    # API source files
#    "web_api/web_api.c"
#    "web_api/handlers/candidate/api_candidate.c"
#    "web_api/handlers/party/api_party.c"
#    "web_api/handlers/role/api_role.c"
#    "web_api/handlers/voting_result/api_voting_result.c"
)

set(REQ_COMPONENTS
    lvgl
    esp_lcd
    spiffs
    esp_driver_sdspi
    fatfs
#    json
    nvs_flash
#    esp_wifi
#    esp_http_server
)

file(GLOB_RECURSE DISPLAY_SOURCES display/*.c)
file(GLOB_RECURSE HARDWARE_SOURCES hardware/*.c)
file(GLOB_RECURSE PERIPHERALS_SOURCES peripherals/*.c)

idf_component_register(SRCS "main.c" "esp_interrupt.c" "display/logo_small.c" 
					   ${DISPLAY_SOURCES}
					   ${HARDWARE_SOURCES}
					   ${PERIPHERALS_SOURCES}
             ${SRC_FILES}
            INCLUDE_DIRS "." #"../include"
            REQUIRES ${REQ_COMPONENTS}
            )
set(CMAKE_CXX_STANDARD 17)