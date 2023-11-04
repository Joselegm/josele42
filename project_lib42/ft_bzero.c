/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 12:18:57 by jose-lui          #+#    #+#             */
/*   Updated: 2023/10/27 13:21:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<strings.h>
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = 0;
		i ++;
	}
}
/*int main()
{
	size_t n;

	n = 3;
	char s[] = "hello world";
	char y[] = "hello world";
	ft_bzero(s, n);
	printf("%c\n",s[6]);
	bzero(y, n);
	printf("%c\n", y[6]);
	return(0);
}*/

