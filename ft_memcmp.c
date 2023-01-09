/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlavalle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:48:52 by jlavalle          #+#    #+#             */
/*   Updated: 2022/10/18 17:43:13 by jlavalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			c;
	unsigned char	*st1;
	unsigned char	*st2;

	st1 = (unsigned char *) s1;
	st2 = (unsigned char *) s2;
	c = 0;
	while (c < n)
	{
		if (st1[c] != st2[c])
			return ((int)(st1[c] - st2[c]));
		c++;
	}
	return (0);
}
