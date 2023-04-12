/*
** EPITECH PROJECT, 2023
** B-PSU-100-LYN-1-1-navy-mathis.rapaccioli
** File description:
** TODO: add description
*/

#include "../../includes/my.h"

int position_error(int rows, int lines)
{
    if ((lines <= 0 || rows > 7) || (rows < 0 || lines > 8)) {
        my_printf("wrong position\n");
        return 1;
    }
    return 0;
}

int check_map_form(char *map)
{
    for (int i = 0; map[i]; i++) {
        if (!((map[i] >= 65 && map[i] <= 72) || (map[i] >= 48 && map[i] <= 56)
        || (map[i] == ':') || map[i] == '\n'))
            return 84;
    }
    return 0;
}

int check_map_content(char *map)
{
    for (int i = 0; i < 31; i += 8) {
        int nb = map[i] - 48;
        int nb1 = map[i + 2] - 48;
        int nb2 = map[i + 3] - 48;
        int nb3 = map[i + 5] - 48;
        int nb4 = map[i + 6] - 48;

        if ((nb3 - nb1) != 0 && (nb4 -nb2) != 0)
            return 84;
        if (nb != (nb3 - nb1 + 1) && nb != (nb4 - nb2 + 1))
            return 84;
    }
    return 0;
}
