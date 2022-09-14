/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozturk <onur_fb_5959@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 17:28:52 by oozturk           #+#    #+#             */
/*   Updated: 2022/09/08 17:28:53 by oozturk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include <unistd.h>
# include <unistd.h>
# include "mlx/mlx.h"
# include <fcntl.h>
# include "get_next_line/get_next_line.h"

typedef struct s_img{
	void	*mlx;
	void	*mlx_win;
	void	*wall;
	void	*co;
	void	*exit;
	void	*player;
	void	*floor;
	int		coin;
	int		*w;
	int		*h;
	int		x_kord;
	int		y_kord;
	char	**map;
	char	**map_input;
	int		g_coin;
	int		g_move;
	int		index;
	int		lenx;
	int		leny;
}		t_img;

int		column_length(t_img *so_long);
int		line_length(t_img *so_long);
int		addanimation(t_img *so_long, int index);
int		push_button(int keycode, t_img *so_long);
void	put_xpm(t_img *img);
void	img_draw(t_img *so_long, void *image, int x, int y);
void	player(t_img *so_long);
void	addimage(t_img *so_long);
void	mapdonder(t_img *so_long);
void	ft_makestr(int nbr);
void	counter_coin(t_img *so_long);
void	isrectangular(t_img *so_long);
void	ismaptrue(t_img *so_long);
void	allfunc(t_img *so_long);
void	iswalltrue(t_img *so_long);
void	isargtrue(t_img *so_long);
void	isduplicate(t_img *so_long);
void	ft_makestr(int nbr);
void	definevar(t_img *so_long);
void	topcoin(t_img *so_long);
void	leftcoin(t_img *so_long);
void	downcoin(t_img *so_long);
void	rightcoin(t_img *so_long);
#endif
