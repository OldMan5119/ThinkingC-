cmake_minimum_required(VERSION 3.17)
project(ThinkingCplus)

set(CMAKE_CXX_STANDARD 14)

aux_source_directory(src/extends_1 extends_1)
add_executable(extends_1 ${extends_1})

aux_source_directory(src/extends_rect extends_rect)
add_executable(extends_rect ${extends_rect})

aux_source_directory(src/obj_dynamic_1 obj_dynamic_1)
add_executable(obj_dynamic_1 ${obj_dynamic_1})

aux_source_directory(src/virtual_fun virtual_fun)
add_executable(virtual_fun ${virtual_fun})