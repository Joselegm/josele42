/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-lui <jose-lui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:20:15 by jose-lui          #+#    #+#             */
/*   Updated: 2023/11/08 17:07:19 by jose-lui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		i;
	t_list	*aux;

	i = 1;
	aux = lst;
	if (!lst)
		return (0);
	while (aux->next != NULL)
	{
		aux = aux->next;
		i++;
	}
	return (i);
}
