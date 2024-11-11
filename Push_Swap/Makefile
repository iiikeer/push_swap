# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iullibar <iullibar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/04 11:57:11 by iullibar          #+#    #+#              #
#    Updated: 2024/11/04 12:00:44 by iullibar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Comandos
# -g para debugear con lldb
CFLAGS = -Wall -Wextra -Werror -g

# Nombre ejecutable
NAME = push_swap

# Ficheros
SRCS1 = main.c
SRCS2 = $(wildcard Alg_5/*.c) \
		$(wildcard Algoritmo/*.c) \
		$(wildcard Comprobacion/*.c) \
		$(wildcard Operadores/*.c) \
		$(wildcard Stack_utils/*.c) \
		$(wildcard Utils/*.c) \

OBJS1 = $(SRCS1:.c=.o)
OBJS2 = $(SRCS2:.c=.o)
HEADER = push_swap.h

LIBS = libft/libft.a

# Reglas
all: libs $(NAME)

# Compilar
libs:
	@make -C libft

$(NAME): $(OBJS1) $(OBJS2)
	gcc $(CFLAGS) $(OBJS1) $(OBJS2) $(LIBS) -o $(NAME)

%.o: %.c
	gcc $(CFLAGS) -c -o $@ $<

# Eliminar temporales
clean:
	@make clean -C libft
	rm -f $(OBJS1) $(OBJS2)

fclean: clean
	rm -f $(NAME) $(LIBS)

re: fclean all
.PHONY: all clean fclean re