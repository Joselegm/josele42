/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 18:22:13 by jose-lui          #+#    #+#             */
/*   Updated: 2023/11/06 20:31:22 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_nbr_words(const char *s, char a)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i] != '\0')
	{
		if (s[i] == a)
			i++;
		if (s[i] == '\0')
			return (words);
		if ((s[i] != a && s[i + 1] == a) ||s[i + 1] == '\0')
			words++;
		i++;
	}
	return (words);
}

static char *strdup_cpy(const char *str, size_t c)
{
	char *p;
	size_t i;
	
	i = 0;
	p = (char *)malloc(sizeof(char) * (c + 1));
	if (p == NULL)
		return (NULL);
	while (i < c)
	{
		p[i] = str[i];
			i++;
	}
	p[i] = '\0';
	return (p);
}

static void	ft_free_mem(char **aux)
{
	int	i;

	i = 0;
	while (aux[i])
	{
		free (aux[i]);
		i++;
	}
	free (aux);
}

char	**ft_split(const char *s, char c)
{
	int		from;
	int		to;
	char	**p;
	int		cw;

	from = 0;
	to = 0;
	if (!s || *s == '\0')
		return (NULL);
	p = (char **)malloc(sizeof(char *) * (get_nbr_words(s, c) + 1));
	if (p == NULL)
		return (NULL);
	cw = 0;
	while (s[to])
	{
		while (s[to] != '\0' && s[to] == c)
				to++;
		from = to;
		while (s[to] != '\0' && s[to] != c)
				to++;
		//printf("from: %i, to: %i\n", from, to);
		p[cw] = strdup_cpy(&s[from], to - from);
		if (p[cw++] == NULL)
			return (ft_free_mem(p), NULL);
		if (s[to] == '\0')
			return (p);
		to++;
	}
	p[cw] = NULL;
	return (p);
}

 /*int main ()
 {
 	const char *d = "/   /   split    /   this/ for   me  !    /   / ";
 	char a = '/';
 	printf("%i\n", get_nbr_words(d, a));
 	return(0);
 }*/

int	main() 
{
     char	*texto = "      lorem   //  //   ";
     char	delimitador = ' ';

 	printf("%i\n", get_nbr_words(texto, delimitador));
 // 	return(0);
// // }

    char	**token = ft_split(texto, delimitador);
 	int		i;

 	//printf("len: %zu\n", ft_strlen(texto));

 	i = 0;
 	if (token)
 	{
		while (token[i])
 		{
 			printf ("array[%i]: %s\n", i, token[i]);
 			i++;
 		}
 	}
 	return (0);
 }
