/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-lui <jose-lui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 16:39:01 by jose-lui          #+#    #+#             */
/*   Updated: 2023/10/31 16:31:47 by jose-lui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<string.h>
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && s1[i] && s2[i])
	{
		if (s1 [i] != s2[i])
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);
		i ++;
	}
	if (i < n)
		return ((unsigned char) s1[i] - (unsigned char) s2[i]);
	return (0);
}
/*int main ()
{
	char s1[] = "test\200";
	char s2[] = "test\0";
	printf("%d\n", ft_strncmp(s1, s2, 6));
	printf("%d\n", strncmp(s1, s2, 6));
	return(0);
}*/