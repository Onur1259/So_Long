/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long_bonus.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oozturk <onur_fb_5959@hotmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 17:28:04 by oozturk           #+#    #+#             */
/*   Updated: 2022/09/08 17:28:05 by oozturk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_BONUS_H
# define SO_LONG_BONUS_H

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
	void	*enemy;
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
	int		ex_kord;
	int		ey_kord;
	int		fey_kord;
	int		lenx;
	int		leny;
	int		animposition;
	int		doorcontrol;
}		t_img;

void	img_draw(t_img *so_long, void *image, int x, int y);
int		column_length(t_img *so_long);
int		line_length(t_img *so_long);
void	put_xpm(t_img *img);
int		push_button(int keycode, t_img *so_long);
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
void	iscollectible(t_img *so_long);
void	ft_makestr(int nbr);
int		addanimation(t_img *so_long, int index);
int		hookfunc(t_img *so_long);
void	find_enemy(t_img *so_long);
void	move_enemy(t_img *so_long, int index);
void	define_var(t_img *so_long);
void	addimage(t_img *so_long);
int		addanimation(t_img *so_long, int index);
int		addanimation2(t_img *so_long, int index);
int		addanimation3(t_img *so_long, int index);
int		addanimation5(t_img *so_long, int index);
void	topcoin(t_img *so_long);
void	leftcoin(t_img *so_long);
void	downcoin(t_img *so_long);
void	rightcoin(t_img *so_long);
char	*ft_itoa(int n);

#endif
