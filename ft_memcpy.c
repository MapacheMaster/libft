/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlavalle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 19:21:49 by jlavalle          #+#    #+#             */
/*   Updated: 2022/09/21 18:24:30 by jlavalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const char	*a;
	char		*b;
	size_t		cont;

	if (dst == '\0' && src == '\0')
		return (NULL);
	a = (char *) src;
	b = (char *) dst;
	cont = 0;
	while (cont < n)
	{
		b[cont] = a[cont];
		cont++;
	}
	return (b);
}
