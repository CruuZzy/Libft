/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scruz-ra <scruz-ra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 21:03:39 by scruz-ra          #+#    #+#             */
/*   Updated: 2023/09/30 22:45:38 by scruz-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	leng;

	leng = ft_strlen(s);
	if (c >= 256)
		c = c % 256;
	while (leng >= 0)
	{
		if (s[leng] == c)
			return ((char *)s + leng);
		leng--;
	}
	return (NULL);
}
