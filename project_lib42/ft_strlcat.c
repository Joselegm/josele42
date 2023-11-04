/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-lui <jose-lui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 11:35:40 by jose-lui          #+#    #+#             */
/*   Updated: 2023/10/06 18:30:22 by jose-lui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include<unistd.h>
#include<stdio.h>
#include<ctype.h>
#include<string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	d;
	size_t	s;

	j = 0;
	d = 0;
	s = ft_strlen(src);
	while (d < size && dst[d] != '\0')
		d++;
	i = d;
	if (size == 0)
		return (s);
	while (j + i < size - 1 && src[j] != '\0')
	{
		dst[i + j] = src[j];
		j ++;
	}
	if (j + i < size)
		dst[i + j] = '\0';
	return (i + s);
}
/*int main()
{
	char	src[] = "pqrstuwxyz";
	char	dst[] = "abcd";
	char	src2[] = "pqrstuwxyz";
	char	dst2[] = "abcd";
	size_t	size = 0;
	printf("%lu\n", ft_strlcat(dst, src, size));
	printf("%lu\n", strlcat(dst2, src2, size));
	return (0);
}*/
