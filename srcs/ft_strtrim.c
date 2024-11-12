/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzaazaa <fzaazaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 18:23:02 by fzaazaa           #+#    #+#             */
/*   Updated: 2024/11/12 18:51:31 by fzaazaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_count(char const *str, char c)
{
	int	total;

	total = 0;
	while (*str)
	{
		if (*str == c)
			total++;
		str++;
	}
	return (total);
}

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	char	*new;

	i = 0;
	j = 0;
	while (s1[i])
		if (ft_count(set, s1[i++]) > 0)
			j++;
	new = (char *)malloc(sizeof(char) * (ft_strlen(s1) - j + 1));
	if (!new)
	{
		free(new);
		return (0);
	}
	i = 0;
	j = 0;
	while (s1[i])
	{
		if (!ft_count(set, s1[i]))
			new[j++] = s1[i];
		i++;
	}
	new[j] = 0;
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