/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 12:08:51 by marvin            #+#    #+#             */
/*   Updated: 2023/10/09 12:08:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	size_t	i;
	size_t	d;

	if (!s1 || !s2)
		return (NULL);
	p = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (p == NULL)
		return (NULL);
	i = 0;
	d = 0;
	while (s1[i] != '\0')
	{
		p[i] = s1[i];
		i++;
	}
	while (s2[d])
	{
		p[d + i] = s2[d];
		d++;
	}
	p[d + i] = '\0';
	return (p);
}
/*main ()
{
    const char s1[6] = "mundo";
    const char s2[6] = "Hola";
    printf("%s", ft_strjoin(s1, s2));
    //printf("%d", strjoin(s1, s2));
    return(0);
}*/
