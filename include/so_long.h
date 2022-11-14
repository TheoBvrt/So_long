#ifndef SO_LONG_H
# define SO_LONG_H

# include "../Libft/libft.h"
# include "../mlx/mlx.h"
# include "../GNL/get_next_line.h"
# include <fcntl.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>


typedef struct	s_data {
	void	*img;
	char	*addr;
	int		bits_per_pixel;
	int		line_length;
	int		endian;
}				t_data;

typedef struct	s_color
{
	int	green;
	int	red;
	int	blue;
}		t_color;

typedef struct s_map
{
	int	width;
	int	height;
}		t_map;


void	my_mlx_pixel_put(t_data *data, int x, int y, int color);
void    ft_draw_rec(t_data data, int posX, int posY, int w, int h, int color);
int		ft_get_height(void);
int		ft_get_width(void);
void	map_parsing(char **tab, t_map map);
void	display_wall(char **map, void *mlx, void *mlx_win, t_map data);
int		wall_checker(char **map, t_map info);


#endif