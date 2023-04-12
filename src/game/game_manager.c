/*
** EPITECH PROJECT, 2023
** B-PSU-100-LYN-1-1-navy-mathis.rapaccioli
** File description:
** TODO: add description
*/

#include "../../includes/my.h"
#include "../../includes/navy.h"

int game_manager_p2(game_t *game, char **av)
{
    init_p2(game, av[2]);
    print_p2(game);
    int win;

    game_loop_p2(game);
    if ((win = win_manager_p2(game)) == 1)
        return win;
    return 0;
}

int game_manager_p1(game_t *game, char **av)
{
    init_p1(game, av[1]);
    print_p1(game);
    int win;

    game_loop_p1(game);
    if ((win = win_manager_p1(game)) == 1)
        return win;
    return 0;
}
