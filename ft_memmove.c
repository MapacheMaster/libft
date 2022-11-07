/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlavalle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 19:59:33 by jlavalle          #+#    #+#             */
/*   Updated: 2022/09/25 15:51:49 by jlavalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*a;
	unsigned char	*b;

	if (dst == '\0' && src == '\0')
		return (NULL);
	a = (unsigned char *) src;
	b = (unsigned char *) dst;
	if (dst > src)
	{
		while (len--)
			b[len] = a[len];
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
