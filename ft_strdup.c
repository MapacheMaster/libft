/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlavalle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 18:58:38 by jlavalle          #+#    #+#             */
/*   Updated: 2022/10/05 18:58:41 by jlavalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	int		len;
	int		cont;

	cont = 0;
	len = ft_strlen(s1);
	str = (char *)malloc(len + 1);
	if (str == NULL)
		return (0);
	while (s1[cont] != '\0')
	{
		str[cont] = s1[cont];
		cont ++;
	}
	str[cont] = '\0';
	return ((char *)str);
}
