/*
** EPITECH PROJECT, 2023
** B-PSU-100-LYN-1-1-navy-mathis.rapaccioli
** File description:
** TODO: add description
*/

#ifndef NAVY_H
    #define NAVY_H

    #include <signal.h>

    typedef struct move_s {
        int lettre;
        int chiffre;
        char lettre_b[5];
        char chiffre_b[5];
    } move_t;

    typedef struct coords_s {
        int boat;
        int x_letter;
        int x_number;
        int y_letter;
        int y_number;
    } coords_t;

    typedef struct player_s {
        int pid;
        int boats;
        int attack;
        int lettre;
        int chiffre;
        int hastouched;
        char *lettre_b;
        char *chiffre_b;
        char **map;
    } player_t;

    typedef struct game_s {
        player_t *player1;
        player_t *player2;
        move_t *current_move;
        int won;
        struct sigaction sa;
    } game_t;

    extern int signal_type;

    //  main handlers
    int signal_manager(game_t *game, int ac, char **av);
    int game_manager_p1(game_t *game, char **av);
    int game_manager_p2(game_t *game, char **av);
    int win_manager_p1(game_t *game);
    int win_manager_p2(game_t *game);

        //  game handlers
        void game_loop_p1(game_t *game);
        void game_loop_p2(game_t *game);
        char **place_boats(char **map, char *filepath);

        //  game utils
            int attack_p1(game_t *game, int pid);
            int attack_p2(game_t *game, int pid);
            int inflict_attack_p1(game_t *game, int pid);
            void check_hit_or_miss1(game_t *game, int has_hit,
            char lettre, int pid);
            int inflict_attack_p2(game_t *game, int pid);
            void check_hit_or_miss2(game_t *game, int has_hit,
            char lettre, int pid);

        //  signals
        int player_one(game_t *game);
        int player_two(game_t *game, int p1_pid);
        void send_attack_p1(game_t *game, int pid);
        void send_attack_p2(game_t *game, int pid);
        void put_attack_p1(game_t *game);
        void put_attack_p2(game_t *game);
        void get_attack(game_t *game, int pid);

    //  utils
    void print_p1(game_t *game);
    void print_p2(game_t *game);
    void init_p1(game_t *game, char *filepath);
    void init_p2(game_t *game, char *filepath);
    void print_pid(void);
    int show_help(char **av);
    void init_map(game_t *game);
    char **create_map(int nb_rows, int nb_lines);
    void print_map(char **map);
    void win_checker(game_t *game);
    char *binary(int nb, int size);
    int inv_binary(char *nb);

    //  errors
    int error_manager(int ac, char **av, char *filepath);
    int check_map_form(char *map);
    int check_map_content(char *map);
    int position_error(int rows, int lines);

    //  file
    char *read_file(char const *filepath);

#endif //NAVY_H
