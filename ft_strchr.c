/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzaazaa <firas.zaazaa@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 09:16:22 by fzaazaa           #+#    #+#             */
/*   Updated: 2024/12/15 15:12:05 by fzaazaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	n;
	int	i;

	n = ft_strlen(s);
	i = 0;
	while (i < n + 1)
	{
		if (s[i] == (char)c)
			return ((char *)(&(s[i])));
		i++;
	}
	return (NULL);
}

/*#include<string.h>
#include<stdio.h>

int	main(int argc, char **argv)
{
	if (argc != 3)
		return (1);
	if (ft_strlen(argv[2]) != 1)
		return (1);
	printf("ft_strchr: %s\n", ft_strchr(argv[1], *(argv[2])));
	printf("strchr: %s\n", strchr(argv[1], *(argv[2])));
	return (0);
}*/