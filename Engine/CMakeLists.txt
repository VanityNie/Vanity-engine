


file(GLOB BASE_SRC "*.cpp" "*.hpp" "*.h" )
file(GLOB BASE_HEADERS "*.hpp" "*.h")




add_subdirectory(src/core)

set(LIST_LIB core)

add_library(EngineLib SHARED ${BASE_SRC})

set_target_properties(  PROPERTIES CXX_VISIBILITY_PRESET hidden )


target_link_libraries(EngineLib ${Vulkan_LIBRARY}  ${WINLIBS} ${LIST_LIB})

