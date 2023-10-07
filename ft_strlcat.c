/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scruz-ra <scruz-ra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 22:23:41 by scruz-ra          #+#    #+#             */
/*   Updated: 2023/09/29 00:30:07 by scruz-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char	*s;
	size_t	c;
	size_t	result;
	size_t	dst_len;
	size_t	src_len;

	c = 0;
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	s = (char *)src;
	if (dstsize > dst_len)
	{
		result = src_len + dst_len;
	}
	else
		result = src_len + dstsize;
	while (src[c] && (dst_len + 1) < dstsize)
	{
		dst[dst_len++] = src[c++];
	}
	dst[dst_len] = '\0';
	return (result);
}
