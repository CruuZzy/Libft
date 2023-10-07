/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scruz-ra <scruz-ra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/01 22:26:27 by scruz-ra          #+#    #+#             */
/*   Updated: 2023/10/01 22:50:05 by scruz-ra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;
	t_list	*aux;

	aux = *lst;
	if (!aux)
		return ;
	while (aux)
	{
		temp = aux->next;
		del(aux->content);
		free(aux);
		aux = temp;
	}
	*lst = NULL;
}
