/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlavalle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:05:15 by jlavalle          #+#    #+#             */
/*   Updated: 2022/11/07 18:05:18 by jlavalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	cont;
	char	*sub;

	if (!s || start < 0)
		return (NULL);
	if (start > (unsigned int) ft_strlen(s) || len < 0)
		return (ft_strdup(""));
	if (start + len > (unsigned long) ft_strlen(s))
		len = ft_strlen(s) - start;
	sub = (char *) ft_calloc((len + 1), sizeof (char));
	if (!sub)
		return (NULL);
	cont = 0;
	while (cont < len && s[start])
	{
		sub[cont] = s[start];
		start++;
		cont++;
	}
	return (sub);
}
