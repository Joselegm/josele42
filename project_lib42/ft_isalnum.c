/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-lui <jose-lui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 15:55:38 by jose-lui          #+#    #+#             */
/*   Updated: 2023/10/24 13:42:23 by jose-lui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<ctype.h>
#include "libft.h"

int	ft_isalnum(int c)
{
	while ((c >= '0' && c <= '9')
		|| (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}
/*int main()
{
	printf("%d\n", ft_isalnum('5'));
	printf("%d\n", isalnum('5'));
	return (0);
}*/