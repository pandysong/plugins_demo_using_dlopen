cmake_minimum_required( VERSION 3.0.0 )

project(ais_plugin VERSION 1.0.0 DESCRIPTION "ai server plugin")

set(PLUGIN_SHARED null_plugin)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fno-rtti")

# vendor custom node
set(SRC_FILES
    null_plugin.cpp
)

add_library(${PLUGIN_SHARED} MODULE ${SRC_FILES})

add_executable(main main.cpp)
target_link_libraries(main dl)
