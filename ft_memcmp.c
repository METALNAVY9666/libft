/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzaazaa <fzaazaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 10:57:22 by fzaazaa           #+#    #+#             */
/*   Updated: 2024/11/23 14:34:48 by fzaazaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t size)
{
	unsigned int	i;

	i = 0;
	while (i++ < size)
		if (*(unsigned char *)s1++ != *(unsigned char *)s2++)
			return (*(unsigned char *)s1 - *(unsigned char *)s2);
	return (0);
}

/*#include<stdio.h>
#include<string.h>


int	main(int argc, char **argv)
{
	int	total_length;

	if (argc != 3)
		return (1);
	printf("On s'en fiche du nombre de sortie, c'est comme strcmp.\n");
	total_length = strlen(argv[1]);
	printf(
		"ft_memcmp('%s', '%s') -> %i\n",
		argv[1],
		argv[2],
		ft_memcmp(argv[1], argv[2], total_length)
		);
	printf(
		"memcmp('%s', '%s') -> %i\n",
		argv[1],
		argv[2],
		memcmp(argv[1], argv[2], total_length)
		);
	return (0);
}*/