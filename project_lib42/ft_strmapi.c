/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-lui <jose-lui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 17:12:12 by jose-lui          #+#    #+#             */
/*   Updated: 2023/10/26 16:18:48 by jose-lui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	size;

	if (!s)
		return (0);
	size = ft_strlen(s);
	str = malloc(size + 1);
	if (str == NULL)
		return (NULL);
	str [size] = '\0';
	while (size > 0)
	{
		str[size - 1] = f(size - 1, s[size - 1]);
		size--;
	}
	return (str);
}
