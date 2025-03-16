Cmake_minimum_required(VERSION 3.31)

project(RayTracing LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set ( SOURCE_FILES
  src/main.cc
  src/vec3.h
  src/color.h
  src/ray.h
  src/hittable.h
  src/hittable_list.h
  src/utils.h
  src/sphere.h
)

message (STATUS "Compiler ID: " ${CMAKE_CXX_COMPILER_ID})
message (STATUS "Release flags: " ${CMAKE_CXX_FLAGS_RELEASE})
message (STATUS "Debug flags: " ${CMAKE_CXX_FLAGS_DEBUG})

add_executable(raytracer ${SOURCE_FILES})
