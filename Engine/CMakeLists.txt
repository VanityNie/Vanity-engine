file(GLOB BASE_SRC "*.cpp" "*.hpp" "*.h" )

add_subdirectory(RHI)

add_library(ENGINE STATIC ${BASE_SRC})


file(GLOB SPIV_SRC  CONFIGURE_DEPENDS  ../external/SPIRV-Cross/*)

add_library( SPIV_LIB OBJECT ${SPIV_SRC})
target_include_directories(SPIV_LIB PUBLIC "../external/SPIRV-Cross" )


if(MSVC)
    set_target_properties(ENGINE PROPERTIES LINK_INCREMENTAL true) # 启用增量链接
    set_target_properties(ENGINE PROPERTIES LINK_INCREMENTAL_DEBUG true) # Debug模式下启用
endif()

target_link_libraries(ENGINE PUBLIC RHI  $<TARGET_OBJECTS:SPIV_LIB>)
target_include_directories(ENGINE PUBLIC ${CMAKE_CURRENT_LIST_DIR})