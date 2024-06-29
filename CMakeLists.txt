cmake_minimum_required(VERSION 3.30.0)
project(
    planning
    VERSION 0.0.1
    DESCRIPTION "a demo"
    HOMEPAGE_URL "https://github.com/dengdaigithub/cmake_planning_demo"
    LANGUAGES CXX
)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)
set(Process_Dir ${CMAKE_SOURCE_DIR}/src/process)
set(PNC_Map_Dir ${CMAKE_SOURCE_DIR}/src/pnc_map)

add_subdirectory(src)
