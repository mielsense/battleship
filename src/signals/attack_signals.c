/*
** EPITECH PROJECT, 2023
** B-PSU-100-LYN-1-1-navy-mathis.rapaccioli
** File description:
** TODO: add description
*/

#include "../../includes/my.h"
#include "../../includes/navy.h"

void put_attack_p2(game_t *game)
{
    char lettre = game->player2->lettre + 'A';
    if (signal_type == 0) {
        my_printf("%c", lettre);
        my_printf("%d: hit\n\n", game->player2->chiffre);
        game->player1->boats--;
        game->player1->map[game->player2->chiffre - 1][game->player2->lettre]
            = 'x';
    }
    if (signal_type == 1){
        my_printf("%c", lettre);
        my_printf("%d: missed\n\n", game->player2->chiffre);
        game->player1->map[game->player2->chiffre - 1][game->player2->lettre]
            = 'o';
    }
}

void put_attack_p1(game_t *game)
{
    char lettre = game->player1->lettre + 'A';
    if (signal_type == 0) {
        my_printf("%c", lettre);
        my_printf("%d: hit\n\n", game->player1->chiffre);
        game->player2->boats--;
        game->player2->map[game->player1->chiffre - 1][game->player1->lettre]
        = 'x';
    }
    if (signal_type == 1){
        my_printf("%c", lettre);
        my_printf("%d: missed\n\n", game->player1->chiffre);
        game->player2->map[game->player1->chiffre - 1][game->player1->lettre]
        = 'o';
    }
}

void attack(char *binary, int pid)
{
    for (int i = 0; binary[i] != '\0'; i++) {
        if (binary[i] == 48) {
            usleep(2000);
            kill(pid, SIGUSR1);
        }
        if (binary[i] == 49) {
            usleep(2000);
            kill(pid, SIGUSR2);
        }
        pause();
    }
}

void send_attack_p2(game_t *game, int pid)
{
    attack(game->player2->lettre_b, pid);
    attack(game->player2->chiffre_b, pid);
}

void send_attack_p1(game_t *game, int pid)
{
    attack(game->player1->lettre_b, pid);
    attack(game->player1->chiffre_b, pid);
}
