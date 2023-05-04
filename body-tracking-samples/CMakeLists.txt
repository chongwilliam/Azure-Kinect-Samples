# Copyright (c) Microsoft Corporation. All rights reserved.
# Licensed under the MIT License.

if (NOT EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/extern/glfw/src/CMakeLists.txt")
    find_package(Git REQUIRED QUIET)
    if (Git_FOUND)
        message(STATUS "Fetching git modules...")
        execute_process(
            COMMAND
                ${GIT_EXECUTABLE} submodule update --init --recursive
            WORKING_DIRECTORY
                ${CMAKE_CURRENT_SOURCE_DIR}
            RESULT_VARIABLE
                GIT_SUBMODULE_UPDATE_RESULT
            OUTPUT_VARIABLE
                GIT_SUBMODULE_UPDATE_OUTPUT
        )
        
        if (NOT (${GIT_SUBMODULE_UPDATE_RESULT} EQUAL 0))
            message(FATAL_ERROR "git submodule update failed: ${GIT_SUBMODULE_UDPATE_OUTPUT}")
        endif()
    endif()
endif()

# eigen3
set(EIGEN3_INCLUDE_DIR $ENV{EIGEN3_INCLUDE_DIR})
if(NOT EIGEN3_INCLUDE_DIR)
    find_package(Eigen3 QUIET)
    # TODO: Find automatic way to find for Ubuntu 14.04
    if(NOT EIGEN3_INCLUDE_DIR)
        set(EIGEN3_INCLUDE_DIR /usr/include/eigen3)
    endif()
endif()
include_directories(${EIGEN3_INCLUDE_DIR})

# hiredis
find_library(HIREDIS_LIBRARY hiredis REQUIRED)

# jsoncpp
if (CMAKE_SYSTEM_NAME MATCHES Darwin) 
    find_library(JSONCPP_LIBRARY jsoncpp)
elseif (CMAKE_SYSTEM_NAME MATCHES Linux)
    find_package(PkgConfig REQUIRED)
    pkg_check_modules(JSONCPP jsoncpp)
    link_directories(${JSONCPP_LIBRARY_DIRS})
    set(JSONCPP_LIBRARY ${JSONCPP_LIBRARIES})
endif()


list(INSERT CMAKE_MODULE_PATH 0 ${CMAKE_CURRENT_LIST_DIR}/cmake)

add_subdirectory(extern)
add_subdirectory(camera_space_transform_sample)
add_subdirectory(floor_detector_sample)
add_subdirectory(jump_analysis_sample)
add_subdirectory(offline_processor)
add_subdirectory(simple_3d_viewer)
add_subdirectory(simple_sample)
add_subdirectory(sample_helper_libs)
add_subdirectory(simple_3d_viewer_redis)