/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozturk <onur_fb_5959@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 17:28:49 by oozturk           #+#    #+#             */
/*   Updated: 2022/09/08 17:28:50 by oozturk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	counter_coin(t_img *so_long)
{
	int	i;
	int	j;

	i = 0;
	so_long->g_coin = 0;
	while (so_long->map[i])
	{
		j = 0;
		while (so_long->map[i][j])
		{
			if (so_long->map[i][j] == 'C')
				so_long->g_coin++;
			j++;
		}
		i++;
	}
}

void	ft_makestr(int nbr)
{
	char	c;

	if (nbr >= 10)
		ft_makestr(nbr / 10);
	c = (nbr % 10) + 48;
	write(1, &c, 1);
}

void	definevar(t_img *so_long)
{
	int	a;

	a = 32;
	so_long->h = &a;
	so_long->w = &a;
	so_long->coin = 0;
	so_long->index = 0;
	so_long->g_move = 0;
	so_long->lenx = line_length(so_long);
	so_long->leny = column_length(so_long);
}

void	player(t_img *so_long)
{
	int	key;

	so_long->x_kord = 0;
	so_long->y_kord = 0;
	key = 1;
	while (so_long -> map[so_long->y_kord][so_long->x_kord] && key == 1)
	{
		so_long->x_kord = 0;
		while (so_long -> map[so_long->y_kord][so_long->x_kord] != '\n'
			&& key == 1)
		{
			if (so_long -> map[so_long->y_kord][so_long->x_kord] == 'P')
			key = 0;
			so_long->x_kord++;
		}
		so_long->y_kord++;
	}
}
