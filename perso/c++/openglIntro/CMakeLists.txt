cmake_minimum_required(VERSION 3.0.0)
project(my_prog VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# GLFW integration
# Find GLFW package after it's installation on the device 
find_package(GLFW3 REQUIRED)

# Ajouter les fichiers sources
add_executable(my_prog ./src/Main.cpp)

# Lier GLFW et les bibliothèques OpenGL
target_link_libraries(my_prog GLEW GL glfw)
