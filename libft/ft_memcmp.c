/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: signacia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 20:12:42 by signacia          #+#    #+#             */
/*   Updated: 2021/04/28 14:48:07 by signacia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	size_t	res;

	i = 0;
	res = 0;
	while (i < n)
	{
		res = *((unsigned char *)s1 + i) - *((unsigned char *)s2 + i);
		if (res != 0)
			return (res);
		i++;
	}
	return (res);
}
