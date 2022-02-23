/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiguet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 15:57:47 by bfiguet           #+#    #+#             */
/*   Updated: 2022/01/10 11:55:27 by bfiguet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_countw(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static char	*ft_w(const char *s, char c)
{
	char	*w;
	int		i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	w = malloc(sizeof(char) * (i + 1));
	if (!w)
		return (NULL);
	ft_strlcpy(w, s, i + 1);
	return (w);
}

char	**ft_split(char const *s, char c)
{
	char		**res;
	int			i;
	int			len;

	len = ft_countw(s, c);
	res = malloc(sizeof(char *) * (len + 1));
	if (!s || !res)
		return (NULL);
	i = -1;
	while (++i < len)
	{
		while (s[0] == c)
			s++;
		res[i] = ft_w(s, c);
		if (!res[i])
		{
			while (i > 0)
				free(res[i--]);
			free(res);
			return (NULL);
		}
		s = s + ft_strlen(res[i]);
	}
	res[i] = 0;
	return (res);
}
/*
#include <stdio.h>
 int      main(void)
{
    char test[] = "Hello ecole 42!";
    printf("%s/ %s\n", test, *ft_split(test, 'e'));
    printf("%s/ %s\n", test, *ft_split(test, ' '));
}*/
