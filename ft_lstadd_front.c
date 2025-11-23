/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aamroun <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 03:36:16 by aamroun           #+#    #+#             */
/*   Updated: 2025/11/20 17:32:27 by aamroun          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/*
#include <stdio.h>
int     main(void)
{
	t_list	*lstnew2 = ft_lstnew("new2 c moi");
        t_list  *lstblah = ft_lstnew("hello World");
        printf("%s", (char *)lstblah->content);
	ft_lstadd_front(&lstblah, lstnew2);
	while (lstblah)
	{
		lstblah = lstblah->next;
		printf("%s", (char *)lstblah->next);
	}
}*/
