/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzaazaa <fzaazaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 19:34:31 by fzaazaa           #+#    #+#             */
/*   Updated: 2024/11/12 19:53:54 by fzaazaa          ###   ########.fr       */
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

int	count_words(const char *str, char c)
{
	int	i;
	int	count;
	int	lst;

	i = 0;
	count = 0;
	lst = 0;
	while (str[i])
	{
		if ((lst && str[i] != c) || !i)
		{
			lst = 0;
			count++;
		}
		else
		{
			if (!lst && str[i] == c)
				lst = 1;
		}
		i++;
	}
	return (count);
}
/*
int	*get_positions(const char *str, char c)
{
	int	last;
	int	pos;
	int	*positions;

	last = 0;
	while (*str)
	{
		if (*str == c && !last)

	}
}

int	*get_lengths(const char *str, char c);
*/

#include<stdio.h>

int	main(int argc, char **argv)
{
	if (argc != 3)
		return (1);
	printf("Word count : %i\n", count_words(argv[1], argv[2][0]));
	return (0);
}