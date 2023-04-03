/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlavalle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 20:29:16 by jlavalle          #+#    #+#             */
/*   Updated: 2023/03/08 20:29:18 by jlavalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		cont;
	char	num[11];

	if (n == -2147483648)
	{
		write (fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		n *= -1;
		write (fd, "-", 1);
	}
	if (n == 0)
		write (fd, "0", 1);
	cont = 0;
	while (n > 0)
	{
		num[cont] = n % 10 + '0';
		n /= 10;
		cont++;
	}
	while (cont--)
		write (fd, &num[cont], 1);
}
