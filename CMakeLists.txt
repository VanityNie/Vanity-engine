
cmake_minimum_required(VERSION 3.4 FATAL_ERROR)
set(NAME VulkanEngine)

project(${NAME})

set(CMAKE_CXX_STANDARD 17)
find_package(Vulkan)

include_directories(${Vulkan_INCLUDE_DIRS})
include_directories(external)
include_directories(Engine)



add_subdirectory(Engine)
add_subdirectory(sandbox)