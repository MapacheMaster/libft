/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlavalle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 21:04:04 by jlavalle          #+#    #+#             */
/*   Updated: 2023/01/09 21:04:07 by jlavalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	get_start(char const *s1, char const *set)
{
	size_t	cont;
	size_t	cont2;
	int		n;

	n = 0;
	cont = 0;
	cont2 = 0;
	while (s1[cont] != '\0')
	{
		while (s1[cont] != set[cont2])
		{
			if (cont2 == (size_t) ft_strlen(set))
			{
				n = 1;
				break ;
			}
			cont2++;
		}
		if (n == 1)
			break ;
		cont2 = 0;
		cont++;
	}
	return (cont);
}

size_t	get_end(char const *s1, char const *set)
{
	size_t	cont;
	size_t	cont2;
	size_t	n;

	cont = ft_strlen(s1);
	cont2 = 0;
	n = 0;
	while (cont)
	{
		while (s1[cont] != set[cont2])
		{
			if (cont2 == (size_t) ft_strlen(set))
			{
				n = 1;
				break ;
			}
			cont2++;
		}
		if (n != 0)
			break ;
		cont2 = 0;
		cont--;
	}
	return (cont + 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t	start;
	size_t	end;
	size_t	cont;

	if (!s1)
		return (NULL);
	if (!set)
		return ((char *) s1);
	trim = 0;
	start = get_start(s1, set);
	end = get_end(s1, set);
	cont = 0;
	trim = (char *) malloc((end - start + 1) * sizeof(char));
	if (trim == NULL)
		return (NULL);
	while (start < end)
	{
		trim[cont] = s1[start];
		cont++;
		start++;
	}
	trim[cont] = '\0';
	return (trim);
}
