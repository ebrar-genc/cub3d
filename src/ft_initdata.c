/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initdata.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerbosna <aerbosna@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 16:02:05 by egenc             #+#    #+#             */
/*   Updated: 2023/08/05 22:51:44 by aerbosna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cube3d.h"

/*
	This function initializes all the variables in the struct.
*/
void	ft_initdata_2(t_dB *db)
{
	db->map_height = 0;
	db->map_width = 0;
	db->player = '\0';
	db->c[0] = -1;
	db->c[1] = -1;
	db->c[2] = -1;
	db->f[0] = -1;
	db->f[1] = -1;
	db->f[2] = -1;
	db->mouse = '\0';
	db->is_key = '0';
	db->sprite = '0';
	db->sprite_state = '1';
	db->key_py = 1;
	db->key_px = 0;
	db->d_x = -1;
	db->d_y = -1;
	db->angle = 60.0 / WIDTH;
	db->map_split = false;
}

/*
	This function initializes all the variables in the struct.
*/
void	ft_initdata(t_dB *db)
{
	int	array_counter;

	array_counter = -1;
	db->ea = NULL;
	db->no = NULL;
	db->so = NULL;
	db->we = NULL;
	db->img = NULL;
	db->line = NULL;
	db->map = NULL;
	db->win = NULL;
	db->door = NULL;
	db->minimap = NULL;
	db->key = NULL;
	db->key2 = NULL;
	db->mlx = NULL;
	while (array_counter < 9)
	{
		array_counter++;
		db->addr[array_counter] = NULL;
	}
	ft_initdata_2(db);
}
