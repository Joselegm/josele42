/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-lui <jose-lui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 16:56:52 by jose-lui          #+#    #+#             */
/*   Updated: 2023/10/24 13:43:47 by jose-lui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[i] == 0)
		return ((char *) haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (i + j < len && haystack[i + j] == needle[j])
		{
			if (needle[j + 1] == '\0')
				return ((char *) &haystack[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}
/*int main()
{
	char needle[] ="ipsum";
	char haystack[] = "lorem ipsum dolor sit amet";
	char haystack2[] = "lorem ipsum dolor sit amet";
	size_t len = 30;
	printf("%s\n", ft_strnstr(haystack, needle, len));
	printf("%s\n", strnstr(haystack2, needle, len));
	return(0);
}*/
