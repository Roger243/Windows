cmake_minimum_required(VERSION 3.25)
project(WinAgent LANGUAGES C CXX)

add_subdirectory(driver)
add_subdirectory(bios)
add_subdirectory(sandbox)
add_subdirectory(winlogon)
add_subdirectory(service)
add_subdirectory(tests)
