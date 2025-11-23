/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamroun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 13:54:21 by aamroun           #+#    #+#             */
/*   Updated: 2025/11/18 12:35:30 by aamroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	while (i > 0)
	{
		if (str[i] == (char)c)
			return ((char *)&str[i]);
		i--;
	}
	if (str[i] == (char)c)
		return ((char *)&str[i]);
	return (NULL);
}
/*
#include <stdio.h>
int	main(void)
{
	char b[]= "abcdefghijklmnop";
	char *p;

	p = ft_strrchr(b, 'g');
	printf("%p", p);
	return (0);
}*/
