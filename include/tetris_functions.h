/*
** EPITECH PROJECT, 2020
** Created by Mackendy-Pierre Anselin on 03/02/2020.
** Email mackendy-pierre.anslin@epitech.eu.
** Copyright (c) 2020 TheExquisiteCrumpet. All rights reserved.
** tetris_functions.h description:
**
*/#ifndef TETRIS_TETRIS_FUNCTIONS_H
#define TETRIS_TETRIS_FUNCTIONS_H

int flag_parsing(t_option_list *option_list, char **flags, int *y);
int help_information(bool has_to_display);
int customs(int nbr_flags, char **flags);
int game_analyze(char **flags);
t_option_list *init_flags_option();
char **creat_list_long_option();
char **creat_list_short_option();
int error_message_bad(char *flag);

#endif //TETRIS_TETRIS_FUNCTIONS_H
