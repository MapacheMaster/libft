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
#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	while (*s != '\0')
		s++;
	while (*s != c && *s >= 0)
		s--;
	if (*s == c)
		return ((char *) s);
	return (NULL);
}
