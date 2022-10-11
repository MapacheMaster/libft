/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlavalle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 17:40:37 by jlavalle          #+#    #+#             */
/*   Updated: 2022/09/26 18:58:57 by jlavalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t dstsize)
{
	int				dst_len;
	int				src_len;
	unsigned long	cont;
	int				index;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	cont = dst_len;
	index = 0;
	while (src[index] != '\0')
	{
		dst[cont] = src[index];
		cont++;
		index++;
		if (cont == dstsize - 1)
			break ;
	}
	dst[cont + 1] = '\0';
	return (dst_len + src_len);
}
