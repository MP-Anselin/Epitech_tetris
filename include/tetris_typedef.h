/*
** EPITECH PROJECT, 2020
** Created by Mackendy-Pierre Anselin on 03/02/2020.
** Copyright (c) 2020 TheExquisiteCrumpet. All rights reserved.
** tetris.h description:
**
*/#ifndef TETRIS_TETRIS_TYPEDEF_H
#define TETRIS_TETRIS_TYPEDEF_H

typedef	enum	e_keys
{
    LEFT,
    RIGHT,
    DROP,
    TURN,
    PAUSE,
    QUIT,
    UNKNOWN
}		t_keys;

typedef	enum	e_options_position_tab
{
    OPTION_LEFT,
    OPTION_RIGHT,
    OPTION_DROP,
    OPTION_TURN,
    OPTION_PAUSE,
    OPTION_QUIT,
    OPTION_LEVEL,
    OPTION_DEBUG,
    OPTION_WITHOUT_NEXT,
    OPTION_MAP_SIZE,
    OPTION_UNKNOWN
}		t_options_position_tab;

typedef struct	s_tetris
{

}		t_tetris;

typedef struct s_option_list
{
    char **short_option;
    char **long_option;
}       t_option_list;

typedef int (*option_function)(char *, t_tetris*);


#endif //TETRIS_TETRIS_TYPEDEF_H
