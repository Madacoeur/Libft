/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamroun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/09 21:57:23 by aamroun           #+#    #+#             */
/*   Updated: 2025/11/11 19:00:00 by aamroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			i;
	size_t			taille;
	void			*tab;
	unsigned char	*temp;

	i = 0;
	taille = nmemb * size;
	if (nmemb != 0 && taille / nmemb != size)
		return (NULL);
	temp = (unsigned char *)malloc(taille);
	if (!temp)
		return (NULL);
	while (i < taille)
	{
		temp[i] = 0;
		i++;
	}
	tab = (void *)temp;
	return (tab);
}
