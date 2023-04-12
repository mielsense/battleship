/*
** EPITECH PROJECT, 2023
** B-PSU-100-LYN-1-1-navy-mathis.rapaccioli
** File description:
** TODO: add description
*/

#include "../../includes/my.h"
#include "../../includes/navy.h"

void print_map(char **map)
{
    int count = 1;

    my_printf(" |A B C D E F G H\n");
    my_printf("-+---------------\n");

    for (int i = 0; map[i] != NULL; i++) {
        my_printf("%d|", count);
        count++;

        for (int j = 0; map[i][j] != '\0'; j++)
            my_printf("%c ", map[i][j]);
        my_printf("\n");
    }
}

char **create_map(int nb_rows, int nb_lines)
{
    char **map = malloc(sizeof(char *) * (nb_rows + 1));
    int g_i = 0, g_j = 0;

    while (g_i < nb_rows) {
        map[g_i] = malloc(sizeof(char) * (nb_lines + 1));

        for (g_j = 0; g_j < nb_lines; g_j++)
            map[g_i][g_j] = '.';

        map[g_i][g_j] = '\0';
        g_i++;
    }
    map[g_i] = NULL;
    return (map);
}

void init_map(game_t *game)
{
    game->player1 = malloc(sizeof(player_t) + 1);
    game->player2 = malloc(sizeof(player_t) + 1);
    game->current_move = malloc(sizeof(move_t) + 1);

    game->player1->map = create_map(8, 8);
    game->player2->map = create_map(8, 8);
}
