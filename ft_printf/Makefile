# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abouazi <abouazi@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/11 01:04:30 by abouazi           #+#    #+#              #
#    Updated: 2021/12/20 22:13:54 by abouazi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
SRC = ft_printf.c ft_printf_hexa.c ft_printf_void.c check.c \
	  ft_p_putnbr.c ft_p_putchar.c ft_p_putstr.c ft_p_putnbr_u.c
OBJ = $(SRC:.c=.o)
RM = rm -f
CFLAGS = -Wall -Werror -Wextra
all : $(NAME)
$(NAME) : $(OBJ)
	ar -rc $(NAME) $(OBJ)
clean :
	$(RM) $(OBJ)
fclean : clean
	$(RM) $(NAME)
re : fclean all
.PHONY: all clean fclean re
