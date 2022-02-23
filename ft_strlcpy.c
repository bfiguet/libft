/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiguet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 11:57:40 by bfiguet           #+#    #+#             */
/*   Updated: 2021/12/02 10:51:19 by bfiguet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = 0;
	while (src[len])
		len++;
	if (!src)
		return (0);
	if (dstsize == 0)
		return (len);
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (len);
}
/*
#include <string.h>
#include <stdio.h>
int	main()
{
	char	dest[50];
	char	dst[50];
	char	*src;
	int	size;

	src = "Ecole 42";
	size = 10;
	printf("%s / %lu : %lu\n", src, strlcpy(dest, src, size),
			ft_strlcpy(dst, src, size));
	printf(".%s.\n", dest);
	printf(".%s.\n", dst);
}*/
