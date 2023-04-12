##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makfile for the lib
##

SRC = my_strlen.c \
	my_putchar.c \
	my_put_nbr.c \
	my_strcmp.c \
	my_putstr.c \
	my_getnbr.c \
	my_strcpy.c \
	my_strcat.c \
	my_strncpy.c \
	my_strncat.c \
	my_revstr.c \
	my_isnum.c \
	my_printf/my_printf.c \
	my_printf/my_putdouble.c \
	my_printf/my_putlong.c \
	my_printf/my_octal.c \
	my_printf/my_high_hexa.c \
	my_printf/my_low_hexa.c \
	my_printf/my_putptr.c \
	my_printf/my_binary.c \
	my_printf/my_nonprintable_char.c \
	my_error_output.c

OBJ = $(SRC:.c=.o)
.SILENT:$(OBJ)

NAME_LIB = libmy.a

all: $(NAME_LIB)

.SILENT:$(NAME_LIB)
$(NAME_LIB): $(OBJ)
	ar rc $(NAME_LIB) $(OBJ)
	rm -f $(OBJ)
	@echo "\x1b[1m\x1b[36m -> library compilation done \033[0m"

.SILENT:clean
clean:
	rm -f $(OBJ)
	@echo "\x1b[1m\x1b[36m -> lib clean done \033[0m"

.SILENT:fclean
fclean: clean
	rm -f $(NAME_LIB)
	@echo "\x1b[1m\x1b[36m -> library fclean done \033[0m"

re: fclean all
