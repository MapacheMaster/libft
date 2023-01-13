/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlavalle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 21:02:44 by jlavalle          #+#    #+#             */
/*   Updated: 2023/01/12 21:02:47 by jlavalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	nb_words(char const *s, char c)
{
	int		cont;

	cont = 0;
	while (*s)
	{
		if (*s == c)
			cont++;
		s++;
	}
	return (cont);
}

int	length(const char *s, int start, char c)
{
	int		cont;

	cont = 0;
	while (s[start] != '\0')
	{
		if (s[start] == c)
			break ;
		start++;
		cont++;
	}
	return (cont);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		k;
	int		i;
	int		j;

	if (!s || !c)
		return (NULL);
	res = (char **)malloc((nb_words(s, c) + 1) * sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	j = 0;
	k = 0;
	while (i < nb_words(s, c))
	{
		res[i] = (char *)malloc((length(s, i, c) + 1) * sizeof(char));
		while (s[k] != c)
		{
			res[i][j] = s[k];
			j++;
			k++;
		}
		j = 0;
		i++;
	}
	return (res);
}
