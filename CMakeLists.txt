cmake_minimum_required(VERSION 3.10.0)
project(sdlapp VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

file(GLOB source_dir
     "./src/*.cpp"
)
file(GLOB header_dir
     "./headers/*.h"
)

set(HEADER_FILES ${header_dir})
find_package(SDL2 REQUIRED COMPONENTS SDL2)

add_executable(sdlapp ${source_dir} ${header_dir})
target_link_libraries(sdlapp PRIVATE SDL2::SDL2)
include_directories()

set_property(TARGET sdlapp PROPERTY CXX_STANDARD 17)
target_include_directories(sdlapp PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/headers")



