
cmake_minimum_required(VERSION 3.1.7)


set(CMAKE_CXX_STANDARD 20)
set(NAME VanityEngine)
project(${NAME})


#vulkan
find_package(Vulkan REQUIRED)


#third party add
add_subdirectory(external/glfw)


#only head
include_directories(external/magic_enum)



set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)


#engine
add_subdirectory(engine)

add_subdirectory(test)




