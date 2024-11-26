cmake_minimum_required(VERSION 3.10.0)
project(sdlapp VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

file(GLOB source_dir
     "./src/*.cpp"
)


include_directories("${CMAKE_CURRENT_SOURCE_DIR}/headers")

add_executable(sdlapp ${source_dir} ${header_dir})
find_package(SDL2 REQUIRED COMPONENTS SDL2)
target_link_libraries(sdlapp ${SDL2_LIBRARIES})



set_property(TARGET sdlapp PROPERTY CXX_STANDARD 17)



