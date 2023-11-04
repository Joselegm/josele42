/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-lui <jose-lui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 18:35:31 by jose-lui          #+#    #+#             */
/*   Updated: 2023/10/06 18:47:49 by jose-lui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
#include"libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	p = (void *) malloc (count * size);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, (count * size));
	return (p);
}
