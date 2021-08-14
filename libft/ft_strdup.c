/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: signacia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 11:05:21 by signacia          #+#    #+#             */
/*   Updated: 2021/04/27 11:21:01 by signacia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*point;
	size_t	i;

	point = (char *)malloc(ft_strlen(s1) + 1);
	if (!point)
		return (0);
	i = 0;
	while (*(s1 + i))
	{
		*(point + i) = *(s1 + i);
		i++;
	}
	*(point + i) = '\0';
	return (point);
}
