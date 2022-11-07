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

int	count_space(const char *str)
{
	int	cont;

	cont = 0;
	while (space(str[cont]) == 1)
		cont++;
	return (cont);
}

int	count_minus(char c1, char c2)
{
	int	minus;

	minus = 1;
	if (c1 == '-' || c1 == '+')
	{
		if (!ft_isdigit(c2))
			return (0);
		if (c1 == '-')
			minus = -1;
	}
	return (minus);
}

int	ft_atoi(const char *str)
{
	int	res;
	int	cont;
	int	minus;
	int	backup;

	cont = count_space(str);
	minus = count_minus(str[cont], str[cont + 1]);
	res = 0;
	if (str[cont] == '+' || str[cont] == '-')
		cont ++;
	while (ft_isdigit(str[cont]) && (minus != 0))
	{
		backup = res;
		res = (res * 10) + (str[cont] - 48);
		if (backup == 214748364 && str[cont] == '8' && minus == -1)
			return (-2147483648);
		if (res < 0 || backup != (res - (str[cont] - 48)) / 10)
		{
			if (minus == 1)
				return (-1);
			return (0);
		}
		cont++;
	}
	return (res * minus);
}
