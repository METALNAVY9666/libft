/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzaazaa <firas.zaazaa@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 13:46:20 by fzaazaa           #+#    #+#             */
/*   Updated: 2024/12/15 12:28:13 by fzaazaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_sign(char c)
{
	return (c == '-' || c == '+');
}

int	is_number(char c)
{
	return (c <= '9' && c >= '0');
}

int	is_blank(char c)
{
	int	i;

	i = 0;
	while (i < 6)
		if (c == " \t\n\v\f\r"[i++])
			return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	sign_count;
	int	sign;
	int	res;

	sign_count = 0;
	sign = 1;
	res = 0;
	while (is_blank(*str))
		str++;
	while (is_sign(*str))
	{
		if (*str++ == '-')
			sign = -1;
		sign_count++;
	}
	if (sign_count > 1)
		return (0);
	while (is_number(*str))
		res = res * 10 + *str++ - 48;
	return (res * sign);
}

/*#include<stdio.h>

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	printf("ft_atoi(\"%s\") -> %i\n", argv[1], ft_atoi(argv[1]));
	printf("atoi(\"%s\") -> %i\n", argv[1], atoi(argv[1]));
	return (0);
}*/
