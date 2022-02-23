/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiguet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 11:08:04 by bfiguet           #+#    #+#             */
/*   Updated: 2021/12/05 20:48:25 by bfiguet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*dest;
	unsigned char	*source;

	i = 0;
	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	if (dest == source)
		return (dest);
	if (source < dest)
	{
		i = len;
		while (i--)
			dest[i] = source[i];
	}
	else
	{
		i = 0;
		while (i < len)
		{
			dest[i] = source[i];
			i++;
		}
	}
	return (dest);
}
/*#include <stdio.h>
#include <string.h>
int    main()
{
    char dest[50] = "oldstring";
    char src[50] = "newstring";
    printf("Before dest = %s, src = %s\n", dest, src);
    printf("After dest= %s/ %s : %s\n", dest, memmove(dest, src, 10),
	ft_memmove(dest, src, 10));
    return(0);
}*/
