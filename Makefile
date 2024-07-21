# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hassaleh <hassaleh@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/07/01 20:12:52 by hassaleh          #+#    #+#              #
#    Updated: 2024/07/01 20:12:54 by hassaleh         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC	=	so_long.c parsing1.c parsing2.c keyhooks.c dfs.c \
		utils/gnl/get_next_line.c utils/gnl/get_next_line_utils.c \
		utils/utils.c utils/utils2.c utils/ft_printf/ft_printf.c \
		utils/ft_printf/libftprintf.c \
		utils/ft_printf/libftprintf2.c

OBJ	= $(SRC:.c=.o)

CFLAGS =  -fsanitize=address -Wall -Wextra -Werror  -g3

NAME = so_long

$(NAME): $(OBJ)
		$(MAKE) -C MLX
		cc -W -W -W $(OBJ) -Lmlx -lmlx -framework OpenGL -framework AppKit -o $(NAME)

%.o: %.c
	$(CC) -Wall -Wextra -Werror -D BUFFER_SIZE=1 -Imlx -c $< -o $@

all:	$(NAME)


clean:
		rm -f $(OBJ)
		$(MAKE) clean -C mlx
fclean: clean
		rm -f $(NAME)
re:		fclean all

.PHONY:	all clean fclean re

