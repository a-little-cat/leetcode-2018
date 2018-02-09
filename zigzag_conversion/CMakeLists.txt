set(CMAKE_BUILD_TYPE Debug)
project(zigzag)
aux_source_directory(. SRC)
add_executable(${PROJECT_NAME} ${SRC})