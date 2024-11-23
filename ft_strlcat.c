/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzaazaa <fzaazaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 07:12:41 by fzaazaa           #+#    #+#             */
/*   Updated: 2024/11/23 19:38:55 by fzaazaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t siz)
{
	size_t	i;
	size_t	j;

	if (siz <= ft_strlen(dst))
		return (siz + ft_strlen(src));
	i = ft_strlen(dst);
	j = 0;
	while (!src[j] && i + 1 < siz)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = 0;
	return (ft_strlen(dst) + ft_strlen(&src[j]));
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