/*
** EPITECH PROJECT, 2022
** my_strlen
** File description:
** task03, pool day 4
*/

int my_strlen(char const *str)
{
    int len = 0;

    while (str[len] != '\0') {
    len++;
    }
    return (len);
}
