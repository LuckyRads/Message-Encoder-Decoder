cmake_minimum_required(VERSION 3.0.0)
project(MessageEncoderDecoder VERSION 0.1.0)

# Add main application module.
add_subdirectory(Application)
# Add library modules.
add_subdirectory(Encoders)

# Set executable and library output path
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/Bin)
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR}/Lib)

# Set C++ settings
set(CMAKE_CXX_STANDARD 17)
# Enable all compiler warnings
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/Bin)

# Set CPack distributable properties.
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
