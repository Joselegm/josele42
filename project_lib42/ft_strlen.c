/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 19:44:55 by jose-lui          #+#    #+#             */
/*   Updated: 2023/11/06 15:47:33 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<ctype.h>
#include"libft.h"

size_t	ft_strlen(const char *s)
{
	int	c;

	c = 0;
	while (s[c] != '\0')
	{
		c++;
	}
	return (c);
}
/*int main ()
{
	char *s;
	int b;
	s = "cuarenta y dos";
	b = ft_strlen(s);
	printf("%i\n", b);
	printf("%lu\n", ft_strlen("cuarenta y dos"));
	return (0);
}*/
