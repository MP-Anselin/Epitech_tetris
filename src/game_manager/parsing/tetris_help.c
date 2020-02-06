/*
** EPITECH PROJECT, 2020
** Created by Mackendy-Pierre Anselin on 03/02/2020.
** Copyright (c) 2020 TheExquisiteCrumpet. All rights reserved.
** tetris_help.c description:
**
*/

#include "tetris.h"

void display_help()
{
	my_printf("Usage:\t./tetris [options]\n");
	my_printf("Option\n");
	my_printf("\t-h -help\t\tdisplay this help\n");
	my_printf("\t-L --level={num}\tStart Tetris at level num\t\t\t\t(default: 1)\n");
	my_printf("\t-Kl --key-left={K}\tMove tetrimino on LEFT with key k\t\t\t(default: left arrow)\n");
	my_printf("\t-Kr --key-right={K}\tMove tetrimino on RIGHT with key k\t\t\t(default: right arrow)\n");
	my_printf("\t-Kt --key-turn={K}\tTURN the tetrimino clockwise 90d using the K key\t(default: top arrow)\n");
	my_printf("\t-Kd --key-drop={K}\tDROP the tetrimino using the K key\t\t\t(default: down arrow)\n");
	my_printf("\t-Kq --key-quit={K}\tQUIT the game using the K key\t\t\t\t(default: ‘q’ key)\n");
	my_printf("\t-Kp -key-pause={K}\tPAUSE/RESTART the game using the K key\t\t\t(default: space bar)\n");
	my_printf("\t--map-size={row,col}\tSet the numbers of rows and columns of the map\t\t(default: 20,10)\n");
	my_printf("\t-w --without-next\tHide next tetrimino\t\t\t\t\t(default: false)\n");
	my_printf("\t-D --debug\t\tDebug mode\t\t\t\t\t\t(default: false)\n");
}

int help_information(bool has_to_display)
{
	if (has_to_display)
		display_help();
	else
		my_printf("Error:\tplease run ./tetris --help or -h to see more information\n");
	return (0);
}

int error_message_bad(char *flag)
{
	my_printf("Error: there is something wrong with \"%s\" flag ", flag);
	my_printf("or it doesn't exist.\n");
	help_information(false);
	return (84);
}
