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

	cont = 0;
	if (s == '\0')
		return (NULL);
	while (*s != '\0')
	{
		cont++;
		s++;
	}
	while (*s != c && cont >= 0)
	{
		s--;
		cont--;
	}
	if (*s == c)
		return ((char *) s);
	return (NULL);
}
/*#include <string.h>
int main()
{
	char *src = "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
	char *d1 = strrchr(((void *)0), '\0');
	char *d2 = ft_strrchr(((void *)0), '\0');
	printf("orig: %s\n", d1);
	printf("mine: %s\n", d2);
	return (0);
}*/
