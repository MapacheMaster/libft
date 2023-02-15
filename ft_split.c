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
	int		k;

	k = 0;
	cont = 0;
	while (s[k])
	{
		if (s[k] != c && (s[k + 1] == c || s[k + 1] == '\0'))
			cont++;
		k++;
	}
	return (cont);
}

int	length(const char *s, int k, char c)
{
	int		cont;
	int		start;

	start = k;
	cont = 0;
	while (s[start] != c)
	{
		start++;
		cont++;
	}
	return (cont);
}

char	*cpy(int k, int len, const char *s)
{
	char	*cpy;
	int		cont;

	cont = 0;
	cpy = (char *) ft_calloc(len + 1, sizeof(char));
	if (cpy == 0)
		return (0);
	while (cont < len)
	{
		cpy[cont] = s[k];
		cont++;
		k++;
	}
	return (cpy);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int		k;
	int		len;

	if (!s)
		return (NULL);
	res = (char **) ft_calloc(nb_words(s, c) + 1, sizeof(char *));
	if (!res)
		return (NULL);
	i = 0;
	k = 0;
	while (i < nb_words(s, c))
	{
		if (s[k] != c)
		{
			len = length(s, k, c);
			res[i] = cpy(k, len, s);
			i++;
			k += len;
		}
		k++;
	}
	return (res);
}
