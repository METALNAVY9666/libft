/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzaazaa <firas.zaazaa@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 09:28:30 by fzaazaa           #+#    #+#             */
/*   Updated: 2024/12/15 15:16:38 by fzaazaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		n;
	int		i;
	char	*pos;

	n = ft_strlen(s);
	i = 0;
	pos = 0;
	while (i < n + 1)
	{
		if (s[i] == (unsigned char)c)
			pos = (char *)(&(s[i]));
		i++;
	}
	if (!pos)
		return (NULL);
	return (pos);
}

/*#include<string.h>
#include<stdio.h>

int	main(int argc, char **argv)
{
	if (argc != 3)
		return (1);
	if (ft_strlen(argv[2]) != 1)
		return (1);
	printf("ft_strchr: %s\n", ft_strrchr(argv[1], *(argv[2])));
	printf("strchr: %s\n", strrchr(argv[1], *(argv[2])));
	return (0);
}*/