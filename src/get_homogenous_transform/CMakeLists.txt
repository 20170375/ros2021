cmake_minimum_required(VERSION 3.0.2)
project(get_homogenous_transform)

add_compile_options(-O -Wall -std=c++14 -fpermissive)

find_package(catkin REQUIRED)

find_package(catkin REQUIRED COMPONENTS
    roscpp    
    std_msgs
)

catkin_package(
    CATKIN_DEPENDS
    roscpp
)

#########
# Build #
#########

include_directories(
    include
    ${catkin_INCLUDE_DIRS}
)

add_executable(get_homogenous_transform
    src/get_homogenous_transform.cpp
)
add_dependencies(get_homogenous_transform ${${PROJECT_NAME}_EXPORTED_TARGETS} ${catkin_EXPORTED_TARGETS})
target_link_libraries(get_homogenous_transform
    ${catkin_LIBRARIES}
)