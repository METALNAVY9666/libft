/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzaazaa <fzaazaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 13:51:24 by fzaazaa           #+#    #+#             */
/*   Updated: 2024/11/10 14:26:55 by fzaazaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strnstr(const char *big, const char *little, unsigned int len)
{
	unsigned int	i;
	int				j;
	int				t;
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
			if (!little[j + 1])
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