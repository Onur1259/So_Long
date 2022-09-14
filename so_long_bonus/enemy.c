/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enemy.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozturk <onur_fb_5959@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 17:27:42 by oozturk           #+#    #+#             */
/*   Updated: 2022/09/08 17:27:43 by oozturk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long_bonus.h"

void	move_enemy2(t_img *so_long);

void	find_enemy(t_img *so_long)
{
	int	i;
	int	j;

	i = 0;
	while (so_long->map[i])
	{
		j = 0;
		while (so_long->map[i][j])
		{
			if (so_long->map[i][j] == 'D')
			{
				so_long->ex_kord = j;
				so_long->ey_kord = i;
			}
			j++;
		}
		i++;
	}
	so_long->fey_kord = so_long->ey_kord;
}

void	move_enemy(t_img *so_long, int index)
{
	find_enemy(so_long);
	if (so_long->map[so_long->ey_kord][so_long->ex_kord] == 'P')
		exit(0);
	if ((so_long->map[so_long->ey_kord + 1][so_long->ex_kord] == '0'
		|| so_long->map[so_long->ey_kord + 1][so_long->ex_kord] == 'P')
			&& index % 10 == 8)
	{
		so_long->map[so_long->ey_kord][so_long->ex_kord] = '0';
		if (so_long->map[so_long->ey_kord + 1][so_long->ex_kord] == 'P')
		{
			so_long->map[so_long->ey_kord + 1][so_long->ex_kord] = 'D';
			exit(0);
		}
		so_long->map[so_long->ey_kord + 1][so_long->ex_kord] = 'D';
		so_long->ey_kord++;
		put_xpm(so_long);
	}
	else if (so_long->map[so_long->ey_kord + 1][so_long->ex_kord] == '1'
		&& so_long->index % 10 == 8)
		move_enemy2(so_long);
}

void	move_enemy2(t_img *so_long)
{
	so_long->ey_kord = 1;
	if (so_long->map[so_long->ey_kord][so_long->ex_kord] == 'P')
	{
		write(1, "gg", 2);
		exit(0);
	}
	so_long->map[so_long->ey_kord][so_long->ex_kord] = 'D';
	so_long->map[so_long->ey_kord
		- (so_long->ey_kord - so_long->fey_kord)][so_long->ex_kord] = '0';
	put_xpm(so_long);
}

//mapcontroller functions
void	iscollectible(t_img *so_long)
{
	int		i;
	int		j;
	int		c_counter;

	i = 0;
	c_counter = 0;
	while (so_long->map[i])
	{
		j = 0;
		while (so_long->map[i][j])
		{
			if (so_long->map[i][j] == 'C')
				c_counter++;
			j++;
		}
		i++;
	}
	if (c_counter <= 0)
	{
		write(1, "Error(Haritada coin yok!)\n", 26);
		exit(1);
	}
}
