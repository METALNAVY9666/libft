/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzaazaa <fzaazaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 14:35:21 by fzaazaa           #+#    #+#             */
/*   Updated: 2024/11/10 15:24:28 by fzaazaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(const char *s)
{
	int		i;
	char	*new;

	i = 0;
	new = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	while (s[i])
	{
		new[i] = s[i];
		i++;
	}
	new[i] = 0;
	return (new);
}

/*#include<stdio.h>
#include<string.h>

int main(int argc, char **argv)
{
	char    *ft_new;
	char    *new;

	if (argc != 2)
		return (1);
	new = strdup(argv[1]);
	ft_new = ft_strdup(argv[1]);
	printf("strdup(\"%s\") -> \"%s\"\n", argv[1], new);
	printf("ft_strdup(\"%s\") -> \"%s\"\n", argv[1], ft_new);
	free(new);
	free(ft_new);
	return (0);
}*/