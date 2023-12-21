cmake_minimum_required(VERSION 3.22)
project(PhotoOptic)

# Find OpenCV
find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

# Add your source files
set(SOURCES
        main.cpp
        ImageOption.cpp
        Tools.cpp
        )

# Create the executable
add_executable(PhotoOptic ${SOURCES})

# Link OpenCV libraries
target_link_libraries(PhotoOptic ${OpenCV_LIBS})
