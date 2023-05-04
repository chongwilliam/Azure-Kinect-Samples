# Copyright (c) Microsoft Corporation. All rights reserved.
# Licensed under the MIT License.

add_executable(simple_3d_viewer_redis main.cpp ../sample_helper_includes/RedisClient.cpp)

target_include_directories(simple_3d_viewer_redis PRIVATE ../sample_helper_includes)

# Dependencies of this library
target_link_libraries(simple_3d_viewer_redis PRIVATE 
    k4a
    k4abt
    k4arecord
    window_controller_3d::window_controller_3d
    glfw::glfw
    ${HIREDIS_LIBRARY}
    ${JSONCPP_LIBRARY}
    )

