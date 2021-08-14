/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: signacia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 10:35:40 by signacia          #+#    #+#             */
/*   Updated: 2021/04/28 13:02:52 by signacia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*point;
	size_t	length;

	length = count * size;
	point = malloc(length);
	if (!point)
		return (0);
	while (length != 0)
	{
		*((char *)point + length - 1) = 0;
		length--;
	}
	return (point);
}
