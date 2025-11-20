/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamroun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 18:36:02 by aamroun           #+#    #+#             */
/*   Updated: 2025/11/17 17:28:24 by aamroun          ###   ########.fr       */
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


static	void strcpymaison(char *word, char const *s, int count)
{
	int	i;

	i = 0;
	while (s[i] && i < count)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
}

static void	allin(char **dest, char const *s, char c)
{
	int	i;
	int	count;
	int	j;
	int	start;

	i = (j = count = start = 0);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i])
		{
			count = 0;
			start = i;
			while (s[i + count] && s[i + count] != c)
				count++;
			dest[j] = malloc((count + 1) * sizeof(char));
			if (!dest[j])
				return;
			strcpymaison(dest[j], s + start, count);
			i = i + count;
			j++;
		}
	}
	dest[j] = NULL;
}

char	**ft_split(char const *s, char c)
{
	int	count;
	char	**dest;

	count = count_words(s, c);
	dest = malloc((count + 1) * sizeof(char*));
	if (!dest)
		return (NULL);
	allin(dest, s, c);
	return (dest);
}
/*
int	main(int argc, char *argv[])
{
	if (argc != 3)
	{
		write(1, "\n", 1);
		return (1);
	}
	else
	{
		int	i;
		char ** final;

		i = 0;
		final = ft_split(argv[1], argv[2][0]);
		if (final == NULL)
			return (1);
		while (final[i])
		{
			printf("%s", final[i]);
			i++;
		}
		return (0);
	}
}*/
