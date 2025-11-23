/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamroun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 23:37:05 by aamroun           #+#    #+#             */
/*   Updated: 2025/11/17 17:15:14 by aamroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	j;
	size_t	len_src;
	size_t	len_dest;

	j = 0;
	len_dest = 0;
	len_src = 0;
	while (dest[len_dest])
		len_dest++;
	while (src[len_src])
		len_src++;
	if (len_dest >= n)
		return (n + len_src);
	else
	{
		while (src[j] && (len_dest + j) < n - 1)
		{
			dest[len_dest + j] = src[j];
			j++;
		}
		dest[len_dest + j] = '\0';
	}
	return (len_dest + len_src);
}
