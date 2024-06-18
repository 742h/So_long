
SRCS = main.c gnl/get_next_line.c gnl/get_next_line_utils.c

LIBFT = libft/libft.a
CFLAGS = -Wall -Wextra -Werror -g3
OBJECTS = ${SRCS:.c=.o}

MLX = mlx/libmlx.a
NAME = so_long

all: $(NAME)

$(NAME): $(OBJECTS) $(LIBFT) $(MLX) 
	@$(CC) $(CFLAGS) -fsanitize=address -g3 $(OBJECTS) $(LIBFT) -Imlx -lm -Lmlx -lmlx -framework OpenGL -framework AppKit -o $(NAME)

$(MLX):
	@make -C mlx

$(LIBFT):
	@make -C libft
	
clean:
	@-make clean -C libft
	@-rm -rf $(OBJECTS)
	@-make clean -C mlx
	@-make clean -C mlx_Linux

fclean: clean
	@-rm -rf $(NAME)
	@-make fclean -C libft

re:	fclean all


.PHONY:	clean fclean all re
