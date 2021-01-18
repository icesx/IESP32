#add_definitions(-D CONFIG_LCD_TYPE_ST7789V)
option(CONFIG_LCD_TYPE_ST7789V "" ON)
set(srcs "pretty_effect.c"
    "spi_display.c"
    )

# Only ESP32 has enough memory to do jpeg decoding
if(IDF_TARGET STREQUAL "esp32")
    list(APPEND srcs "decode_image.c")
endif()

idf_component_register(SRCS ${srcs}
                    INCLUDE_DIRS ".;components/tjpgd/include"
                    EMBED_FILES image.jpg)

