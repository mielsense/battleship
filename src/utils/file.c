/*
** EPITECH PROJECT, 2022
** B_CPE_110_LYN_1_1_BSQ_mathis_rapaccioli
** File description:
** Opens the file and transcribes it into a string
*/

#include "../../includes/my.h"

char *read_file(char const *filepath)
{
    char *file;
    int fd;
    int bs;

    if ((fd = open(filepath, O_RDONLY)) == -1) {
        return NULL;
    }
    off_t size_file = lseek(fd, 0, SEEK_END);
    lseek(fd, 0, SEEK_SET);
    file = malloc((size_file + 1) * sizeof(char));
    if ((bs = read(fd, file, size_file)) == -1) {
        return NULL;
    }
    if (size_file == 32 && file[size_file - 1] != '\n')
        return NULL;
    if (file[0] == '\0' || (size_file != 32 && size_file != 31))
        return NULL;
    close(fd);
    file[bs] = '\0';
    return file;
}
