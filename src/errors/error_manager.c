/*
** EPITECH PROJECT, 2023
** B-PSU-100-LYN-1-1-navy-mathis.rapaccioli
** File description:
** TODO: add description
*/

#include "../../includes/my.h"
#include "../../includes/navy.h"

int error_manager(int ac, char **av, char *filepath)
{
    if (read_file(filepath) == NULL) {
        my_printf("error while opening file");
        return 84;
    }
    char *map = read_file(filepath);

    if (check_map_form(map) || check_map_content(map) == 84) {
        my_printf("invalid map");
        return 84;
    }
    if (ac == 3) {
        if (my_str_is_num(av[1]) == 1) {
            my_printf("invalid pid");
            return 84;
        }
    }
    return 0;
}
