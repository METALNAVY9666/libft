/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzaazaa <firas.zaazaa@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 05:14:46 by fzaazaa           #+#    #+#             */
/*   Updated: 2024/12/15 12:35:50 by fzaazaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned int		i;
	unsigned char		*p1;
	const unsigned char	*p2;

	if (dest == NULL && src == NULL)
		return (NULL);
	i = 0;
	p1 = (unsigned char *) dest;
	p2 = (unsigned char *) src;
	while (i < n)
	{
		*p1++ = *p2++;
		i++;
	}
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