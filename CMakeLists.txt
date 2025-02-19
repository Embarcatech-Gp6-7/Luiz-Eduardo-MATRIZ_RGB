# Generated Cmake Pico project file

cmake_minimum_required(VERSION 3.13)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Initialise pico_sdk from installed location
# (note this can come from environment, CMake cache etc)

# == DO NOT EDIT THE FOLLOWING LINES for the Raspberry Pi Pico VS Code Extension to work ==
if(WIN32)
    set(USERHOME $ENV{USERPROFILE})
else()
    set(USERHOME $ENV{HOME})
endif()
set(sdkVersion 2.1.0)
set(toolchainVersion 13_3_Rel1)
set(picotoolVersion 2.1.0)
set(picoVscode ${USERHOME}/.pico-sdk/cmake/pico-vscode.cmake)
if (EXISTS ${picoVscode})
    include(${picoVscode})
endif()
# ====================================================================================
set(PICO_BOARD pico_w CACHE STRING "Board type")

# Pull in Raspberry Pi Pico SDK (must be before project)
include(pico_sdk_import.cmake)

project(U4T1 C CXX ASM)

# Initialise the Raspberry Pi Pico SDK
pico_sdk_init()

# Add executable. Default name is the project name, version 0.1

add_executable(
    U4T1
    U4T1.c
    keypad/keypad.c
    neopixel/neopixel.c
    functions/Tecla_aste.c
    functions/Tecla_hash.c
    functions/Tecla5.c
    functions/tecla6.c
    functions/tecla9.c
    functions/Tecla8.c
    functions/Tecla7.c
    functions/Tecla2.c
    functions/Tecla1.c
    functions/Tecla3.c
    functions/TeclaA.c
    functions/TeclaB.c
    functions/TeclaC.c
    functions/TeclaD.c
    
)

pico_set_program_name(U4T1 "U4T1")
pico_set_program_version(U4T1 "0.1")

# Modify the below lines to enable/disable output over UART/USB
pico_enable_stdio_uart(U4T1 0)
pico_enable_stdio_usb(U4T1 1)

# Add the standard library to the build
target_link_libraries(
    U4T1
    pico_stdlib
    hardware_pwm
    hardware_pio
    pico_bootrom
)

# Add the standard include files to the build
target_include_directories(U4T1 PRIVATE
  ${CMAKE_CURRENT_LIST_DIR}
)

# Add any user requested libraries
target_link_libraries(U4T1 
        
        )

pico_add_extra_outputs(U4T1)

