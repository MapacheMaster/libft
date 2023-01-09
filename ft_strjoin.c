/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlavalle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 20:16:14 by jlavalle          #+#    #+#             */
/*   Updated: 2023/01/09 20:16:16 by jlavalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*res;
	size_t	cont;

	len = ft_strlen(s1) + ft_strlen(s2);
	res = malloc(len + 1);
	if (res == NULL)
		return (0);
	cont = 0;
	while (cont < len)
	{
		if (cont < (size_t) ft_strlen(s1))
			res[cont] = s1[cont];
		else
			res[cont] = s2[cont - ft_strlen(s1)];
		cont++;
	}
	res[cont] = '\0';
	return (res);
}
