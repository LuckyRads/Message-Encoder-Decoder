# Include all library module header files.
include_directories(${MessageEncoderDecoder_SOURCE_DIR}/Encoders/Include)
# Add all source files to the library module.
add_library(Encoders base64.cpp caesarsp.cpp coder.cpp)
