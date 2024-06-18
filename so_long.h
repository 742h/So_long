/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hassaleh <hassaleh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 15:25:03 by hassaleh          #+#    #+#             */
/*   Updated: 2024/05/21 13:48:40 by hassaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "mlx/mlx.h"
# include "./libft/libft.h"
# include "./gnl/get_next_line.h"
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <limits.h>
# include <stdio.h>


typedef struct	s_vars {
	char	**map;
	char	**map_copy;
	void	*connection;
	void	*window;
	void	*wall;
	void	*player_left;
	void	*player_right;
	int		player_direction;
	void	*grass;
	void	*coins;
	void	*exit;
	int		number_of_coins;
	int		steps;
	int		width;
	int		height;
	int		pixel;
	int		is_valid;
	int		player_height;
	int		player_width;
	int		player_on_exit;
}				t_vars;


int	close_as(int keycode, t_vars *vars);


#endif