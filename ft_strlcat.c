/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzaazaa <firas.zaazaa@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 07:12:41 by fzaazaa           #+#    #+#             */
/*   Updated: 2024/12/15 11:25:34 by fzaazaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t siz)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = 0;
	src_len = 0;
	while (dst[dst_len] != '\0' && dst_len < siz)
		dst_len++;
	while (src[src_len] != '\0')
		src_len++;
	if (dst_len == siz)
		return (siz + src_len);
	i = 0;
	while (src[i] != '\0' && (dst_len + i) < (siz - 1))
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	if (dst_len + i < siz)
		dst[dst_len + i] = '\0';
	return (dst_len + src_len);
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