/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mapcontroller2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozturk <onur_fb_5959@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 17:28:31 by oozturk           #+#    #+#             */
/*   Updated: 2022/09/08 17:28:32 by oozturk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

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

void	allfunc(t_img *so_long)
{
	isrectangular(so_long);
	ismaptrue(so_long);
	iswalltrue(so_long);
	isargtrue(so_long);
	isduplicate(so_long);
	iscollectible(so_long);
}
