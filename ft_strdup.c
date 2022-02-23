/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiguet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 04:52:06 by bfiguet           #+#    #+#             */
/*   Updated: 2021/12/13 16:49:57 by bfiguet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include<stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*dest;
	size_t	len;

	len = ft_strlen(s1) + 1;
	dest = malloc(sizeof(char) * len);
	if (!(dest))
		return (NULL);
	dest = ft_memcpy(dest, s1, len);
	return (dest);
}
/*
#include<string.h>
#include<stdio.h>
int	main()
{
	char *src = "Hello camarade!";
	printf("src= %s / %s : %s\n", src, strdup(src), ft_strdup(src));
	return (0);
}*/
