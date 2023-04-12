/*
** EPITECH PROJECT, 2023
** B-PSU-100-LYN-1-1-navy-mathis.rapaccioli
** File description:
** TODO: add description
*/

#include "../../includes/my.h"
#include "../../includes/navy.h"

int check_hit(game_t *game, char **map)
{
    if (map[game->current_move->chiffre - 1][game->current_move->lettre] == '.')
        return 0;
    if (map[game->current_move->chiffre - 1][game->current_move->lettre] == 'o')
        return 0;
    if (map[game->current_move->chiffre - 1][game->current_move->lettre] != '.')
        return 1;
    return -1;
}

void update_attack(game_t *game)
{
    game->current_move->lettre = inv_binary(game->current_move->lettre_b);
    game->current_move->chiffre = inv_binary(game->current_move->chiffre_b);
}

int inflict_attack_p2(game_t *game, int pid)
{
    get_attack(game, pid);
    update_attack(game);

    char lettre = game->current_move->lettre + 'A';
    int has_hit = check_hit(game, game->player2->map);

    check_hit_or_miss2(game, has_hit, lettre, pid);

    return 0;
}

int inflict_attack_p1(game_t *game, int pid)
{
    get_attack(game, pid);
    update_attack(game);

    char lettre = game->current_move->lettre + 'A';
    int has_hit = check_hit(game, game->player1->map);

    check_hit_or_miss1(game, has_hit, lettre, pid);

    return 0;
}
