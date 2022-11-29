# Include all library module header files.
include_directories(${MessageEncoderDecoder_SOURCE_DIR}/Encoders/Include)

# Add all source files to the library module.
file(GLOB SRC_FILES Source/*.cpp)
add_library(Encoders ${SRC_FILES})
