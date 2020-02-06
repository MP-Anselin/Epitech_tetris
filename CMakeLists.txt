cmake_minimum_required(VERSION 3.15)
project(tetris)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)
include_directories(include/lib)
include_directories(include/lib/my_clib)

add_executable(my_tetris
        include/lib/my_clib/colors.h
        include/lib/my_clib/get_next_line.h
        include/lib/my_clib/my.h
        include/lib/my_clib/my_macro.h
        include/lib/my_clib/my_typedef.h
        include/lib/my_clib/printf_flags.h
        include/lib/my_clib/printf_puts.h
        include/tetris.h
        include/tetris_functions.h
        include/tetris_typedef.h
        src/game_manager/game_analyzer.c
        src/game_manager/parsing/customs_starter.c
        src/game_manager/parsing/args/flag_parsing.c
        src/game_manager/parsing/tetris_help.c
        src/main.c include/tetris_macros.h src/game_manager/set_up/setup_options.c)

target_link_libraries(my_tetris ${CMAKE_SOURCE_DIR}/src/lib/my_clib.a)

