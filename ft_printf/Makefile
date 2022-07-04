# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msosnova <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/19 13:05:46 by msosnova          #+#    #+#              #
#    Updated: 2021/07/26 13:05:40 by msosnova         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME =		libftprintf.a
CFLAGS =	-Wall -Werror -Wextra
CC =		gcc
SOURCES =	srcs/
INCLUDE =	include/

OBJ =	$(SOURCES)ft_printf.o \
		$(SOURCES)ft_print_char.o \
		$(SOURCES)ft_print_line.o \
		$(SOURCES)ft_print_pointer.o\
		$(SOURCES)ft_print_int_dec.o\
		$(SOURCES)ft_print_u_dec.o\
		$(SOURCES)ft_print_hexa.o\

OBJ_BONUS    = srcs_bonus/ft_printf_bonus.o

all: $(NAME)

bonus: $(OBJ_BONUS) $(NANE)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) -c $(CFLAGS) -I$(INCLUDE) $< -o $@

clean:
	rm -f $(OBJ) $(OBJ_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all bonus clean fclean re
