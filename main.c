/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hassaleh <hassaleh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 15:24:32 by hassaleh          #+#    #+#             */
/*   Updated: 2024/06/03 12:22:07 by hassaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int ac, char **av)
{
	t_vars mlx;
	// void *img;
	int	len;
	if (ac != 2)
		return 0;
	int fd = open(av[1], O_RDONLY);
	if (fd < 0)
		return (perror("can't be opened"), 0);


	// initialize 
	mlx.map = NULL;
	mlx.map_copy = NULL;
	mlx.connection = NULL;
	mlx.window = NULL;
	mlx.wall = NULL;
	mlx.player_left = NULL;
	mlx.player_right = NULL;
	mlx.player_direction = 0;
	mlx.grass = NULL;
	mlx.coins = NULL;
	mlx.exit = NULL;
	mlx.number_of_coins = 0;
	mlx.steps = 0;
	mlx.width = 0;
	mlx.height = 0;
	mlx.pixel = 0;
	mlx.is_valid = 0;
	mlx.player_height = 0;
	mlx.player_width = 0;
	mlx.player_on_exit = 0;


	char *line = NULL;
	while(1)
	{
		line = get_next_line(fd);
		free(line);
		if (!line)
			break;
		mlx.height++;
	}
	close(fd);
	
	mlx.map = malloc(mlx.height * sizeof(char **));
	mlx.map_copy = malloc(mlx.height * sizeof(char **));
	
	fd = open(av[1], O_RDONLY);
	int i = 0;
	while (i  < mlx.height)
	{
		line = get_next_line(fd);
		printf("%zu\n", ft_strlen(line));
		mlx.map[i] = malloc(ft_strlen(line) * sizeof(char) + 1);
		ft_strlcpy(mlx.map[i], line, ft_strlen(line) + 1);
		i++;
	}
	i = 0;
	while (i < mlx.height)
	{
		printf("%s", mlx.map[i]);
		i++;
	}

	printf("\nend\n");
	
	// exit(0);
	mlx.connection = mlx_init();
	mlx.window = mlx_new_window(mlx.connection, 920 , 720, "so_long");
	mlx.wall = mlx_xpm_file_to_image(mlx.connection, "Boo.xpm", &len, &len);
	mlx.grass = mlx_xpm_file_to_image(mlx.connection, "cat.xpm", &len, &len);
	mlx.exit = mlx_xpm_file_to_image(mlx.connection, "portal.xpm", &len, &len);
	mlx_clear_window(mlx.connection, mlx.window);
	
	mlx_put_image_to_window(mlx.connection, mlx.window, mlx.grass, 100, 100);
	mlx_put_image_to_window(mlx.connection, mlx.window, mlx.wall, 200, 200);
	mlx_put_image_to_window(mlx.connection, mlx.window, mlx.exit, 500, 500);
	// mlx_hook(mlx.connection, 2, (1L << 0), key_hook, &mlx);
	
	// img = mlx_new_image(mlx.connection, 1920, 1080);
	mlx_loop(mlx.connection);
	
}

