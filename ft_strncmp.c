/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzaazaa <fzaazaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 13:10:39 by fzaazaa           #+#    #+#             */
/*   Updated: 2024/11/23 15:51:14 by fzaazaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_strncmp(char *s1, char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	i = 0;
	while (s2[i] && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
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
