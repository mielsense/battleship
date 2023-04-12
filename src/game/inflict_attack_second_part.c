/*
** EPITECH PROJECT, 2022
** navy
** File description:
** inflict_attack_second_part.c
*/

#include "../../includes/my.h"
#include "../../includes/navy.h"

void check_hit_or_miss2(game_t *game, int has_hit, char lettre, int pid)
{
    if (has_hit == 1) {
        my_printf("%c", lettre);
        my_printf("%i: hit\n\n", game->current_move->chiffre);
        game->player2->map[game->current_move->chiffre - 1][game->current_move
            ->lettre] = 'x';
        game->player2->boats--;
        usleep(2000);
        kill(pid, SIGUSR1);
    } else if (has_hit == 0) {
        my_printf("%c", lettre);
        my_printf("%d: missed\n\n", game->current_move->chiffre);
        game->player2->map[game->current_move->chiffre - 1][game->current_move
            ->lettre] = 'o';
        usleep(2000);
        kill(pid, SIGUSR2);
    }
    return;
}

void check_hit_or_miss1(game_t *game, int has_hit, char lettre, int pid)
{
    if (has_hit == 1) {
        my_printf("%c", lettre);
        my_printf("%d: hit\n\n", game->current_move->chiffre);
        game->player1->map[game->current_move->chiffre - 1][game->current_move
        ->lettre] = 'x';
        game->player1->boats--;
        usleep(2000);
        kill(pid, SIGUSR1);
    } else if (has_hit == 0) {
        my_printf("%c", lettre);
        my_printf("%d: missed\n\n", game->current_move->chiffre);
        game->player1->map[game->current_move->chiffre - 1][game->current_move
            ->lettre] = 'o';
        usleep(2000);
        kill(pid, SIGUSR2);
    }
    return;
}
