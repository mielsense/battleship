/*
** EPITECH PROJECT, 2023
** B-PSU-100-LYN-1-1-navy-mathis.rapaccioli
** File description:
** TODO: add description
*/

#include "../../includes/my.h"
#include "../../includes/navy.h"

void win_checker(game_t *game)
{
    if (game->player2->boats == 0)
        game->won = -1;
    if (game->player1->boats == 0)
        game->won = 1;
}

int win_manager_p2(game_t *game)
{
    if (game->won == 1) {
        print_p2(game);
        my_printf("\nI won\n");
        return 0;
    }
    if (game->won == -1) {
        print_p2(game);
        my_printf("\nEnemy won\n");
        return 1;
    }
    return 0;
}

int win_manager_p1(game_t *game)
{
    if (game->won == -1) {
        print_p1(game);
        my_printf("\nI won\n");
        return 0;
    }
    if (game->won == 1) {
        print_p1(game);
        my_printf("\nEnemy won\n");
        return 1;
    }
    return 0;
}
