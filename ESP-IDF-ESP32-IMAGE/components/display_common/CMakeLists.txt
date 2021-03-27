set(srcs "display_common.c"
    )

idf_component_register(SRCS ${srcs}
                    INCLUDE_DIRS "."
)