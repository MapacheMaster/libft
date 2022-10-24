/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlavalle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 15:36:35 by jlavalle          #+#    #+#             */
/*   Updated: 2022/10/04 15:36:38 by jlavalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	space(char s)
{
	if (s == '\t' || s == '\n' || s == '\v' || s == '\f' || s == '\r')
		return (1);
	if (s == 32)
		return (1);
	return (0);
}

int	isnotnum(char c)
{
	if (c <= 47 || c >= 58)
		return (0);
	return (1);
}

int	ft_atoi(const char *str)
{
	int	n;
	int	r;
	int	cont;

	cont = 0;
	n = 1;
	r = 0;
	while (space(str[cont]) == 1)
		cont++;
	while (str[cont] != '\0')
	{
		if (str[cont] == 45)
		{	
			if (str[cont + 1] == 45 || space(str[cont + 1]))
				break ;
			n = -1;
		}
		else if (str[cont] >= '0' && str[cont] <= '9')
			r = (r * 10) + (str[cont] + '0');
		else
			return (r * n);
		cont++;
	}
	return (0);
}
int main()
{
	char n = "\t\t\n\r1234lño0";
	printf("%d\n", ft_atoi(n));
	return (0);
}

/*#include <stdlib.h>
int main()
{
	const char str[50] = "\n\t\t-1234helloworld452";
	printf("orig: %d\n", atoi(str));
	printf("mine: %d", ft_atoi(str));
	return (0);
}*/