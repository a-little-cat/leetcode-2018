cmake_minimum_required(VERSION 2.8)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
string(REGEX
       REPLACE ".*/(.*)"
               "\\1"
               CURRENT_FOLDER
               ${CMAKE_CURRENT_SOURCE_DIR})
project(${CURRENT_FOLDER})
set(CMAKE_BUILD_TYPE Debug)
aux_source_directory(. SRC)
add_executable(${PROJECT_NAME} ${SRC})
