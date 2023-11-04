/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-lui <jose-lui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 16:57:18 by jose-lui          #+#    #+#             */
/*   Updated: 2023/11/02 17:17:33 by jose-lui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<string.h>
#include "libft.h"

void	*ft_memcpy(void	*dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*t;
	unsigned char	*r;

	i = 0;
	t = (unsigned char *) src;
	r = (unsigned char *) dest;
	if (n <= 0 || dest == src)
		return (dest);
	while (i < n)
	{
		(r[i] = t[i]);
		i++;
	}
	return (r);
}
/*int main ()
{
	char src[] = "zazaza";
	char dest[] = "tutututu";
	size_t n = 4;
	printf("%s\n", ft_memcpy(dest, src, n));
	printf("%s\n", memcpy(dest, src, n));
}*/
