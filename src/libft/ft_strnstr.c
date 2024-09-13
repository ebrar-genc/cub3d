/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerbosna <aerbosna@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 22:05:14 by egenc             #+#    #+#             */
/*   Updated: 2023/08/01 18:23:29 by aerbosna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	i2;
	size_t	tmp;
	char	*ret;

	i = 0;
	i2 = 0;
	tmp = 0;
	ret = NULL;
	while (haystack[i] != '\0' && i < len)
	{
		while (haystack[tmp] == needle[i2] && needle[i2] != '\0' && tmp < len)
		{
			tmp++;
			i2++;
			if (needle[i2] == '\0')
				return ((char *)&haystack[i]);
		}
		i2 = 0;
		i++;
		tmp = i;
	}
	if (needle[i2] == '\0')
		return ((char *)haystack);
	return (ret);
}
