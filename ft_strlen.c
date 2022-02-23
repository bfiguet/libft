/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiguet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:04:54 by bfiguet           #+#    #+#             */
/*   Updated: 2021/11/30 19:50:27 by bfiguet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
/*#include <stdio.h>
#include <string.h>
#include <unistd.h>
int    main()
{
    const char    *str = "Hello";
    printf("%s %ld : %ld\n", str, strlen(str), ft_strlen(str));
    str = "ecole";
    printf("%s %ld : %ld\n", str, strlen(str), ft_strlen(str));
    str = "42";
    printf("%s %ld : %ld\n", str, strlen(str), ft_strlen(str));
    str = "";
    printf("%s %ld : %ld\n", str, strlen(str), ft_strlen(str));
    return (0);
}*/
