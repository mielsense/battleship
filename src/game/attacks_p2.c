/*
** EPITECH PROJECT, 2023
** B-PSU-100-LYN-1-1-navy-mathis.rapaccioli
** File description:
** TODO: add description
*/

#include "../../includes/my.h"
#include "../../includes/navy.h"

void update_attack_p2(game_t *game, int pid)
{
    game->player2->lettre_b = binary(game->player2->lettre, 3);
    game->player2->chiffre_b = binary(game->player2->chiffre, 3);
    send_attack_p2(game, pid);
}

int attack_p2(game_t *game, int pid)
{
    size_t buffer_size = 0;

    char *buffer = NULL;
    my_printf("attack: ");
    game->player2->attack = getline(&buffer, &buffer_size, stdin);

    if (game->player2->attack == -1)
        return 84;
    game->player2->lettre = buffer[0] - 'A';
    game->player2->chiffre = buffer[1] - '0';
    if (position_error(game->player2->lettre, game->player2->chiffre) == 1) {
        attack_p2(game, pid);
        return 0;
    }
    update_attack_p2(game, pid);
    pause();
    usleep(2000);
    put_attack_p2(game);
    return 0;
}
