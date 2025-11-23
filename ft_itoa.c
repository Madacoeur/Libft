/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamroun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 15:41:32 by aamroun           #+#    #+#             */
/*   Updated: 2025/11/18 17:11:54 by aamroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_len(long n)
{
	size_t	len;

	len = 0;
	if (n < 0)
	{
		len++;
		n = -n;
	}
	if (n == 0)
		len++;
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	size_t	len;
	char	*dest;
	long	tmp;
	size_t	start;

	len = ft_len(n);
	tmp = (long) n;
	start = 0;
	dest = malloc((len + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	if (tmp < 0)
	{
		dest[0] = '-';
		tmp = tmp * (-1);
		start = 1;
	}
	dest[len] = '\0';
	while (len > start)
	{
		dest[len - 1] = tmp % 10 + '0';
		tmp = tmp / 10;
		len--;
	}
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	int jean =-2147483648;
	printf("%s", ft_itoa(jean));
	return (0);
}*/
