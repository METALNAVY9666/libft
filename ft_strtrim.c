/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzaazaa <firas.zaazaa@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 18:23:02 by fzaazaa           #+#    #+#             */
/*   Updated: 2024/12/15 12:11:15 by fzaazaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int is_delimiter(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	j;
	int start;
	char *new;

	i = 0;
	j = ft_strlen(s1) - 1;
	while (is_delimiter(s1[i], set))
		i++;
	start = i;
	while (is_delimiter(s1[j], set))
		j--;
	new = (char *)malloc(sizeof(char) * (j - i + 2));
	if (!new)
	{
		free(new);
		return (0);
	}
	while (i <= j)
	{
		new[i - start] = s1[i];
		i++;
	}
	new[i - start] = 0;
	return (new);
}

/*#include<stdio.h>

int	main(int argc, char **argv)
{
	char	*test;

	if (argc != 3)
		return (1);
	test = ft_strtrim(argv[1], argv[2]);
	printf("%s\n", test);
	free(test);
	return (0);
}
*/