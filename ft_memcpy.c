/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzaazaa <fzaazaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 05:14:46 by fzaazaa           #+#    #+#             */
/*   Updated: 2024/11/10 05:48:55 by fzaazaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// voir issue github

void	*ft_memcpy(void *dest, const void *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i++ < n)
		*((char *)dest++) = *((char *)src++);
	return (dest);
}

/*
#include<stdio.h>
#include<stdlib.h>

int	main(int argc, char **argv)
{
	char *text;
	int tab_src[3] = {2, 3, 4};
	int	*tab_dest;
	int	i;
	
	if (argc < 2)
		return (1);

	text = (char *)malloc(sizeof(char) * 64);
	ft_memcpy(text, argv[1], 5);
	printf("%s\n", text);
	free(text);

	i = 0;
	while (i < 3)
		printf("%i, ", tab_src[i++]);
	printf("->");
	i = 0;
	tab_dest = (int *)malloc(sizeof(int) * 3);
	ft_memcpy(tab_dest, tab_src, sizeof(int) * 3);
	while (i < 3)
		printf("%i, ", tab_dest[i++]);
	printf("\n");
	free(tab_dest);

	return (0);
}*/