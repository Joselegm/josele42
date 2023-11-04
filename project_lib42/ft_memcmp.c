/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-lui <jose-lui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 14:13:08 by jose-lui          #+#    #+#             */
/*   Updated: 2023/10/24 13:42:58 by jose-lui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<string.h>
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*t;
	unsigned char	*r;

	i = 0;
	t = (unsigned char *) s1;
	r = (unsigned char *) s2;
	while (i < n)
	{
		if (t[i] != r[i])
			return (t[i] - r[i]);
		i ++;
	}
	return (0);
}
/*int main()
{
	size_t n = 3;
	const char s1[] = "hello world";
	const char s2[] = "hfffo world";
	printf("%d\n", ft_memcmp(s1, s2, n));
	printf("%d\n", memcmp(s1, s2, n));
	return(0);
}*/
