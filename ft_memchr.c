/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzaazaa <firas.zaazaa@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 10:11:00 by fzaazaa           #+#    #+#             */
/*   Updated: 2024/12/15 13:02:40 by fzaazaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)(s)) == (unsigned char)c)
			return ((void *)(s));
		i++;
		s++;
	}
	return (0);
}

/*
tester avec des tableaux d'entiers ? comment faire ?

#include<string.h>
#include<stdlib.h>
#include<stdio.h>

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	char	*str;
	char	*ft_str;
	if (argc != 3)
		return (1);

	str = (char *)memchr(argv[1], *argv[2], ft_strlen(argv[1]));
	ft_str = (char *)ft_memchr(argv[1], *argv[2], ft_strlen(argv[1]));
	printf("memcher('%s') -> '%s'\n", argv[1], str);
	printf("ft_memcher('%s') -> '%s'\n", argv[1], ft_str);
	return (1);
}*/