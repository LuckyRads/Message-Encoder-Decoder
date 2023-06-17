# Include all library module header files.
include_directories(${MessageEncoderDecoder_SOURCE_DIR}/Encoders/Include)

# Add all source files to the library module.
file(GLOB C_FILES Source/*.c)
file(GLOB CPP_FILES Source/*.cpp)
add_library(Encoders ${C_FILES} ${CPP_FILES})
