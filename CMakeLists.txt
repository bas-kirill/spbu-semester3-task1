cmake_minimum_required(VERSION 3.17)
project(Task_1)

set(CMAKE_CXX_STANDARD 14)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)

add_executable(Task1 Sources/src/main.cpp Sources/src/Vertex.cpp Headers/include/Vertex.h Sources/src/Edge.cpp Headers/include/Edge.h Sources/src/ClCircle.cpp Headers/include/ClCircle.h Sources/src/ClLine.cpp Headers/include/ClLine.h Sources/src/ClDraw.cpp Headers/include/ClDraw.h Sources/src/Graph.cpp Headers/include/Graph.h)

target_link_libraries(Task1 sfml-graphics sfml-audio)