/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cube3D.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerbosna <aerbosna@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 14:50:16 by egenc             #+#    #+#             */
/*   Updated: 2023/08/03 16:51:41 by aerbosna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cube3d.h"

/*
	This function works only if we have 2 arguments. It checks if the format of
	the map is correct. If it is, it calls ft_map_process to process the map.
	Then it calls game_start to start the game.

	If we have more than 2 arguments, it prints an error message.
*/
int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_start(argv[1]);
	}
	else
		ft_putstr_fd("Error!\nProgram accept only one argument!\n", 2);
	return (1);
}
