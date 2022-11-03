/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlavalle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 18:24:06 by jlavalle          #+#    #+#             */
/*   Updated: 2022/10/05 18:24:08 by jlavalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*r;

	if (count * size < size || count * size < count)
		return (NULL);
	r = malloc(count * size);
	if (r == NULL)
		return (0);
	ft_bzero(r, count * size);
	return (r);
}
