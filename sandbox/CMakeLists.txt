



set(CMAKE_CXX_STANDARD 17)

aux_source_directory(. DIR_SRCS)

add_executable(sandbox ${DIR_SRCS})
target_link_libraries(sandbox EngineLib  ${Vulkan_LIBRARY})
