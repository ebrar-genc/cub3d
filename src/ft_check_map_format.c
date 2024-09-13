/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_map_format.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerbosna <aerbosna@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 16:05:55 by egenc             #+#    #+#             */
/*   Updated: 2023/08/01 18:23:29 by aerbosna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cube3d.h"

/*
	This function checks if the format of the map is correct
	with a simple string comparison.
*/
int	ft_check_map_format(char *s, char *s2)
{
	int	i;

	i = 0;
	while (ft_strlen(s) != 4 && s)
		s++;
	if (!s || *s == '\0')
		return (0);
	while (s[i])
	{
		if (s[i] != s2[i])
			return (0);
		i++;
	}
	return (1);
}
