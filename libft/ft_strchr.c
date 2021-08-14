/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: signacia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 14:09:59 by signacia          #+#    #+#             */
/*   Updated: 2021/04/28 14:57:28 by signacia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*result;
	size_t	len;

	result = (char *) s;
	len = ft_strlen(s) + 1;
	while (len--)
	{
		if (*result == (char)c)
			return (result);
		result++;
	}
	return (0);
}
