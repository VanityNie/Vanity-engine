file(GLOB BASE_SRC "*.cpp" "*.hpp" "*.h" )

add_subdirectory(RHI)

add_library(ENGINE STATIC ${BASE_SRC})

target_link_libraries(ENGINE RHI)
target_include_directories(ENGINE PUBLIC ${CMAKE_CURRENT_LIST_DIR})