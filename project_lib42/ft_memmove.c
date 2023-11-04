/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-lui <jose-lui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 15:33:44 by jose-lui          #+#    #+#             */
/*   Updated: 2023/10/26 16:12:33 by jose-lui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<string.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	char			*t;
	char			*r;

	i = 0;
	t = (char *) src;
	r = (char *) dest;
	if (src == 0 && dest == 0)
		return (0);
	if (r > t)
		while (n-- > 0)
			r[n] = t[n];
	else
	{
		while (i < n)
		{
			r[i] = t[i];
			i ++;
		}
	}
	return (dest);
}	
/*int	main()
{
	char src[] = "hello";
	char dest[] = "123456";
	size_t n = 3;
	printf("%s\n", ft_memmove(dest, src, n));
	printf("%s\n", memmove(dest, src, n));
	return (0);
}*/
