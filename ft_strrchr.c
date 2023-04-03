/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlavalle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 18:53:31 by jlavalle          #+#    #+#             */
/*   Updated: 2022/09/29 18:53:34 by jlavalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	cont;

	cont = ft_strlen(s);
	if (s == '\0')
		return (NULL);
	while (s[cont] != (char) c && cont)
		cont--;
	if (s[cont] == (char) c)
		return ((char *) s + cont);
	return (NULL);
}
