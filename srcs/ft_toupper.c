/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzaazaa <fzaazaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 08:30:39 by fzaazaa           #+#    #+#             */
/*   Updated: 2024/11/10 08:41:15 by fzaazaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_islower(int c)
{
	return (c > 96 && c < 123);
}

int	ft_toupper(int c)
{
	if (ft_islower(c))
		return (c - 32);
	return (c);
}

/*#include<ctype.h>
#include<stdio.h>

int	main(int argc, char **argv)
{
	int	i;
	
	if (argc != 2)
		return (1);
	i = 0;
	while (argv[1][i])
		printf("%c", ft_toupper(argv[1][i++]));
	printf("\n");
	i = 0;
	while (argv[1][i])
		printf("%c", toupper(argv[1][i++]));
	printf("\n");
	return (0);
}*/