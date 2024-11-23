/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzaazaa <fzaazaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 04:54:29 by fzaazaa           #+#    #+#             */
/*   Updated: 2024/11/23 14:20:54 by fzaazaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_bzero(void *s, size_t size)
{
	unsigned int	i;

	i = 0;
	if (size == 0)
		return ;
	while (i++ < size)
		*(char *)(s++) = 0;
}

/*#include<stdio.h>
#include<strings.h>

int	main(int argc, char **argv)
{
	int	i;

	if (argc < 2)
		return (1);
	i = 1;
	while (i < argc)
	{
		printf("%s ->", argv[i]);
		// ft_bzero(argv[i], 5);
		bzero(argv[i], 5);
		printf("%s\n", argv[i++]);
	}
}*/