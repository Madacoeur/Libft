/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamroun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 11:24:31 by aamroun           #+#    #+#             */
/*   Updated: 2025/11/18 17:26:12 by aamroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*dest;
	int		i;
	int		j;

	i = ft_strlen(s1);
	j = ft_strlen(s2);
	dest = malloc((i + j + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		dest[i + j] = s2[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
/*
#include <unistd.h>
int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		write(1, "\n", 1);
		return (1);
	}
	int	i;
	char	*dest;

	i = 0;
	dest = ft_strjoin(argv[1], argv[2]);
	while (dest[i])
	{
		write(1, &dest[i], 1);
		i++;
	}
	return (0);
}*/
