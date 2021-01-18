cmake_minimum_required(VERSION 3.0.0)
set( CMAKE_VERBOSE_MAKEFILE on )
message(STATUS "src This is BINARY dir " ${PROJECT_BINARY_DIR})
message(STATUS "src This is SOURCE dir " ${PROJECT_SOURCE_DIR})
project(IESP32-TTGO VERSION 0.1.0)
set(CMAKE_C_COMPILER /TOOLS/SDK/esp32/espressif/tools/xtensa-esp32-elf/esp-2020r2-8.2.0/xtensa-esp32-elf/bin/xtensa-esp32-elf-g++)
set(CMAKE_CXX_COMPILER /TOOLS/SDK/esp32/espressif/tools/xtensa-esp32-elf/esp-2020r2-8.2.0/xtensa-esp32-elf/bin/xtensa-esp32-elf-g++)
set(CMAKE_CXX_FLAGS "-O2 -Wwrite-strings ")
# include 
message("CMAKE_CURRENT_LIST_DIR====${CMAKE_CURRENT_LIST_DIR}")
INCLUDE_DIRECTORIES(
    "/TOOLS/SDK/TTGO-T-Display/TFT_eSPI"
    "/TOOLS/SDK/Arduino/hardware/espressif/esp32/libraries/Wire/src"
    "/TOOLS/SDK/Arduino/hardware/espressif/esp32/variants/esp32"
    "/TOOLS/SDK/Arduino/hardware/espressif/esp32/libraries/WiFi/src"
    "/TOOLS/SDK/Arduino/hardware/espressif/esp32/libraries/SPI/src"
    "/TOOLS/SDK/Arduino/hardware/espressif/esp32/libraries/FS/src"
    "/TOOLS/SDK/Arduino/hardware/espressif/esp32/libraries/SD/src"
    "/TOOLS/SDK/Arduino/hardware/espressif/esp32/libraries/SPIFFS/src"
    "/TOOLS/SDK/Arduino/hardware/espressif/esp32/cores/esp32"
    "/TOOLS/SDK/Arduino/hardware/espressif/esp32/tools/sdk/include/esp32"
    "/TOOLS/SDK/Arduino/hardware/espressif/esp32/tools/sdk/include/esp_event"
    "/TOOLS/SDK/Arduino/hardware/espressif/esp32/tools/sdk/include/freertos"
    "/TOOLS/SDK/Arduino/hardware/espressif/esp32/tools/sdk/include/esp_adc_cal"
    "/TOOLS/SDK/Arduino/hardware/espressif/esp32/tools/sdk/include/newlib"
    "/TOOLS/SDK/Arduino/hardware/espressif/esp32/tools/sdk/include/config"
    "/TOOLS/SDK/Arduino/hardware/espressif/esp32/tools/sdk/include/tcpip_adapter"
    "/TOOLS/SDK/Arduino/hardware/espressif/esp32/tools/sdk/include/lwip"
    "/TOOLS/SDK/Arduino/hardware/espressif/esp32/tools/sdk/include/soc"
    "/TOOLS/SDK/Arduino/hardware/espressif/esp32/tools/sdk/include/driver"
    "/TOOLS/SDK/Arduino/hardware/espressif/esp32/tools/sdk/include/heap"
    "/TOOLS/SDK/Arduino/hardware/espressif/esp32/tools/sdk/include/log"
    "/TOOLS/SDK/Arduino/hardware/espressif/esp32/tools/sdk/include/asio"
    "/TOOLS/SDK/Arduino/hardware/espressif/esp32/tools/sdk/include/wifi_provisioning"
    "/TOOLS/SDK/Arduino/hardware/espressif/esp32/tools/sdk/include/protocomm"
    "/TOOLS/SDK/Arduino/hardware/espressif/esp32/tools/sdk/include/spi_flash"
    "/TOOLS/SDK/Arduino/hardware/espressif/esp32/tools/sdk/include/vfs"
    "/TOOLS/SDK/esp32/espressif/tools/xtensa-esp32s2-elf/esp-2020r2-8.2.0/xtensa-esp32s2-elf/xtensa-esp32s2-elf/include/c++/8.2.0/xtensa-esp32s2-elf"
    )

# 宏
add_definitions(
    -DESP32=1
    -DARDUINO_ARCH_ESP32=1
    -DBOARD_HAS_PSRAM
    -Os
    -DCORE_DEBUG_LEVEL=ARDUHAL_LOG_LEVEL_DEBUG
    -DUSER_SETUP_LOADED=1
    -DST7789_DRIVER=1
    -DTFT_WIDTH=135
    -DTFT_HEIGHT=240
    -DCGRAM_OFFSET=1
    -DTFT_MISO=-1
    -DTFT_MOSI=19
    -DTFT_SCLK=18
    -DTFT_CS=5
    -DTFT_DC=16
    -DTFT_RST=23
    -DTFT_BL=4
    -DTFT_BACKLIGHT_ON=1
    -DLOAD_GLCD=1
    -DLOAD_FONT2=1
    -DLOAD_FONT4=1
    -DLOAD_FONT6=1
    -DLOAD_FONT7=1
    -DLOAD_FONT8=1
    -DLOAD_GFXFF=1
    -DSMOOTH_FONT=1
    -DSPI_FREQUENCY=40000000
    -DSPI_READ_FREQUENCY=6000000
)

set(subs "FactoryTest")
foreach(sub IN LISTS subs)
    message("config subdirectory::: ${sub}")
    add_subdirectory("${sub}")
endforeach (sub)