/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamroun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 17:06:20 by aamroun           #+#    #+#             */
/*   Updated: 2025/11/18 16:21:43 by aamroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int		i;
	char				*dest;
	unsigned int		j;

	j = ft_strlen(s);
	if (start > j)
		return (ft_strdup(""));
	if (len > j - start)
		len = j - start;
	dest = malloc((len + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dest[i] = s[start + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*petit;

	petit = ft_substr("123456789cen'estpaslaforce", 7, 10);
	printf("%s", petit);
	return (0);
}
*/
