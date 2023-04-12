/*
** EPITECH PROJECT, 2022
** B_CPE_110_LYN_1_1_bsbsq_mathis_rapaccioli
** File description:
** TODO: add description
*/

#ifndef MY_H_
    #define MY_H_

    #include <unistd.h>
    #include <stdarg.h>
    #include <stdlib.h>
    #include <fcntl.h>
    #include <sys/stat.h>
    #include <stdio.h>

//  lib_functions
    void my_putchar(char c);
    int my_put_nbr(int nb);
    int my_putstr(char const *str);
    int my_strlen(char const *str);
    int my_error_output(char const *str);
    int my_printf(const char *str, ...);
    int	my_getnbr(char const *str);
    char *my_strcpy(char *dest, char const *src);
    char *my_strncpy(char *dest, char const *src, int n);
    char *my_strcat(char *dest, char *src);
    char *my_strncat(char *dest, char *src, int nb);
    char *my_revstr(char *str);
    int my_strcmp(char const *s1, char const *s2);
    char **my_str_to_word_array(char const *str);
    int my_str_is_num(const char *str);

#endif //MY_H_
