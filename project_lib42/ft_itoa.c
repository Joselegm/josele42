/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-lui <jose-lui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 12:19:25 by jose-lui          #+#    #+#             */
/*   Updated: 2023/11/08 16:50:56 by jose-lui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_nri(int n)
{
	int	size;

	size = 0;
	if (n <= 0)
	size++;
	while (n != 0)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		tam;
	int		sig;

	tam = ft_nri(n);
	sig = 1;
	if (n < 0)
		sig = -1;
	str = malloc(tam + 1);
	if (!str)
		return (0);
	str[tam] = '\0';
	while (tam > 0)
	{
		str[tam -1] = (n % 10) * sig + '0';
		n = n / 10;
		tam--;
	}
	if (sig == -1)
		str[0] = '-';
	return (str);
}
