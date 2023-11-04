/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-lui <jose-lui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:48:14 by jose-lui          #+#    #+#             */
/*   Updated: 2023/10/02 17:20:16 by jose-lui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (*nptr == 32 || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == '-')
		j *= -1;
	if (*nptr == '-' || *nptr == '+')
			nptr++;
	while (*nptr >= '0' && *nptr <= '9')
	{
		i = i * 10 + *nptr - '0';
		nptr++;
	}
	return (i * j);
}
/*int	main(void)
{
	printf("%d\n", ft_atoi("123abc"));
	printf("%d\n", atoi("123abc"));
	return (0);
}*/
