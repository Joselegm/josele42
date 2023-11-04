/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-lui <jose-lui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 17:40:44 by jose-lui          #+#    #+#             */
/*   Updated: 2023/10/24 13:43:54 by jose-lui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i])
		i ++;
	while (i >= 0)
	{
		if (str[i] == (char) c)
			return ((char *)(str + i));
		i --;
	}
	return (NULL);
}
/*int main ()
{
	int c;
	c = 'i'; 
	printf("%s\n", ft_strrchr("hello", c));
	printf("%s\n", strrchr("hello", c));
	return(0);
}*/
