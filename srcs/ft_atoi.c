/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzaazaa <fzaazaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 13:46:20 by fzaazaa           #+#    #+#             */
/*   Updated: 2024/11/10 13:49:18 by fzaazaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_sign(char c)
{
	return (c == '-' || c == '+');
}

int	is_number(char c)
{
	return (c <= '9' && c >= '0');
}

int	ft_atoi(const char *str)
{
	int	sign_count;
	int	sign;
	int	res;

	sign_count = 0;
	sign = 1;
	res = 0;
	while (*str == ' ')
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
#include<stdlib.h>

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	printf("ft_atoi(\"%s\") -> %i\n", argv[1], ft_atoi(argv[1]));
	printf("atoi(\"%s\") -> %i\n", argv[1], atoi(argv[1]));
	return (0);
}*/
