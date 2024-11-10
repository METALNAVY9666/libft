/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isalpha.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzaazaa <fzaazaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 23:19:24 by fzaazaa           #+#    #+#             */
/*   Updated: 2024/11/10 00:38:26 by fzaazaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(char c)
{
	if ((c < 65) || (c > 122))
		return (0);
	if ((c < 97) && (c > 90))
		return (0);
	return (1024);
}

/*#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	i;

	i = 0;
	while (i < 128)
	{
		if (ft_isalpha(i) == isalpha(i))
			printf("%c OK\n", i);
		else
			printf(
				"%c KO : isalpha(%i) -> %i BUT ft_isalpha(%i) -> %i\n",
				i,
				i,
				isalpha(i),
				i,
				ft_isalpha(i)
				);
		i++;
	}
}
*/