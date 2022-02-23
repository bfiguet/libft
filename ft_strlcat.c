/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiguet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 12:00:25 by bfiguet           #+#    #+#             */
/*   Updated: 2022/01/10 13:58:41 by bfiguet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t dstsize)
{
	size_t	l_src;
	size_t	l_dst;
	size_t	i;

	i = 0;
	l_src = ft_strlen(src);
	l_dst = ft_strlen(dst);
	if (dstsize < l_dst + 1)
		return (dstsize + l_src);
	if (dstsize > l_dst + 1)
	{
		while (src[i] != '\0' && (l_dst + 1 + i) < dstsize)
		{
			dst[l_dst + i] = src[i];
			i++;
		}
	}
	dst[l_dst + i] = '\0';
	return (l_dst + l_src);
}
/*
#include <string.h>
#include <stdio.h>
int    main()
{
    char    dest[50];
    char    dst[50];
    char    *src;
    int    size;

    src = "Ecole 42";
    size = 10;
    printf("%s / %lu : %lu\n", src, strlcat(dest, src, size),
            ft_strlcat(dst, src, size));
    printf(".%s.\n", dest);
    printf(".%s.\n", dst);
}*/
