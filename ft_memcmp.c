/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlavalle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 14:48:52 by jlavalle          #+#    #+#             */
/*   Updated: 2022/10/04 14:48:56 by jlavalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	c;
	char	*st1;
	char	*st2;

	st1 = (char *) s1;
	st2 = (char *) s2;
	c = 0;
	while (st1[c] == st2[c] && c <= n)
		c++;
	return (st1[c] - st2[c]);
}

/*#include <string.h>
int main()
{
	const char str1[50] = "Hello World\0 Ert";
	const char str2[50] = "Hello World\0 Erte";
	printf("orig: %d\n", memcmp(str1, str2, 30));
	printf("mine: %d", ft_memcmp(str1, str2, 30));
	return (0);
}*/