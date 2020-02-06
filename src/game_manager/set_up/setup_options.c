/*
** EPITECH PROJECT, 2020
** Created by Mackendy-Pierre Anselin on 04/02/2020.
** Email mackendy-pierre.anslin@epitech.eu.
** Copyright (c) 2020 TheExquisiteCrumpet. All rights reserved.
** setup_options.c description:
**
*/

#include "tetris.h"

/*option_function option_actions[NBR_OPTION_SETUP];

option_function *set_pointer_function_option()
{

    option_actions[OPTION_LEFT] = &choice_key_left;
    option_actions[OPTION_RIGHT] = &choice_key_right;
    option_actions[OPTION_TURN] = &choice_key_turn;
    option_actions[OPTION_DROP] = &choice_key_drop;
    option_actions[OPTION_QUIT] = &choice_key_quit;
    option_actions[OPTION_PAUSE] = &choice_key_pause;
    option_actions[OPTION_DEBUG] = &debug_mode;
    option_actions[OPTION_LEVEL] = &choice_level;
    option_actions[OPTION_WITHOUT_NEXT] = &hide_next_tetrimino;
    option_actions[OPTION_MAP_SIZE] = &set_map_size;
    return (option_actions);
}*/

char **creat_list_short_option()
{
    char **short_option = malloc(sizeof(char *) * (NBR_SHORT_OPTION + 1));

    if (!short_option)
        return (NULL);
    short_option[OPTION_LEFT] = my_strdup(SHORT_FLAG_KEY_LEFT);
    short_option[OPTION_RIGHT] = my_strdup(SHORT_FLAG_KEY_RIGHT);
    short_option[OPTION_DROP] = my_strdup(SHORT_FLAG_KEY_DROP);
    short_option[OPTION_TURN] = my_strdup(SHORT_FLAG_KEY_TURN);
    short_option[OPTION_QUIT] = my_strdup(SHORT_FLAG_KEY_QUIT);
    short_option[OPTION_PAUSE] = my_strdup(SHORT_FLAG_KEY_PAUSE);
    short_option[OPTION_LEVEL] = my_strdup(SHORT_FLAG_KEY_LEVEL);
    short_option[OPTION_WITHOUT_NEXT] = my_strdup(SHORT_FLAG_KEY_WITHOUT_NEXT);
    short_option[OPTION_DEBUG] = my_strdup(SHORT_FLAG_KEY_DEBUG);
    short_option[9] = NULL;
    return (short_option);
}

char **creat_list_long_option()
{
    char **long_option = malloc(sizeof(char *) * (NBR_LONG_OPTION + 1));

    if (!long_option)
        return (NULL);
    long_option[OPTION_LEFT] = my_strdup(LONG_FLAG_KEY_LEFT);
    long_option[OPTION_RIGHT] = my_strdup(LONG_FLAG_KEY_RIGHT);
    long_option[OPTION_DROP] = my_strdup(LONG_FLAG_KEY_DROP);
    long_option[OPTION_TURN] = my_strdup(LONG_FLAG_KEY_TURN);
    long_option[OPTION_PAUSE] = my_strdup(LONG_FLAG_KEY_PAUSE);
    long_option[OPTION_QUIT] = my_strdup(LONG_FLAG_KEY_QUIT);
    long_option[OPTION_LEVEL] = my_strdup(LONG_FLAG_KEY_LEVEL);
    long_option[OPTION_WITHOUT_NEXT] = my_strdup(LONG_FLAG_KEY_WITHOUT_NEXT);
    long_option[OPTION_DEBUG] = my_strdup(LONG_FLAG_KEY_DEBUG);
    long_option[OPTION_MAP_SIZE] = my_strdup(LONG_FLAG_KEY_MAP_SIZE);
    long_option[10] = NULL;
    return (long_option);
}


t_option_list *init_list_option()
{
    t_option_list *option_list = malloc(sizeof(t_option_list));

    if (!option_list)
        return (NULL);
    option_list->short_option = creat_list_short_option();
    option_list->long_option = creat_list_long_option();
    if (!option_list->long_option || !option_list->short_option)
        return (NULL);
    return (option_list);
}

t_option_list *init_flags_option()
{
    t_option_list *option_list = init_list_option();
    if (!option_list)
        return (NULL);
    return (option_list);
}