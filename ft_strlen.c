/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzaazaa <fzaazaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 02:43:24 by fzaazaa           #+#    #+#             */
/*   Updated: 2024/11/23 14:55:48 by fzaazaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	size;

	size = 0;
	while (str[size])
		size++;
	return (size);
}

/*#include<stdio.h>
#include<string.h>

int	main(int argc, char **argv)
{
	int	i;

	if (argc < 2)
		return (1);
	i = 0;
	while (i < argc)
	{
		if (ft_strlen(argv[i]) == (int) strlen(argv[i]))
			printf("'%s' OK\n", argv[i]);
		else
			printf(
				"'%s' KO : ft_strlen('%s') -> %i BUT strlen('%s') -> %i\n",
				argv[i],
				argv[i],
				ft_strlen(argv[i]),
				argv[i],
				(int) strlen(argv[i]));
		i++;
	}
}*/