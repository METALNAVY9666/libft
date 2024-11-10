/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzaazaa <fzaazaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 10:57:22 by fzaazaa           #+#    #+#             */
/*   Updated: 2024/11/10 12:34:41 by fzaazaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<string.h>

int	ft_memcmp(const void *s1, const void *s2, unsigned int n)
{
	unsigned int	i;
	unsigned char	*t1;
	unsigned char	*t2;
	int				diff;

	i = 0;
	t1 = (unsigned char *)s1;
	t2 = (unsigned char *)s2;
	while (i < n)
	{
		diff = *t1 - *t2;
		if (*t1 != *t2)
		{
			printf("%c - %c -> %i\n", *t1, *t2, diff);
			return (diff);
		}
		t1++;
		t2++;
		i++;
	}
	return (0);
}

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
}