/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerbosna <aerbosna@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 16:13:19 by egenc             #+#    #+#             */
/*   Updated: 2023/08/01 18:23:29 by aerbosna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cube3d.h"

/*
	This function prints an error message and exits the program,
	freeing(with ft_free function) all the allocated memory and 
	also printing "Error" to the standard error output.
*/
void	ft_error(char *str, t_dB *db)
{
	ft_free(db);
	write(2, "Error\n", 6);
	ft_putstr_fd(str, 2);
	exit(EXIT_FAILURE);
}
