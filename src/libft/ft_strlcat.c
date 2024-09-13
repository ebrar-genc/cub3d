/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aerbosna <aerbosna@student.42istanbul.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 22:06:33 by egenc             #+#    #+#             */
/*   Updated: 2023/08/01 18:23:29 by aerbosna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;
	size_t	j;
	size_t	ret;

	i = 0;
	j = 0;
	ret = ft_strlen(dst);
	len = size - 1;
	if (size > ret)
	{
		while (dst[i] != '\0')
			i++;
		while (src[j] != '\0' && j + i < len)
		{
			dst[i + j] = src[j];
			j++;
		}
		dst[i + j] = '\0';
		return (ret + ft_strlen(src));
	}
	return (ret + ft_strlen(src)+1);
}
