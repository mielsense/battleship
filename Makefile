##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## Makefile for bsq
##

NAME = battleship

SRC	= src/main.c \
	src/game/game_manager.c \
	src/game/boats.c \
	src/game/loop.c \
	src/game/attacks_p1.c \
	src/game/attacks_p2.c \
	src/game/inflict_attack.c \
	src/game/inflict_attack_second_part.c \
	src/signals/signal_manager.c \
	src/signals/connect_signals.c \
	src/signals/attack_signals.c \
	src/signals/get_signals.c \
	src/errors/error_manager.c \
	src/errors/errors.c \
	src/utils/binary.c \
	src/utils/file.c \
	src/utils/win.c \
	src/utils/player.c \
	src/utils/map.c \
	src/utils/pid.c \
	src/utils/help.c

OBJ = $(SRC:.c=.o)
.SILENT:$(OBJ)

CFLAGS = -W -Wall -Wextra -g3

LIBFLAGS = -L./lib/my -lmy

all: $(NAME)

.SILENT:$(NAME)
$(NAME): $(OBJ)
	@echo "\033[0;32m launching main compilation \033[0m"
	make -C lib/my
	gcc $(SRC) -o $(NAME) $(CFLAGS) $(LIBFLAGS)
	rm -f $(OBJ)
	@echo "\033[0;32m main compilation done ! \033[0m"

clean:
	@echo "\033[0;32m launching make clean \033[0m"
	make clean -C lib/my
	rm -f $(OBJ)
	@echo "\033[0;32m make clean compilation done ! \033[0m"

fclean: clean
	make fclean -C lib/my
	rm -f $(NAME_LIB)

re: fclean all
	@echo "\033[0;31m make re compilation done ! \033[0m"
