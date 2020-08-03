cmake_minimum_required(VERSION 2.8.3)
project(temp_pkg3)

find_package(catkin_simple REQUIRED)
catkin_simple(ALL_DEPS_REQUIRED)

add_definitions(-std=c++17)
set(CMAKE_BUILD_TYPE Release)

cs_add_library(${PROJECT_NAME}_pkg3_lib src/temp_pkg3.cpp )
cs_add_executable(${PROJECT_NAME}_pkg3_node src/temp_pkg3_node.cpp)

target_link_libraries(${PROJECT_NAME}_pkg3_node ${PROJECT_NAME}_pkg3_lib )

cs_install()
cs_export()