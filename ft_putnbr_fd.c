/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiguet <bfiguet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 13:41:23 by bfiguet           #+#    #+#             */
/*   Updated: 2022/11/28 13:18:44 by bfiguet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putchar_fd ('-', fd);
		ft_putnbr_fd (2, fd);
		ft_putnbr_fd (147483648, fd);
	}
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd (n * (-1), fd);
	}
	else if (n > 9)
	{
		ft_putnbr_fd (n / 10, fd);
		ft_putnbr_fd (n % 10, fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
}
/*
int	main()
{
	ft_putnbr_fd(42, 1);
	ft_putchar('\n');
	ft_putnbr_fd(2147483647, 1);
	ft_putchar('\n');
	ft_putnbr_fd(-2147483648, 1);
	return (0);
}*/
