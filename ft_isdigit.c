/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzaazaa <fzaazaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 01:52:26 by fzaazaa           #+#    #+#             */
/*   Updated: 2024/11/10 02:31:21 by fzaazaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if ((c < 48) || (c > 57))
		return (0);
	return (2048);
}

/*#include<ctype.h>
#include<stdio.h>

int main(void)
{
	int i;

	i = -8;
	while (i < 132)
	{
		if (ft_isdigit(i) == isdigit(i))
			printf("%c OK\n", i);
		else
			printf(
				"%c KO : isdigit(%i) -> %i BUT ft_isdigit(%i) -> %i\n",
				i,
				i,
				isdigit(i),
				i,
				ft_isdigit(i)
				);
		i++;
	}
}*/