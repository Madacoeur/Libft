/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamroun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 01:16:29 by aamroun           #+#    #+#             */
/*   Updated: 2025/11/20 03:05:27 by aamroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_copy(char *dst, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	while (src[i] && i < n)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}

static int	ft_check(const char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

/*
static char	*verif(char *str, int start, int i)
{
	if (start >= i)
	{
		str = malloc(1);
		str[0] = '\0';
	}
	return (str);
}
*/
/*
size_t	get_len(char const *s1, char const *set)
{
	size_t	len;
	int	i;
	int	j;

	i = 0;
	len = 0;
	while (s1[i])
	{
		j = 0;
		while (ft_check(set, s1[i]))
		{
			
		}
	}
}
*/
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	start;
	char	*dest;
	size_t	len;

	i = ((start = 0));
	if (!s1 || !set)
		return (NULL);
	while (s1[i] && ft_check(set, s1[i]))
	{
		start++;
		i++;
	}
	while (s1[i + 1] && i < ft_strlen(s1))
		i++;
	while (i > start && ft_check(set, s1[i]))
		i--;
	len = (i - start) + 2;
	if ((i - start) == ft_strlen(s1) || (i == start && i == ft_strlen(s1)))
		len = 1;
	dest = malloc((len) * sizeof(char));
	if (!dest)
		return (NULL);
	ft_copy(dest, s1 + start, len - 1);
	return (dest);
}
/*
int	main(void)
{
	char	*chaine;
	char	*set;

	chaine = "!5!!bon!!!4545!!!jour!!";
	set = "!";
	printf("%s", ft_strtrim(chaine, set));
	printf("%s\n", ft_strtrim("   xxx   xxx", " x"));
	printf("%s\n", ft_strtrim("", "123"));
	printf("%s\n", ft_strtrim("", ""));
	return (0);
}*/
