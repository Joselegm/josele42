/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-lui <jose-lui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:37:47 by jose-lui          #+#    #+#             */
/*   Updated: 2023/10/24 13:41:46 by jose-lui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *) s)[i] = (unsigned char) c;
	i ++;
	}
	return (s);
}
/*int main ()
{
	int c = 'f';
	size_t n = 3;
	char s [] = "hello world";
	printf("%s\n", ft_memset(s, c, n));
	printf("%s\n", memset(s, c, n));
			return(0);
}*/
