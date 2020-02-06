/*
** EPITECH PROJECT, 2020
** Created by Mackendy-Pierre Anselin on 03/02/2020.
** Copyright (c) 2020 TheExquisiteCrumpet. All rights reserved.
** flag_parsing.c description:
**
*/
#include "tetris.h"

int long_option_manager(char **long_options, char *option)
{
	char **array = NULL;
	int is_in = my_char_is_in_str(option, CHAR_SEARCH_IN_STR);

	if (is_in != -1 && my_strlen(option) >= 7 && (option[0] == '-' && option[1] == '-')) {
		array = my_string_to_array(option, '=');
		if (!array || my_arraylen(array) != 2)
			return (-1);
		for (int y = 0; (option && option[0] == '-' && my_strlen(option) == 2) &&
						long_options[y]; ++y) {
			if (!my_strcmp(option, long_options[y])) {
				my_printf("long_option_manager : option = %s ans short_options[y] = %s\n,",
						  option, long_options[y]);
				return (y);
			}
		}
	}
	return (-1);
}

int short_option_manager(char **short_options, char *option)
{
	for (int y = 0; (option && option[0] == '-' && my_strlen(option) == 2) &&
					short_options[y]; ++y) {
		if (!my_strcmp(option, short_options[y])) {
			my_printf("short_option_manager : option = %s ans short_options[y] = %s\n,",
					  option, short_options[y]);
			return (y);
		}
	}
	return (-1);
}

int flag_parsing(t_option_list *option_list, char **flags, int *y)
{
	int short_op = -1;
	int long_op = -1;

	short_op = short_option_manager(option_list->short_option, flags[*y]);
	my_printf("flag_parsing : short_op = %d next args = '%s'\n", short_op, flags[*y + 1]);
	if (short_op > -1 && flags[*y + 1]) {
		(*y)++;
		my_printf("flag_parsing : JE PASSE DANS le 1er if y=> %d\n", *y);
		return (1);
	}
	long_op = long_option_manager(option_list->short_option, flags[*y]);
	if (long_op < 0 && (long_op != 1 && flags[*y][0] == '-')) {
		my_printf("flag_parsing : JE PASSE DANS le 2em if\n");
		return (1);
	}
	return (0);
}