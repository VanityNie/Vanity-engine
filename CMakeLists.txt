
cmake_minimum_required(VERSION 3.1.7)


set(NAME VanityEngine)
project(${NAME})


#vulkan
find_package(Vulkan REQUIRED)


#third party add



#engine

add_subdirectory(engine)
add_subdirectory(test)




