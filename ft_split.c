/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamroun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 18:36:02 by aamroun           #+#    #+#             */
/*   Updated: 2025/11/21 20:35:08 by aamroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] && str[i] != c)
		{
			count++;
			while (str[i] && str[i] != c)
				i++;
		}
		else if (str[i] == c)
		{
			while (str[i] == c)
				i++;
		}
	}
	return (count);
}

static void	ft_free_him(char **dest, int k)
{
	while (k > 0)
	{
		k--;
		free(dest[k]);
	}
	free(dest);
	return ;
}

static char	**allin(char **dest, char const *s, char c)
{
	int	i;
	int	count;
	int	j;
	int	start;

	i = ((j = (count = (start = 0))));
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			(1 && (count = 0, start = i));
			while (s[i + count] && s[i + count] != c)
				count++;
			dest[j] = malloc((count + 1) * sizeof(char));
			if (!dest[j])
				return (ft_free_him(dest, j), NULL);
			ft_strlcpy(dest[j], s + start, (size_t)count + 1);
			i = i + count;
			j++;
		}
	}
	dest[j] = NULL;
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	int		count;
	char	**dest;

	count = count_words(s, c);
	dest = malloc((count + 1) * sizeof(char *));
	if (!dest)
		return (NULL);
	dest = allin(dest, s, c);
	return (dest);
}
