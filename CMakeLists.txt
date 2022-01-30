cmake_minimum_required(VERSION 3.22)
project(cpp_boilerplate LANGUAGES CXX)

# Build type
if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Release)
endif()
message(STATUS "Build type: " ${CMAKE_BUILD_TYPE})

# Compiler options
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_FLAGS "-Wall")

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

# Libraries
list(APPEND CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake_modules)

find_package(Qt6 COMPONENTS Core REQUIRED)

find_package(Threads REQUIRED)

include_directories(
  ${PROJECT_SOURCE_DIR}/include
)

set(PROJECT_LIBRARY ${PROJECT_NAME})
add_library(${PROJECT_LIBRARY} OBJECT
  src/foo.cpp
)
target_link_libraries(${PROJECT_LIBRARY}
)

# Applications
add_executable(main app/main.cpp)
target_link_libraries(main
  ${PROJECT_LIBRARY}
  Qt6::Core
)

# Testing
include(CTest)

if(BUILD_TESTING)
  add_subdirectory(tests)
endif()
