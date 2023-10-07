/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scruz-ra <scruz-ra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 22:21:00 by scruz-ra          #+#    #+#             */
/*   Updated: 2023/10/01 23:05:15 by scruz-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*auxt;

	auxt = *(lst);
	if ((*lst))
	{
		while (auxt->next != NULL)
		{
			auxt = auxt->next;
		}
		auxt->next = new;
	}
	if (!*(lst))
	{
		*(lst) = new;
	}
}
