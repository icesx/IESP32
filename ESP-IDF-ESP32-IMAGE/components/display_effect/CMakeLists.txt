set(srcs "pretty_effect.c"
    "spi_master_display_effect.c"
    )

# Only ESP32 has enough memory to do jpeg decoding
if(IDF_TARGET STREQUAL "esp32")
    list(APPEND srcs "decode_image.c")
endif()

idf_component_register(SRCS ${srcs}
                    INCLUDE_DIRS "."
                    REQUIRES display_common
                    EMBED_FILES image.jpg)

