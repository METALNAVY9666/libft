/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzaazaa <firas.zaazaa@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 02:04:48 by fzaazaa           #+#    #+#             */
/*   Updated: 2024/12/15 12:24:02 by fzaazaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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