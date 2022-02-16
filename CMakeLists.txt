cmake_minimum_required(VERSION 3.10)

project(nicar_gui)

set(lib_DIR /usr/lib/x84_64-linux-gnu)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)
set(THREADS_PREFER_PTHREAD_FLAG ON)

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

find_package(OpenCV REQUIRED)
find_package(PythonLibs REQUIRED)
find_package(Threads REQUIRED)

find_package(Qt5 REQUIRED COMPONENTS 
Network
Widgets 
)

include_directories(
	${PYTHON_INCLUDE_DIRS}
	${catkin_INCLUDE_DIRS}
	${OpenCV_INCLUDE_DIRS}
)

file(GLOB_RECURSE cxx_src "src/*.cpp" "include/*.h" "include/*.hpp")


add_executable(${PROJECT_NAME} ${cxx_src})
target_link_libraries(${PROJECT_NAME}
	PRIVATE
	${catkin_LIBRARIES}
	${OpenCV_LIBS}
	${PYTHON_LIBRARIES}
    Qt5::Widgets
	Qt5::Network
    Threads::Threads
	libjsoncpp.a
)
