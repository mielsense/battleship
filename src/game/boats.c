/*
** EPITECH PROJECT, 2023
** B-PSU-100-LYN-1-1-navy-mathis.rapaccioli
** File description:
** TODO: add description
*/

#include "../../includes/my.h"
#include "../../includes/navy.h"

char **place_boat_map(coords_t *coords, char **map)
{
    if (coords->x_letter == coords->x_number) {
        while (coords->y_letter <= coords->y_number) {
            map[coords->y_letter][coords->x_letter] = coords->boat + '0';
            coords->y_letter++;
        }
    }

    if (coords->y_letter == coords->y_number) {
        while (coords->x_letter <= coords->x_number) {
            map[coords->y_letter][coords->x_letter] = coords->boat + '0';
            coords->x_letter++;
        }
    }
    return map;
}

char **place_boats(char **map, char *filepath)
{
    coords_t *coords = malloc(sizeof(coords_t) + 1);
    char *coords_map = read_file(filepath);
    int i = 0;

    while (i < 31) {
        coords->boat = (coords_map[i + 0] - '0');
        coords->x_letter = coords_map[i + 2] - 'A';
        coords->y_letter = (coords_map[i + 3] - '0') - 1;
        coords->x_number = coords_map[i + 5] - 'A';
        coords->y_number = (coords_map[i + 6] - '0') - 1;

        map = place_boat_map(coords, map);
        i += 8;
    }
    return map;
}
