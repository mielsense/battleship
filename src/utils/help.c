/*
** EPITECH PROJECT, 2023
** B-PSU-100-LYN-1-1-navy-mathis.rapaccioli
** File description:
** TODO: add description
*/

#include "../../includes/my.h"

int show_help(char **av)
{
    if (my_strcmp(av[1], "-h") == 0 || my_strcmp(av[1], "-u") == 0) {
        my_printf("USAGE\n\t./navy [first_player_pid] navy_positions\n");
        my_printf("DESCRIPTION\n\tfirst_player_pid: only for the 2nd player. ");
        my_printf("pid of the first player.\n\tnavy_positions: file ");
        my_printf("representing the positions of the ships.\n");
        return 1;
    }
    return 0;
}
