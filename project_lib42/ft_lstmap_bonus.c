/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-lui <jose-lui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 17:36:24 by jose-lui          #+#    #+#             */
/*   Updated: 2023/11/08 17:05:03 by jose-lui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_node;
	t_list	*new_end;

	new_end = NULL;
	if (!f || !lst)
		return (NULL);
	while (lst)
	{	
		new_node = ft_lstnew(lst->content);
		if (!new_node)
		{
			ft_lstclear(&new_end, del);
			return (NULL);
		}
		new_node->content = f(lst->content);
		ft_lstadd_back(&new_end, new_node);
		lst = lst->next;
	}
	return (new_end);
}
