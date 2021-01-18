set(srcs 
    "FactoryTest.cpp"
    "Button2.cpp"
    )

idf_component_register(SRCS ${srcs}
                    INCLUDE_DIRS "."
                    )

