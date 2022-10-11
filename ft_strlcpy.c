/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlavalle <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 15:53:04 by jlavalle          #+#    #+#             */
/*   Updated: 2022/09/25 17:18:09 by jlavalle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <string.h>
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	int	cont;
	int	len;

	cont = 0;
	len = 0;
	if (dstsize > 0)
	{
		while (dstsize--)
		{
			dst[cont] = src[cont];
			cont ++;
		}
		dst[cont - 1] = '\0';
	}
	while (src[len] != '\0')
		len++;
	return (len);
}
/*void test(int size)
{
    char string[] = "Hello there, Venus";
    char buffer[19];
    int r;

    r = ft_strlcpy(buffer,string,size);

    printf("Copied '%s' into '%s', length %d\n",
            string,
            buffer,
            r
          );
}
void test2(int size)
{
    char string[] = "Hello there, Venus";
    char buffer[19];
    int r;

    r = strlcpy(buffer,string,size);

    printf("sCopied '%s' into '%s', length %d\n",
            string,
            buffer,
            r
          );
}
int main()
{
    test(19);
    test(10);
    test(1);
    test(0);
	test2(19);
    test2(10);
    test2(1);
    test2(0);

    return(0);
}*/