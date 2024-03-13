
cmake_minimum_required(VERSION 3.4 FATAL_ERROR)
set(NAME VulkanEngine)

project(${NAME})

set(CMAKE_CXX_STANDARD 17)
find_package(Vulkan)




#set out put dir
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin/")


include_directories(${Vulkan_INCLUDE_DIRS})
include_directories(external)
include_directories(Engine)

#第三方库全局
add_subdirectory(extern/spdlog)
add_subdirectory(extern/spiv-cross)

add_subdirectory(Engine)
add_subdirectory(sandbox)