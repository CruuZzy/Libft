/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scruz-ra <scruz-ra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 21:02:08 by scruz-ra          #+#    #+#             */
/*   Updated: 2023/09/30 22:28:21 by scruz-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				c;
	unsigned const char	*s;
	unsigned char		*d;

	c = 0;
	s = src;
	d = dst;
	if (!dst && !src)
		return (NULL);
	while (n > c)
	{
		d[c] = s[c];
		c++;
	}
	return (dst);
}
