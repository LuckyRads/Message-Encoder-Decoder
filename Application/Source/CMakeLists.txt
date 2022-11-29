# Include all header files.
include_directories(${MessageEncoderDecoder_SOURCE_DIR}/Application/Include)
include_directories(${MessageEncoderDecoder_SOURCE_DIR}/Encoders/Include)

# Link all library source files.
link_directories(${MessageEncoderDecoder_SOURCE_DIR}/Encoders/Source)

# Set source files for the main module.
set(SRC_FILES Message-Encoder-Decoder.cpp menu.cpp)

# Add source files to the project executable.
add_executable(MessageEncoderDecoder ${SRC_FILES})
# Link library project to the main application module.
target_link_libraries(MessageEncoderDecoder Encoders)
