/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzaazaa <fzaazaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 07:12:41 by fzaazaa           #+#    #+#             */
/*   Updated: 2024/11/10 08:28:39 by fzaazaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	dest_size;

	i = 0;
	dest_size = ft_strlen(dest);
	while (src[i] && nb - 1 != i)
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
	unsigned int	ft_res;
	unsigned int	res;
	
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