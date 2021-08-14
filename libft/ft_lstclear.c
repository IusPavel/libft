/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: signacia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 16:43:42 by signacia          #+#    #+#             */
/*   Updated: 2021/08/14 14:04:11 by signacia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*point;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		point = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		(*lst) = point;
	}
}
