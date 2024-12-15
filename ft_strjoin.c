/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzaazaa <firas.zaazaa@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 18:05:03 by fzaazaa           #+#    #+#             */
/*   Updated: 2024/12/15 12:23:10 by fzaazaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*new;

	new = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!new)
	{
		free(new);
		return (0);
	}
	i = 0;
	j = 0;
	while (s1[i])
	{
		new[i] = s1[i];
		i++;
	}
	while (s2[j])
		new[i++] = s2[j++];
	new[i] = 0;
	return (new);
}

/*#include<stdio.h>

int	main(int argc, char **argv)
{
	char	*test;

	if (argc != 3)
		return (1);
	test = ft_strjoin(argv[1], argv[2]);
	printf("%s\n", test);
	free(test);
	return (0);
}*/