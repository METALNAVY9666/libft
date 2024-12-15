/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzaazaa <firas.zaazaa@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 13:51:24 by fzaazaa           #+#    #+#             */
/*   Updated: 2024/12/15 11:48:16 by fzaazaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t			i;
	size_t			j;
	size_t			t;
	char			*haybale;

	i = 0;
	haybale = (char *)big;
	if (!ft_strlen(little))
		return (haybale);
	while (haybale[i] && i < len)
	{
		j = 0;
		t = i;
		while (haybale[t] == little[j])
		{
			if (!little[j + 1] && t < len)
				return (&(haybale[i]));
			t++;
			j++;
		}
		i++;
	}
	return (0);
}

/*#include<stdio.h>
#include<bsd/string.h>

int	main(int argc, char **argv)
{
	if (argc != 3)
		return (1);
	printf(
		"ft_strnstr(\"%s\", \"%s\", %i) -> \"%s\"\n",
		argv[1],
		argv[2],
		ft_strlen(argv[2]),
		ft_strnstr(argv[1], argv[2], ft_strlen(argv[1]))
		);
	printf(
		"strnstr(\"%s\", \"%s\", %i) -> \"%s\"\n",
		argv[1],
		argv[2],
		ft_strlen(argv[2]),
		strnstr(argv[1], argv[2], ft_strlen(argv[1]))
		);
	return (0);
}*/