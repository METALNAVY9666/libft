/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzaazaa <fzaazaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 11:04:33 by fzaazaa           #+#    #+#             */
/*   Updated: 2024/11/17 15:29:41 by fzaazaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

int	count_digits(int n)
{
	int	tmp;
	int	len;

	if (n == -2147483648)
		return (11);
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

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		i;
	int		min;

	res = (char *)malloc(sizeof(char) * count_digits(n) + 1);
	if (!res)
		return (0);
	if (n == -2147483648)
		return (ft_strcpy(res, "-2147483648"));
	res[count_digits(n)] = 0;
	i = count_digits(n) - 1;
	min = 0;
	if (n < 0)
	{
		res[0] = '-';
		n *= -1;
		min = 1;
	}
	while (i > min - 1)
	{
		res[i--] = n % 10 + 48;
		n /= 10;
	}
	return (res);
}

/*#include<limits.h>

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
}*/