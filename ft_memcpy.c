/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlavalle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 19:21:49 by jlavalle          #+#    #+#             */
/*   Updated: 2022/09/21 18:24:30 by jlavalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	const char  *a;
	char		   *b;
	size_t      cont;

	a = src;
	b = dst;
	cont = 0;
	while (cont < n)
	{
		b[cont] = a[cont];
		cont++;
	}
	return (b);
}
/*#include <string.h>

int main () {
   const char src[50] = "http://www.tutorialspoint.com";
   const char src2[50] = "http://www.tutorialspoint.com";
   char dest[50];
   char dest2[50];
   strcpy(dest,"Heloooo!!");
   printf("Before memcpy dest = %s\n", dest);
   memcpy(dest, src, strlen(src)+1);
   printf("After memcpy dest = %s\n", dest);
   strcpy(dest2,"Heloooo!!");
   printf("Before my memcpy dest = %s\n", dest2);
   ft_memcpy(dest2, src2, strlen(src)+1);
   printf("After my memcpy dest = %s\n", dest);
   return(0);
}*/