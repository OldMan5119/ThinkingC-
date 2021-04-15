cmake_minimum_required(VERSION 3.17)
project(ThinkingCplus)

set(CMAKE_CXX_STANDARD 14)

aux_source_directory(thread/thread_base thread_base)
add_executable(thread_base ${thread_base})

aux_source_directory(thread/thread_multiple thread_multiple)
add_executable(thread_multiple ${thread_multiple})
