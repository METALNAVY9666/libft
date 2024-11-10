/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzaazaa <fzaazaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 11:29:10 by fzaazaa           #+#    #+#             */
/*   Updated: 2024/11/10 11:40:44 by fzaazaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// renvoie 0 si faux, 1 si vrai
int	ft_isnumeric(char chr)
{
	if ((chr < '0') || (chr > '9'))
		return (0);
	return (1);
}

int	sign(char *str)
{
	int	i;
	int	count_minus;

	i = 0;
	count_minus = 0;
	while (str[i])
	{
		if (str[i] == '-')
			count_minus++;
		i++;
	}
	if (i % 2)
		return (-1);
	return (1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_atoi(char *str)
{
	int	i;
	int	locked;
	int	res;

	i = 0;
	locked = 0;
	res = 0;
	while (str[i])
	{
		if (ft_isnumeric(str[i]))
		{
			locked = 1;
			res = res * 10 + str[i] - 48;
		}
		else if (locked)
			return (res * sign(str));
		i++;
	}
	return (res * sign(str));
}

#include<stdio.h>
#include<stdlib.h>

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	printf("atoi('%s') -> %i\n", argv[1], atoi(argv[1]));
	printf("ft_atoi('%s') -> %i\n", argv[1], ft_atoi(argv[1]));
	return (0);
}
