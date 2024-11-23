/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzaazaa <fzaazaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 02:17:26 by fzaazaa           #+#    #+#             */
/*   Updated: 2024/11/10 02:32:16 by fzaazaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	return (c < 128 && c > -1);
}

/*#include<ctype.h>
#include<stdio.h>

int main(void)
{
	int i;

	i = -8;
	while (i < 132)
	{
		if (ft_isascii(i) == isascii(i))
			printf("%c OK\n", i);
		else
			printf(
				"%c KO : isascii(%i) -> %i BUT ft_isascii(%i) -> %i\n",
				i,
				i,
				isascii(i),
				i,
				ft_isascii(i)
				);
		i++;
	}
}*/