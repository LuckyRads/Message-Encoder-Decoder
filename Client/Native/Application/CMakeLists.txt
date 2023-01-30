# Include all header files.
include_directories(${MessageEncoderDecoder_SOURCE_DIR}/Application/Include)
include_directories(${MessageEncoderDecoder_SOURCE_DIR}/Encoders/Include)
include_directories(${MessageEncoderDecoder_SOURCE_DIR}/Common/Include)

# Set source files for the main module.
file(GLOB SRC_FILES Source/*.cpp)

# Add source files to the project executable.
add_executable(MessageEncoderDecoder ${SRC_FILES})
# Link library project to the main application module.
target_link_libraries(MessageEncoderDecoder Encoders)
target_link_libraries(MessageEncoderDecoder Common)
