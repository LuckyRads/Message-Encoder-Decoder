cmake_minimum_required(VERSION 3.0.0)
project(MessageEncoderDecoder VERSION 0.1.0)

include(CTest)
enable_testing()

# Set source files to compile
set(SRC_FILES Source/Message-Encoder-Decoder.cpp Source/base64.cpp Source/caesarsp.cpp Source/coder.cpp Source/menu.cpp)

# Add source files to the project
add_executable(MessageEncoderDecoder ${SRC_FILES})

# Include headers/library files
target_include_directories(MessageEncoderDecoder PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/Headers)

# Set executable and library output path
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR}/Bin)
set(LIBRARY_OUTPUT_PATH ${CMAKE_BINARY_DIR}/Lib)

# Set C++ settings
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/Bin)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
