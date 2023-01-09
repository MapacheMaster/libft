/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlavalle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 15:53:04 by jlavalle          #+#    #+#             */
/*   Updated: 2022/09/25 17:18:09 by jlavalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	cont;
	int		len;

	cont = 0;
	len = 0;
	if (dstsize != 0)
	{
		while (src[cont] != '\0' && cont < (dstsize - 1))
		{
			dst[cont] = src[cont];
			cont ++;
		}
		dst[cont] = '\0';
	}
	while (src[len] != '\0')
		len++;
	return (len);
}
