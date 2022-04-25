# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abouazi <abouazi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/11 01:04:30 by abouazi           #+#    #+#              #
#    Updated: 2022/04/25 02:25:51 by abouazi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRC = ft_printf.c ft_printf_hexa.c ft_printf_void.c check.c \
	  ft_p_putnbr.c ft_p_putchar.c ft_p_putstr.c ft_p_putnbr_u.c

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@
	  
OBJ = $(SRC:.c=.o)

CFLAGS = -Wall -Werror -Wextra

all : $(NAME)

$(NAME) : $(OBJ)
	@ar -rc $(NAME) $(OBJ)
	
all : $(NAME)

clean :
	@rm -rf $(OBJ)

fclean : clean
	@rm -rf $(NAME)

re : fclean all

.PHONY: all clean fclean re
