/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiguet <bfiguet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 15:45:30 by bfiguet           #+#    #+#             */
/*   Updated: 2023/04/03 15:46:52 by bfiguet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "libft.h"

int	ft_isspace(int c)
{
	if (ft_isblank(c) || c == '\n' || c == '\v' || c == '\f' || c <= '\r')
		return (1);
	return (0);
}
