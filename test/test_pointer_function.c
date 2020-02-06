/*
** EPITECH PROJECT, 2020
** Created by Mackendy-Pierre Anselin on 05/02/2020.
** Email mackendy-pierre.anslin@epitech.eu.
** Copyright (c) 2020 TheExquisiteCrumpet. All rights reserved.
** test_pointer_function.c description:
**
*/

#include <stdio.h>

int print_test(int test1, int test2)
{
    (void)test1;
    (void)test2;
    printf("TEST IS OK !\n");
}

int somme(int i, int j)
{
    return i+j;
}

typedef int (*option_action)(int, int);

option_action action[9];


option_action *set_pointer_function_option()
{

    action[0] = &print_test;
    action[1] = &somme;
    /*option_action[2] =
    option_action[3] =
    option_action[4] =
    option_action[5] =
    option_action[6] =
    option_action[7] =
    option_action[8] =
    option_action[9] =*/

    return (action);
}

int main(int ac, char **av)
{
    (void)ac;
    (void)av;

    option_action  *pointer;
    pointer = set_pointer_function_option();

    (*(pointer[0]))(1, 1);
    return (0);
}