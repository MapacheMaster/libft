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
#include <stdio.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	const unsigned char	*a;
	unsigned char		*b;
	int					cont;

	cont = 0;
	a = (unsigned char)src;
	b = dst;
	while (len--)
	{
		b[cont] = a[cont];
		cont++;
	}
}
