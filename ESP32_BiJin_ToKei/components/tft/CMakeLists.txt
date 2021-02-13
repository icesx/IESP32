FILE(GLOB srcs *.c)
idf_component_register(SRCS ${srcs}
                    REQUIRES spidriver
                    INCLUDE_DIRS "."
)