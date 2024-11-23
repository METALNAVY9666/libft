/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzaazaa <fzaazaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 07:12:41 by fzaazaa           #+#    #+#             */
/*   Updated: 2024/11/23 15:50:15 by fzaazaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t siz)
{
	size_t	i;
	size_t	dest_size;

	i = 0;
	dest_size = ft_strlen(dest);
	while (src[i] && siz - 1 != i)
	{
		dest[dest_size + i] = src[i];
		i++;
	}
	dest[dest_size + i + 1] = 0;
	return (ft_strlen(src));
}

/*#include<stdio.h>
#include<stdlib.h>
#include <bsd/string.h>

int	main(int argc, char **argv)
{
	// compiler avec le flag -lbsd
	char	*ft_dst_str;
	char	*dst_str;
	size_t	ft_res;
	size_t	res;
	
	ft_dst_str = (char *)malloc(sizeof(char) * 1);
	dst_str = (char *)malloc(sizeof(char) * 1);

	if (argc != 2)
		return 1;

	ft_res = ft_strlcat(ft_dst_str, argv[1], 4);
	printf(
		"ft_strlcat('%s') -> %i | ft_dst_str : '%s'\n",
		argv[1],
		ft_res,
		ft_dst_str
		);

	res = strlcat(dst_str, argv[1], 4);
	printf(
		"strlcat('%s') -> %i | dst_str : '%s'\n",
		argv[1],
		res,
		dst_str
		);

	return (0);
}*/