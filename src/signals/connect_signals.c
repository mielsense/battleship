/*
** EPITECH PROJECT, 2023
** B-PSU-100-LYN-1-1-navy-mathis.rapaccioli
** File description:
** TODO: add description
*/

#include "../../includes/my.h"
#include "../../includes/navy.h"

int signal_type = -1;

void handler(int sa, siginfo_t *sign, void *context)
{
    (void) context;

    if (signal_type == -1) {
        signal_type = sign->si_pid;
        return;
    }

    switch (sa) {
        case SIGUSR1: signal_type = 0; break;
        case SIGUSR2: signal_type = 1; break;
        default: break;
    }
}

void sa_start(game_t *game)
{
    game->sa.sa_sigaction = handler;

    sigemptyset(&game->sa.sa_mask);
    game->sa.sa_flags = SA_SIGINFO;

    sigaction(SIGUSR1, &game->sa, NULL);
    sigaction(SIGUSR2, &game->sa, NULL);
}

int player_two(game_t *game, int p1_pid)
{
    sa_start(game);

    print_pid();
    kill(p1_pid, SIGUSR1);
    pause();
    my_printf("successfully connected\n\n");

    return 0;
}

int player_one(game_t *game)
{
    sa_start(game);
    int pid = getpid();
    game->player1->pid = pid;

    print_pid();
    my_printf("waiting for ennemy connection...\n\n");
    pause();

    usleep(2000);
    game->player2->pid = signal_type;
    kill(game->player2->pid, SIGUSR1);
    my_printf("enemy connected\n\n");

    return 0;
}
