cmake_minimum_required(VERSION 3.16)
project(DecentralizedDummyProcess)

set(CMAKE_CXX_STANDARD 14)
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11 -pthread")
SET(PLATFORM_SPECIFIC_LIBS "-lpthread")

add_executable(DecentralizedDummyProcess main.cpp file.cpp includes/file.h JSON_manager.cpp includes/JSON_manager.h includes/data_storage.h)

include_directories(~/CLionProjects/DecentralizedDummyProcess/includes/
        ~/CLionProjects/DecentralizedDummyProcess/includes/rapidjson
        ~/CLionProjects/DecentralizedDummyProcess/
        ~/home/visxim/boost_1_73_0/)

find_library(LIB_RT rt)

target_link_libraries(${PROJECT_NAME} libboost_serialization.a libboost_iostreams.a
        ${LIB_RT})