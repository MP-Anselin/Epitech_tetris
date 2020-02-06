#include <stdio.h>

#include "tetris.h"

int main(int ac, char **av)
{
    if (ac < 2)
        return (help_information(false));
    my_printf("args == ");
    for (int i = 1; av[i]; ++i) {
        my_printf("%s ", av[i]);
    }
    my_printf("\n\n\n");
    return (customs(ac, av));
}
