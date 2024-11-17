/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzaazaa <fzaazaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 11:04:33 by fzaazaa           #+#    #+#             */
/*   Updated: 2024/11/17 12:22:31 by fzaazaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

int	count_digits(int n)
{
	int	tmp;
	int	len;

	tmp = n;
	len = 0;
	if (tmp < 0)
	{
		tmp *= -1;
		len++;
	}
	while (tmp > 1)
	{
		tmp /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		i;
	int		tmp;
	int		min;

	res = (char *)malloc(sizeof(char) * count_digits(n) + 1);
	if (!res)
		return (0);
	i = count_digits(n) - 1;
	if (n == -2147483648)
	{
		printf("Peter, the INT_MIN is here\n");
		res = "-2147483648\0";
		return (res);
	}
	tmp = n;
	min = 0;
	if (n < 0)
	{
		res[0] = '-';
		tmp *= -1;
		min = 1;
	}
	while (i > min - 1)
	{
		res[i--] = tmp % 10 + 48;
		tmp /= 10;
	}
	res[count_digits(n)] = 0;
	return (res);
}


#include<limits.h>

int	main(void)
{
	char	*test;

	test = ft_itoa(-420);
	printf("%s\n", test);
	free(test);

	test = ft_itoa(INT_MIN);
	printf("%s\n", test);
	free(test);

	return (0);
}
