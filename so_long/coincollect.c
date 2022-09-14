/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   coincollect.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozturk <onur_fb_5959@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 17:28:19 by oozturk           #+#    #+#             */
/*   Updated: 2022/09/08 17:28:21 by oozturk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	topcoin(t_img *so_long)
{
	so_long->map[so_long->y_kord - 1][so_long->x_kord - 1] = '0';
	so_long->map[so_long->y_kord - 2][so_long->x_kord - 1] = 'P';
	so_long->g_move++;
	put_xpm(so_long);
	so_long->coin += 1;
}

void	leftcoin(t_img *so_long)
{
	so_long->map[so_long->y_kord - 1][so_long->x_kord - 1] = '0';
	so_long->map[so_long->y_kord - 1][so_long->x_kord - 2] = 'P';
	so_long->g_move++;
	put_xpm(so_long);
	so_long->coin += 1;
}

void	downcoin(t_img *so_long)
{
	so_long->map[so_long->y_kord - 1][so_long->x_kord - 1] = '0';
	so_long->map[so_long->y_kord][so_long->x_kord - 1] = 'P';
	so_long->g_move++;
	put_xpm(so_long);
	so_long->coin += 1;
}

void	rightcoin(t_img *so_long)
{
	so_long->map[so_long->y_kord - 1][so_long->x_kord - 1] = '0';
	so_long->map[so_long->y_kord - 1][so_long->x_kord] = 'P';
	so_long->g_move++;
	put_xpm(so_long);
	so_long->coin += 1;
}
