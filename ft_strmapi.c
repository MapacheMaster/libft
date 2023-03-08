/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlavalle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 20:04:59 by jlavalle          #+#    #+#             */
/*   Updated: 2023/03/07 20:05:01 by jlavalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	cont;
	char			*res;	

	if (!s || !f)
		return (NULL);
	cont = 0;
	res = (char *) ft_calloc((ft_strlen(s) + 1), sizeof (char));
	if (!res)
		return (NULL);
	while (s[cont])
	{
		res[cont] = f(cont, s[cont]);
		cont++;
	}
	return (res);
}
