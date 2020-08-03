cmake_minimum_required(VERSION 2.8.3)
project(temp_pkg1)

find_package(catkin_simple REQUIRED)
catkin_simple(ALL_DEPS_REQUIRED)

add_definitions(-std=c++17)
set(CMAKE_BUILD_TYPE Release)

cs_add_library(${PROJECT_NAME}_pkg1_lib src/temp_pkg1.cpp )
cs_add_executable(${PROJECT_NAME}_pkg1_node src/temp_pkg1_node.cpp)

target_link_libraries(${PROJECT_NAME}_pkg1_node ${PROJECT_NAME}_pkg1_lib )

cs_install()
cs_export()