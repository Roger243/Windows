
cmake_minimum_required(VERSION 3.25)
project(WinAgentSandbox C)
file(GLOB SANDBOX_SOURCES
    hypervisor/*.c container/*.c policy/*.c bridge/*.c environment/*.c tests/*.c)
add_library(winagent_sandbox STATIC ${SANDBOX_SOURCES})
source_group("hypervisor" FILES ${CMAKE_CURRENT_SOURCE_DIR}/hypervisor/vmx_sandbox.c)
