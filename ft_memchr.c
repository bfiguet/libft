/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiguet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 13:50:43 by bfiguet           #+#    #+#             */
/*   Updated: 2021/12/08 13:46:28 by bfiguet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;

	i = 0;
	while (n--)
	{
		if (*(unsigned char *)s == (unsigned char)c)
			return ((unsigned char *)s);
		s++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
int    main()
{
    char    *str;
    int search;
    int size;
    
    str = "Hello toi";
    search = 111;
    size = 5;
    printf("str= %s, search= %d, size= %d\n", str, search, size);
    printf("search= 'o' %s : %s\n", memchr(str, search, size),
	ft_memchr(str, search, size));
    return (0);
}*/
