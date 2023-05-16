cmake_minimum_required(VERSION 3.5)

project(qt_test VERSION 1.0 LANGUAGES CXX)


set(CMAKE_CXX_STANDARD)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

if(CMAKE_VERSION VERSION_LESS "3.7.0")
	set(CMAKE_INCLUDE_CURRENT_RIR ON)
endif()

find_package(Qt5 CONFIG REQUIRED COMPONENTS PrintSupport Widgets)
#include(${CMAKE_CURRENT_SOURCE_DIR}/plot-examples.pro)

set(SOURCES main.cpp
		#mainwindow.ui
		mainwindow.cpp
		socket_can.cpp
		qcustomplot.cpp
		axistag.cpp
		#resources.qrc 		
) #widget.cpp

add_executable(${PROJECT_NAME} ${SOURCES})

target_link_libraries(${PROJECT_NAME} Qt5::Widgets Qt5::PrintSupport)

target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_SOURCE_DIR})
target_link_directories(${PROJECT_NAME} PUBLIC ${CMAKE_SOURCE_DIR})

#target_include_directories(${PROJECT_NAME} PUBLIC ${Socket_Can_Driver_Path})
#target_include_directories(${PROJECT_NAME} PUBLIC ${RMD_Controller_path})

