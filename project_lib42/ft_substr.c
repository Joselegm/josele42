/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-lui <jose-lui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 18:02:40 by jose-lui          #+#    #+#             */
/*   Updated: 2023/10/20 18:29:04 by jose-lui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*a;
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	if (!s)
		return (NULL);
	if (start > i)
		return (ft_strdup(""));
	if (len > i - start)
		len = i - start;
	a = (char *)malloc(len +1);
	if (!a)
		return (NULL);
	i = 0;
	while (i < len)
	{
		a[i] = s[start];
		i++;
		start++;
	}
	a[i] = 0;
	return (a);
}
/*int main ()
{
	char t[] = "lorem ipsum";
	printf("%s\n", ft_substr(t, 0, 10));
	return (0);
}*/