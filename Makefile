NAME = so_long

CFLAGS = -Wall -Wextra -Werror -Imlx

SRC =  mandatory/game/window.c \
		mandatory/map_checking/check_walls.c \
		mandatory/map_checking/contents.c \
		mandatory/map_checking/gnl_utils.c \
		mandatory/map_checking/gnl.c \
		mandatory/map_checking/map_check.c \
		mandatory/so_long.c

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

OBJ = $(SRC:.c=.o)

OBJ_B = $(SRC_B:.c=.o)

$(NAME) : $(OBJ) $(PRINTF) mandatory/so_long.h
	@echo "Making so_long"
	@$(CC) $(OBJ) $(PRINTF) -lmlx -framework OpenGL -framework AppKit -o $(NAME)

all : $(NAME)

clean :
	@rm -rf $(OBJ)
	@rm -rf $(OBJ_B)

fclean : clean
	@rm -rf $(NAME)
	@rm -rf $(NAME_B)

re : fclean all