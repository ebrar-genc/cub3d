/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_start.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerbosna <aerbosna@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:00:58 by egenc             #+#    #+#             */
/*   Updated: 2023/08/05 23:53:32 by aerbosna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cube3d.h"

void	ft_start(char *argv)
{
	t_dB	db;

	ft_initdata(&db);
	if (!ft_check_map_format(argv, ".cub"))
		ft_error("Map format is invalid!\n", &db);
	ft_map_process(&db, argv);
	ft_game_render(&db);
}
