cmake_minimum_required(VERSION 3.9)
project(cpp_jet_exemple)
set(CMAKE_CXX_STANDARD 20)

#define headers

include_directories(include/) 

#define source files
file(GLOB_RECURSE SOURCE_FILES "src/*.cpp")

# add executable
add_executable(main ${SOURCE_FILES})
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++20")


# CHECK SYSTEM COMPILER
if(ANDROID)
    message("ANDROID")
elseif (UNIX)
    message("LINUX")
elseif (WIN32)
    message("")
elseif (LINUX)
    message("LINUX")
endif()