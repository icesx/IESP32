idf_component_register(
    SRCS "mynvs.c"
    INCLUDE_DIRS "${IDF_PATH}/components/nvs_flash/include;${IDF_PATH}/components/spi_flash/include"
)
