
cmake_minimum_required(VERSION 3.4 FATAL_ERROR)
set(NAME VulkanEngine)

project(${NAME})

set(CMAKE_CXX_STANDARD 17)


include_directories(external)
include_directories(Engine)
find_package(Vulkan)


