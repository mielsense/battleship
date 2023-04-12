/*
** EPITECH PROJECT, 2022
** my_strcat
** File description:
** task02, pool day 7
*/

int strlen2(char *dest)
{
    int i = 0;
    while (dest[i]) {
        i++;
    }
    return i;
}

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int len = strlen2(dest);

    while (src[i]) {
        dest[len + i] = src[i];
        i++;
    }
    dest[len + i] = '\0';
    return dest;
}
