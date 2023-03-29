/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlavalle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 20:12:30 by jlavalle          #+#    #+#             */
/*   Updated: 2023/03/08 20:12:33 by jlavalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	len;

	if (!s)
		return ;
	len = 0;
	while (len < ft_strlen(s))
	{
		write(fd, &s[len], 1);
		len++;
	}
}
