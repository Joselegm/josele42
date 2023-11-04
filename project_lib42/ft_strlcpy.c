/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-lui <jose-lui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 14:00:01 by jose-lui          #+#    #+#             */
/*   Updated: 2023/10/24 13:43:30 by jose-lui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	char	*d;
	char	*s;
	size_t	j;

	i = 0;
	j = 0;
	d = (char *) dst;
	s = (char *) src;
	while (src[j] != '\0')
		j++;
	if (size > 0)
	{	
		while ((i < size -1) && src[i] != '\0')
		{
			d[i] = s[i];
			i ++;
		}
		d[i] = '\0';
	}
	return (j);
}
/*int main ()
{
	char src[] = "hola";
	char dst[] = "torpedo";
	size_t size = 0;
	printf("%zu\n", ft_strlcpy(dst, src, size));
	printf("%lu\n", strlcpy(dst, src, size));
	printf("%s\n", dst);
	return (0);
}*/
