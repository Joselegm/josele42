/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-lui <jose-lui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:42:06 by jose-lui          #+#    #+#             */
/*   Updated: 2023/10/26 16:16:20 by jose-lui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
#include"libft.h"

char	*ft_strdup(const char *s)
{
	char	*p;
	int		i;

	i = 0;
	p = (char *) malloc (ft_strlen(s) + 1);
	if (p == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		p[i] = s[i];
			i++;
	}
	p[i] = '\0';
	return (p);
}
