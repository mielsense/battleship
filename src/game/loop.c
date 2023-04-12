/*
** EPITECH PROJECT, 2023
** B-PSU-100-LYN-1-1-navy-mathis.rapaccioli
** File description:
** TODO: add description
*/

#include "../../includes/my.h"
#include "../../includes/navy.h"

void game_loop_p2(game_t *game)
{
    while (1) {
        my_printf("waiting for enemy's attack...\n");
        inflict_attack_p2(game, game->player1->pid);
        if (game->player2->boats == 0)
            break;

        attack_p2(game, game->player1->pid);
        if (game->player1->boats == 0)
            break;
        print_p2(game);
    }
    win_checker(game);
}

void game_loop_p1(game_t *game)
{
    while (1) {
        attack_p1(game, game->player2->pid);
        if (game->player2->boats == 0)
            break;

        my_printf("waiting for enemy's attack...\n");
        inflict_attack_p1(game, game->player2->pid);
        if (game->player1->boats == 0)
            break;
        print_p1(game);
    }
    win_checker(game);
}
