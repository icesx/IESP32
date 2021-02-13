# The following lines of boilerplate have to be in your project's CMakeLists
# in this exact order for cmake to work correctly
cmake_minimum_required(VERSION 3.5)
if ( CMAKE_COMPILER_IS_GNUCC )
    target_compile_options(main PRIVATE "-Wall -Wextra -O2")
endif()
include($ENV{IDF_PATH}/tools/cmake/project.cmake)
project(tft_library)
