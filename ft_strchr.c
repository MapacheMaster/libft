/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlavalle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 19:38:35 by jlavalle          #+#    #+#             */
/*   Updated: 2022/09/29 19:03:47 by jlavalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s != c && *s != '\0')
		s++;
	if (*s == c)
		return ((char *) s);
	return (NULL);
}
/*#include <string.h>
int main()
{
	const char str[50] ="holamundo";
	printf("mio: %s\n", ft_strchr(str, '\0'));
	printf("ori: %s", strchr(str, '\0'));
	return (0);
}
*/