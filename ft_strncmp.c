/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzaazaa <firas.zaazaa@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 13:10:39 by fzaazaa           #+#    #+#             */
/*   Updated: 2024/12/15 11:40:55 by fzaazaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (s1[i] || s2[i]))
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
/*#include<stdio.h>
#include<string.h>
int	main(int argc, char **argv)
{
	if (argc != 3)
		return (1);
	printf("ft_strncmp -> %i\n", ft_strncmp(argv[1], argv[2], 3));
	printf("strncmp -> %i\n", strncmp(argv[1], argv[2], 3));
	return (0);
}*/
