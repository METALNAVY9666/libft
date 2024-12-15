/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzaazaa <firas.zaazaa@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 12:24:56 by fzaazaa           #+#    #+#             */
/*   Updated: 2024/12/15 12:23:29 by fzaazaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*res;
	int		i;

	res = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!res)
		return (0);
	i = 0;
	while (s[i])
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = 0;
	return (res);
}

/*#include<stdio.h>

char	func(unsigned int i, char c)
{
	return ((c + i) % 127 + 1);
}

int	main(int argc, char **argv)
{
	char	*test;

	if (argc != 2)
		return (1);
	test = ft_strmapi(argv[1], func);
	printf("test = \"%s\"\n", test);
	free(test);
	return (0);
}*/