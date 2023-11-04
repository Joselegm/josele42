/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-lui <jose-lui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 19:33:50 by jose-lui          #+#    #+#             */
/*   Updated: 2023/10/24 13:42:45 by jose-lui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<ctype.h>
#include "libft.h"

int	ft_isprint(int c)
{
	while (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*int main ()
{
	printf("%d\n", ft_isprint(30));
	printf("%d\n", isprint(30));
	return(0);
}*/
