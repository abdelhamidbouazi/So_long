NAME = so_long

CFLAGS = -Wall -Wextra -Werror -Imlx

PRINTF = ft_printf/libftprintf.a

SRC =  mandatory/game/free.c \
		mandatory/game/player_position.c \
		mandatory/game/player_move.c \
		mandatory/game/window.c \
		mandatory/map_check/check_walls.c \
		mandatory/map_check/contents.c \
		mandatory/map_check/gnl_utils.c \
		mandatory/map_check/gnl.c \
		mandatory/map_check/map_check.c \
		mandatory/so_long.c

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

OBJ = $(SRC:.c=.o)

$(NAME) : $(OBJ) $(PRINTF) mandatory/so_long.h
	@echo "Making so_long"
	@$(CC) $(OBJ) $(PRINTF) -lmlx -framework OpenGL -framework AppKit -o $(NAME)

$(PRINTF) :
	@@echo "Making ft_printf"
	@make -C ft_printf

all : $(NAME)

clean :
	@rm -rf $(OBJ)
	@make -C ft_printf clean

fclean : clean
	@rm -rf $(NAME)
	@make -C ft_printf fclean

re : fclean all