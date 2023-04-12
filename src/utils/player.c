/*
** EPITECH PROJECT, 2023
** B-PSU-100-LYN-1-1-navy-mathis.rapaccioli
** File description:
** TODO: add description
*/

#include "../../includes/my.h"
#include "../../includes/navy.h"

void init_p2(game_t *game, char *filepath)
{
    game->player2->map = place_boats(game->player2->map, filepath);
    game->player2->boats = 14;

    game->player2->lettre = -1;
    game->player2->chiffre = -1;

    game->player2->hastouched = 0;
}

void init_p1(game_t *game, char *filepath)
{
    game->player1->map = place_boats(game->player1->map, filepath);
    game->player1->boats = 14;

    game->player1->lettre = -1;
    game->player1->chiffre = -1;

    game->player1->hastouched = 0;
}

void print_p2(game_t *game)
{
    my_printf("my positions:\n");
    print_map(game->player2->map);
    my_printf("\n");

    my_printf("enemy's positions:\n");
    print_map(game->player1->map);
    my_printf("\n");
}

void print_p1(game_t *game)
{
    my_printf("my positions:\n");
    print_map(game->player1->map);
    my_printf("\n");

    my_printf("enemy's positions:\n");
    print_map(game->player2->map);
    my_printf("\n");
}
