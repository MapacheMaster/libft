/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlavalle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 06:10:56 by jlavalle          #+#    #+#             */
/*   Updated: 2023/02/15 06:11:01 by jlavalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_len(int n)
{
	int	len;

	len = 0;
	if (n == -2147483648)
		return (11);
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	if (n == 0)
		return (1);
	while (n > 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		len;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = get_len(n);
	res = (char *) ft_calloc(len + 1, sizeof (char));
	if (!res)
		return (NULL);
	len--;
	if (n < 0)
	{
		res[0] = '-';
		n *= -1;
	}
	while (n > 9)
	{
		res[len] = n % 10 + 48;
		n /= 10;
		len--;
	}
	res[len--] = n + 48;
	return (res);
}
