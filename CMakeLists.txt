# SPDX-License-Identifier: Apache-2.0

cmake_minimum_required(VERSION 3.20.0)
# set(ZEPHYR_MODULES /home/k/proj/tab_firmware/tab_firmware/liblc3)
find_package(Zephyr REQUIRED HINTS $ENV{ZEPHYR_BASE})
project(nrf_tab2)

target_sources(app PRIVATE src/main.c)

# target_include_directories(app PRIVATE
#   src/lc3lib
# )
#   src/lc3lib

# add_subdirectory(src/impl)
# add_subdirectory(src/lc3lib)

# seemingly unnecessary even though present in all examples?
# zephyr_library_include_directories(src/impl)
