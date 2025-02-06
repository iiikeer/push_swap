# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: iullibar <iullibar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/04 11:57:11 by iullibar          #+#    #+#              #
#    Updated: 2025/02/06 09:19:04 by iullibar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Comandos
# -g para debugear con lldb
CFLAGS = -Wall -Wextra -Werror -g

# Nombre ejecutable
NAME = push_swap

# Ficheros
SRCS = srcs/main.c \
		$(wildcard srcs/Alg_5/*.c) \
		$(wildcard srcs/Algoritmo/*.c) \
		$(wildcard srcs/Comprobacion/*.c) \
		$(wildcard srcs/Operadores/*.c) \
		$(wildcard srcs/Stack_utils/*.c) \
		$(wildcard srcs/Utils/*.c) \

OBJS = $(SRCS:.c=.o)
HEADER = push_swap.h

LIBS = libft/libft.a

# Reglas
all: libs $(NAME)

# Compilar
libs:
	@make -C libft

$(NAME): $(OBJS)
	gcc $(CFLAGS) $(OBJS) $(LIBS) -o $(NAME)

%.o: %.c
	gcc $(CFLAGS) -c -o $@ $<

# Eliminar temporales
clean:
	@make clean -C libft
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME) $(LIBS)

re: fclean all
.PHONY: all clean fclean re