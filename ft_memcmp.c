/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scruz-ra <scruz-ra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 23:36:27 by scruz-ra          #+#    #+#             */
/*   Updated: 2023/09/28 22:49:52 by scruz-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str;
	const unsigned char	*dst;

	str = s1;
	dst = s2;
	while (n--)
	{
		if (*str != *dst)
		{
			return (*str - *dst);
		}
		str++;
		dst++;
	}
	return (0);
}
