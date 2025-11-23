/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamroun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 20:41:16 by aamroun           #+#    #+#             */
/*   Updated: 2025/11/18 17:38:32 by aamroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*start;

	i = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		j = 0;
		if (big[i] == little[j])
		{
			start = (char *)big + i;
			while (little[j] && big[i + j] == little[j] && (i + j) < len)
				j++;
			if (little[j] == '\0')
				return (start);
		}
		i++;
	}
	return (NULL);
}

/*
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	size_t		j;
	const char	*ptr;

	i = 0;
	j = 0;
	if (little[0] == '\0') 
		return ((char *)big);
	while (big[i] && i < len)
	{
		if (big[i] == little[j])
		{
			ptr = &big[i];
			while (little[j] && big[i] == little[j] && i < len)
			{
				j++;
				i++;
				if (little[j] == '\0')
					return ((char *)ptr);
			}
			j = 0;
		}
		i++;
	}
	return (NULL);
}
#include <stdio.h>

int	main(void)
{
	char *s1 = "aaxx";
	char *s2 = "xx";

	char *result = ft_strnstr(s1, s2, 4);
	printf("%s\n", result);
	return (0);
}
*/