/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scruz-ra <scruz-ra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 23:52:19 by scruz-ra          #+#    #+#             */
/*   Updated: 2023/09/28 23:00:55 by scruz-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	c;
	size_t	d;

	c = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[c] != '\0' && c < len)
	{
		d = 0;
		while (needle[d] == haystack[c + d]
			&& (c + d) < len && needle[d] != '\0')
		{
			d++;
		}
		if (needle[d] == '\0')
			return ((char *)(haystack + c));
		c++;
	}
	return (NULL);
}
