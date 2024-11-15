/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzaazaa <fzaazaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 02:04:48 by fzaazaa           #+#    #+#             */
/*   Updated: 2024/11/10 02:31:50 by fzaazaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c < 65) || (c > 122))
		return (0);
	if ((c < 97) && (c > 90))
		return (0);
	return (1024);
}

int	ft_isdigit(int c)
{
	if ((c < 48) || (c > 57))
		return (0);
	return (2048);
}

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (8);
	return (0);
}

/*#include<stdio.h>
#include<ctype.h>

int	main(void)
{
	int	i;

	i = -8;
	while (i < 132)
	{
		if (ft_isalnum(i) == isalnum(i))
			printf("%c OK\n", i);
		else
			printf(
				"%c KO : isalnum(%i) -> %i BUT ft_isalnum(%i) -> %i\n",
				i,
				i,
				isalnum(i),
				i,
				ft_isalnum(i)
				);
		i++;
	}
	return (0);
}*/