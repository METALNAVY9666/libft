/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzaazaa <fzaazaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 02:38:51 by fzaazaa           #+#    #+#             */
/*   Updated: 2024/11/10 02:42:49 by fzaazaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	return ((c > 31 && c < 127) * 16384);
}

/*#include<ctype.h>
#include<stdio.h>

int main(void)
{
	int i;

	i = -8;
	while (i < 132)
	{
		if (ft_isprint(i) == isprint(i))
			printf("%c OK\n", i);
		else
			printf(
				"%c KO : isprint(%i) -> %i BUT ft_isprint(%i) -> %i\n",
				i,
				i,
				isprint(i),
				i,
				ft_isprint(i)
				);
		i++;
	}
}*/