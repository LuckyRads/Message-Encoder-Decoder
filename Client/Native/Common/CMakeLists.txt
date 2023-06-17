# Include all header files.
include_directories(${MessageEncoderDecoder_SOURCE_DIR}/Common/Include)

# Add all source files to the library module.
file (GLOB CPP_FILES Source/*.cpp)
add_library(Common ${CPP_FILES})
