/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-lui <jose-lui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 18:21:07 by jose-lui          #+#    #+#             */
/*   Updated: 2023/11/02 17:45:00 by jose-lui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		r;
	char	*p;

	i = 0;
	r = ft_strlen(s1) - 1;
	if (!s1 || !set)
		return (NULL);
	while (s1[i] != '\0' && ft_strchr(set, s1[i]))
		i++;
	while (r >= 0 && ft_strchr(set, s1[r]))
			r--;
	if ((r - i + 2) <= 0)
	{
		p = (char *)malloc(sizeof(char) * (1));
		p[0] = '\0';
		return p;
	}
	p = (char *)malloc(sizeof(char) * (r - i + 2));
	if (p == NULL)
		return (NULL);
	ft_strlcpy (p, (char *)&s1[i], r - i + 2);
	return (p);
}


// int main()
// {
// 	char *s1 = "  \t \t \n   \n\n\n\t";
//     char *s2 = "";
//     char *ret = ft_strtrim(s1, " \n\t");

// 	printf("ret: %s\n", ret);
// }