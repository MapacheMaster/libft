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
	size_t			dst_len;
	size_t			src_len;
	unsigned long	cont;
	unsigned long	index;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	cont = dst_len;
	index = 0;
	if (dstsize == 0 || dstsize <= dst_len || dst == '\0')
		return (src_len + dstsize);
	while (src[index] != '\0' && (cont) < (dstsize - 1))
	{
		dst[cont] = src[index];
		cont++;
		index++;
	}
	dst[cont] = '\0';
	return (dst_len + src_len);
}
