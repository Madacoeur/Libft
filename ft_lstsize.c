/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamroun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 17:40:16 by aamroun           #+#    #+#             */
/*   Updated: 2025/11/20 22:24:41 by aamroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}
//on attribue a lst (pointeur vers le debut de la liste chainee) , 
//ladresse du prochain pointeur (next) jusqu a NULL 
//( lst devient la structure dapres (le prochain noeud))i)
