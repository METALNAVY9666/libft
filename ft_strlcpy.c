/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzaazaa <fzaazaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 05:52:05 by fzaazaa           #+#    #+#             */
/*   Updated: 2024/11/23 15:45:06 by fzaazaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_size;

	src_size = ft_strlen((char *) src);
	if (size == 0)
		return (src_size);
	i = 0;
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (src_size);
}

/*#include<stdio.h>
#include<stdlib.h>
#include <bsd/string.h>
// compiler avec le flag -lbsd
int	main(int argc, const char **argv)
{
	char	*ft_dest;
	int		ft_size;
	char	*dest;
	int		size;

	if (argc != 2)
		return (1);
	ft_dest = (char *)malloc(sizeof(char) * 5);
	ft_size = ft_strlcpy(ft_dest, argv[1], 3);
	printf("ft_strlcpy('%s') -> '%s' | src len : %i\n", argv[1], ft_dest, ft_size);
	free(ft_dest);

	dest = (char *)malloc(sizeof(char) * 5);
	size = strlcpy(dest, argv[1], 3);
	printf("strlcpy('%s') -> '%s' | src len : %i\n", argv[1], dest, size);
	free(dest);
	return (0);
}*/