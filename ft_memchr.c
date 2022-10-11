/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlavalle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 19:49:06 by jlavalle          #+#    #+#             */
/*   Updated: 2022/09/30 19:49:10 by jlavalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	cont;
	char	*s1;

	cont = 0;
	s1 = (char *) s;
	while (cont <= n)
	{
		if (*s1 == c)
			return ((char *) s1);
		s1++;
		cont ++;
	}
	return (NULL);
}
