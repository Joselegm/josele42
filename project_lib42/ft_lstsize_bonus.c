/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-lui <jose-lui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:20:15 by jose-lui          #+#    #+#             */
/*   Updated: 2023/10/30 17:31:37 by jose-lui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
	int 	i;
	t_list	*aux;
	
	i = 1;
	if (!lst)
		return (0);
	aux = lst; 
		
	while (aux->next != NULL)
	{
		aux = aux->next;
		i++;
	}
	return (i);
}