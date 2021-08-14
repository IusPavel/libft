/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: signacia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 19:21:01 by signacia          #+#    #+#             */
/*   Updated: 2021/04/28 14:46:46 by signacia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	void	*res;

	i = 0;
	res = (void *)s;
	while (i < n)
	{
		if (*((unsigned char *)s + i) == (unsigned char)c)
			return (res + i);
		i++;
	}
	return (0);
}
