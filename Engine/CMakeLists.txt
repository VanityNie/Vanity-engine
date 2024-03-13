


file(GLOB BASE_SRC "*.cpp" "*.hpp" "*.h" )
file(GLOB BASE_HEADERS "*.hpp" "*.h")



include_directories(${spdlog_INCLUDE_DIRS})

add_subdirectory(src/core)


set(LIST_LIB core  spdlog::spdlog )

add_library(EngineLib STATIC ${BASE_SRC})

set_target_properties(  PROPERTIES CXX_VISIBILITY_PRESET hidden )

target_link_directories(EngineLib PUBLIC ../extern/spdlog/include)
target_link_libraries(EngineLib ${Vulkan_LIBRARY}  ${WINLIBS} ${LIST_LIB} )

