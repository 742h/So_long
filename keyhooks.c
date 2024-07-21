/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keyhooks.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hassaleh <hassaleh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 20:27:26 by hassaleh          #+#    #+#             */
/*   Updated: 2024/07/01 21:49:37 by hassaleh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	movescount(t_game *game, int x, int y, int flag)
{
	if (flag == 1)
		ft_printf("Moves: %d\n", ++game->moves);
	if (game->mapcheck[y][x] == 'C')
	{
		game->mapcheck[y][x] = '0';
		game->coins--;
	}
	game->p_x = x;
	game->p_y = y;
}

void	win(t_game *game)
{
	if (game->coins <= 0 && game->mapcheck[game->p_y][game->p_x] == 'E')
	{
		ft_printf("\n\n \033[0;32m CONGRATS, You Won! \n\n");
		close_window(game);
	}
}

void	mark_exit(t_game *game, int x, int y)
{
	if (game->markexit == 1 && game->mapcheck[y][x] != 'E')
	{
		draw_img(game, EXIT, game->e_x, game->e_y);
		game->markexit = 0;
	}
}

int	moves(t_game *game, int x, int y)
{
	if (game->mapcheck[game->p_y + y][game->p_x + x] == '1')
		return (0);
	else if (game->mapcheck[game->p_y + y][game->p_x + x] == 'E'
	&& game->coins > 0)
	{
		draw_img(game, SPACE, game->p_x, game->p_y);
		draw_img(game, PLAYEREXIT, game->p_x + (x), game->p_y + (y));
		movescount(game, game->p_x + (x), game->p_y + (y), 1);
		game->markexit = 1;
	}
	else
	{
		draw_img(game, SPACE, game->p_x, game->p_y);
		draw_img(game, PLAYER, game->p_x + x, game->p_y + y);
		movescount(game, game->p_x + x, game-> p_y + y, 1);
		mark_exit(game, game->p_x + x, game->p_y + y);
		win(game);
	}
	return (0);
}

int	keyhook(int keycode, t_game *game)
{
	int	up;
	int	down;
	int	right;
	int	left;
	int	esc;

	up = 13;
	down = 1;
	right = 2;
	left = 0;
	esc = 53;
	if (keycode == up || keycode == 126)
		moves(game, 0, -1);
	else if (keycode == left || keycode == 123)
		moves(game, -1, 0);
	else if (keycode == down || keycode == 125)
		moves(game, 0, 1);
	else if (keycode == right || keycode == 124)
		moves(game, 1, 0);
	else if (keycode == esc)
		close_window(game);
	return (0);
}
