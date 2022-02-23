/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiguet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 04:51:47 by bfiguet           #+#    #+#             */
/*   Updated: 2022/01/10 13:45:45 by bfiguet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_wspace(char c)
{
	if (c == ' ' || c == '\n' || c == '\t'
		|| c == '\v' || c == '\f' || c == '\r')
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	size_t		i;
	long		nbr;
	long		sign;

	i = 0;
	nbr = 0;
	sign = 1;
	while ((str[i] != '\0') && ft_wspace(str[i]) == 1)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while ((str[i] != '\0') && (str[i] >= '0' && str[i] <= '9'))
	{
		nbr = (nbr * 10) + (str[i] - '0');
		if (nbr > 2147483647 && sign == 1)
			return (-1);
		if (nbr > 2147483648 && sign == -1)
			return (0);
		i++;
	}
	return (nbr * sign);
}
/*
#include <stdio.h>
#include <stdlib.h>
int    main()
{
    char *str;

    str = "-99999999999999999999999999";
    printf("%s / %d : %d\n", str, atoi(str), ft_atoi(str));
    str = "99999999999999999999999999";
    printf("%s / %d : %d\n", str, atoi(str), ft_atoi(str));
    str = "  - 42 au 96...";
    printf("%s / %d : %d\n", str, atoi(str), ft_atoi(str));
    str = "  --42 au 96...";
    printf("%s / %d : %d\n", str, atoi(str), ft_atoi(str));
    str = "  -42 au 96...";
    printf("%s / %d : %d\n", str, atoi(str), ft_atoi(str));
    str = "  +42 au 96...";
    printf("%s / %d : %d\n", str, atoi(str), ft_atoi(str));
    str = "  ++42 au 96...";
    printf("%s / %d : %d\n", str, atoi(str), ft_atoi(str));
}*/
