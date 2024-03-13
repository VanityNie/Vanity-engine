cmake_minimum_required(VERSION 3.16)
set(CMAKE_CXX_STANDARD 20)
file(GLOB BASE_SRC "*.cpp" "*.hpp" "*.h" )




add_library(base SHARED ${BASE_SRC}  )

target_link_libraries(base PUBLIC ${Vulkan_LIBRARY} $<TARGET_OBJECTS:SPIV_LIB>$ )
target_link_directories(base PUBLIC   ${Vulkan_INCLUDE_DIRS})
