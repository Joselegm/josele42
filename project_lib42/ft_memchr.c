/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-lui <jose-lui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 14:57:05 by jose-lui          #+#    #+#             */
/*   Updated: 2023/10/24 13:42:53 by jose-lui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<string.h>
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*sp;
	char	r;

	i = 0;
	sp = (char *) s;
	r = (char) c;
	while (i < n)
	{
		if (sp[i] == r)
			return ((void *) &sp[i]);
		i ++;
	}
	return (NULL);
}
/*int main()
{
	int c = 'a';
	const char s[] = "que pasa mundo";
	size_t n = 6;
	printf("%s\n", ft_memchr(s, c, n));
	printf("%s\n", memchr(s, c, n));
	return (0);
}*/
