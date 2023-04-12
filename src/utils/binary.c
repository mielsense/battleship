/*
** EPITECH PROJECT, 2023
** B-PSU-100-LYN-1-1-navy-mathis.rapaccioli
** File description:
** TODO: add description
*/

#include "../../includes/my.h"

int inv_binary(char *nb)
{
    int len = my_strlen(nb) - 1;
    int res = 0;
    int base = 1;

    while (nb[len] != '\0') {
        res += (nb[len] - '0') * base;
        base *= 2;
        len--;
    }

    return res;
}

char *binary(int nb, int size)
{
    int count = 0;
    char *res = malloc(sizeof(char) * (size + 3));

    while (size >= 0) {
        int temp = nb >> size;
        if (temp & 1)
            res[count] = 1 + '0';
        else
            res[count] = 0 + '0';
    count++;
    size--;
    }
    res[count] = '\0';
    return res;
}
