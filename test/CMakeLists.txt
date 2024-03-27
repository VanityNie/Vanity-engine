
project(sandbox)
file(GLOB BASE_SRC "*.cpp" "*.hpp" "*.h" )



add_executable(sandbox ${BASE_SRC} )
target_link_libraries(sandbox PUBLIC ENGINE )
target_include_directories(sandbox PUBLIC ../engine)