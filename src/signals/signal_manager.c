/*
** EPITECH PROJECT, 2023
** B-PSU-100-LYN-1-1-navy-mathis.rapaccioli
** File description:
** TODO: add description
*/

#include "../../includes/my.h"
#include "../../includes/navy.h"

int signal_manager(game_t *game, int ac, char **av)
{
    if (ac == 2) {
        if (player_one(game) == 84)
            return 84;
    } else {
        game->player1->pid = my_getnbr(av[1]);
        if (player_two(game, my_getnbr(av[1])) == 84)
            return 84;
    }
    return 0;
}
