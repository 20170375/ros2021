cmake_minimum_required(VERSION 3.0.2)
project(ur5_description)

add_compile_options(-std=c++11)

find_package(catkin REQUIRED COMPONENTS
    roscpp    
    std_msgs
    urdf
)

catkin_package(
    
)

#########
# Build #
#########

include_directories(
    include
    ${catkin_INCLUDE_DIRS}
)
