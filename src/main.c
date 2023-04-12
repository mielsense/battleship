/*
** EPITECH PROJECT, 2023
** B-PSU-100-LYN-1-1-navy-mathis.rapaccioli
** File description:
** TODO: add description
*/

#include "../includes/my.h"
#include "../includes/navy.h"

int main(int ac, char **av)
{
    if (ac != 2 && ac != 3)
        return 84;

    game_t *game = malloc(sizeof(game_t) + 1);
    init_map(game); int win;
    game->player1->boats = 14; game->player2->boats = 14;
    if (show_help(av) == 1)
        return 0;
    if (ac == 2) {
        if (error_manager(ac, av, av[1]) == 84)
            return 84;
        if (signal_manager(game, ac, av) == 84)
            return 84;
        win = game_manager_p1(game, av); return win;
    }
    if (ac == 3) {
        if (error_manager(ac, av, av[2]) == 84)
            return 84;
        if (signal_manager(game, ac, av) == 84)
            return 84;
        win = game_manager_p2(game, av); return win;
    }
    return 0;
}
