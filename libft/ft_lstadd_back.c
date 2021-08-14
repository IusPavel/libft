/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: signacia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/30 16:12:43 by signacia          #+#    #+#             */
/*   Updated: 2021/05/02 00:56:37 by signacia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*point;

	if (lst == 0)
		return ;
	if ((*lst) == 0)
	{
		(*lst) = new;
		return ;
	}
	point = *lst;
	while (point->next != 0)
		point = point->next;
	point->next = new;
}
