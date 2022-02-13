cmake_minimum_required(VERSION 3.10)

project(nicar_gui)

set(lib_DIR /usr/lib/x84_64-linux-gnu)
link_directories(${lib_DIR})

find_package(catkin REQUIRED COMPONENTS
	rospy
	roscpp
	geometry_msgs
	actionlib
	sensor_msgs
	cv_bridge
	image_transport
	tf2_ros
	tf2_geometry_msgs
)

catkin_package()

find_package(OpenCV REQUIRED)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)
set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)
find_package(Qt5 REQUIRED COMPONENTS 
Network
Widgets 
)

file(GLOB_RECURSE cxx_src "src/*.cpp" "include/*.h" "include/*.hpp")

include_directories(
	${catkin_INCLUDE_DIRS}
	${OpenCV_INCLUDE_DIRS}
)

add_executable(${PROJECT_NAME} ${cxx_src})
target_link_libraries(${PROJECT_NAME}
	PRIVATE
	${catkin_LIBRARIES}
	${OpenCV_LIBS}
    Qt5::Widgets
	Qt5::Network
    Threads::Threads
	libjsoncpp.a
)
