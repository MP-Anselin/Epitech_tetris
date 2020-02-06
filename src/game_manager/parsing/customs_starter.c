/*
** EPITECH PROJECT, 2020
** Created by Mackendy-Pierre Anselin on 03/02/2020.
** Email mackendy-pierre.anslin@epitech.eu.
** Copyright (c) 2020 TheExquisiteCrumpet. All rights reserved.
** game_analyzer.c description:
**
*/

#include "tetris.h"

int is_need_help(int nbr_flags, char **flags)
{
	if (nbr_flags > 1 && flags[1][0] != '-')
		return (help_information(false));
	if (!my_strcmp(flags[1], SHORT_FLAG_HELP) || !my_strcmp(flags[1], LONG_FLAG_HELP))
		return (help_information(true));
	return (1);
}

int customs(int nbr_flags, char **flags)
{
	t_option_list *option_list = NULL;
	int res = -1;

	if (!is_need_help(nbr_flags, flags))
		return (0);
	option_list = init_flags_option();
	if (!option_list)
		return (-2);
	for (int y = 1; y < nbr_flags; y++) {
		res = flag_parsing(option_list, flags, &y);
		if (res == 0)
			return (error_message_bad(flags[y]));
	}
	return (0);
}

