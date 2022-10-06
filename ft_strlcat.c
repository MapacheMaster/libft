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
#include <stdio.h>

int	len(char *src)
{
	int	cont;

	cont = 0;
	while (src[cont] != '\0')
		cont++;
	return (cont);
}

size_t	ft_strlcat(char *restrict dst, char *restrict src, size_t dstsize)
{
	int				dst_len;
	int				src_len;
	unsigned long	cont;
	int				index;

	dst_len = len(dst);
	src_len = len(src);
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
