/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scruz-ra <scruz-ra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 21:03:02 by scruz-ra          #+#    #+#             */
/*   Updated: 2023/10/01 21:37:14 by scruz-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	c1;
	size_t	found;

	c1 = 0;
	found = 0;
	if (c >= 256)
		c = c % 256;
	while (((char *)s)[c1] != '\0' && found == 0)
	{
		if (((char *)s)[c1] == c)
		{
			found = 1;
			return ((char *)&s[c1]);
		}
		c1++;
	}
	if (c == '\0')
	{
		return ((char *)&s[c1]);
	}
	return (NULL);
}
