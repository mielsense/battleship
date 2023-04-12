/*
** EPITECH PROJECT, 2023
** B-PSU-100-LYN-1-1-navy-mathis.rapaccioli
** File description:
** TODO: add description
*/

#include "../../includes/my.h"
#include "../../includes/navy.h"

void get_attack(game_t *game, int pid)
{
    int len_bin = 0;
    int elements = 0;

    while (elements < 2 && len_bin < 4) {
        pause();
        usleep(2000);
        if (elements == 0)
            game->current_move->lettre_b[len_bin] = (signal_type + '0');
        if (elements == 1)
            game->current_move->chiffre_b[len_bin] = (signal_type + '0');
        len_bin++;
        if (len_bin == 4) {
            len_bin = 0;
            elements++;
        }
        kill(pid, SIGUSR1);
    }
    game->current_move->lettre_b[4] = '\0';
    game->current_move->chiffre_b[4] = '\0';
}
