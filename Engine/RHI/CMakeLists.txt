file(GLOB_RECURSE srcs CONFIGURE_DEPENDS *.cpp *.h)
add_library(RHI STATIC ${srcs})


target_link_libraries(RHI ${Vulkan_LIBRARY})
target_include_directories(RHI PUBLIC include ${Vulkan_INCLUDE_DIRS})