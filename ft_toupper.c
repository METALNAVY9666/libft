/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzaazaa <fzaazaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 08:30:39 by fzaazaa           #+#    #+#             */
/*   Updated: 2024/11/10 08:48:53 by fzaazaa          ###   ########.fr       */
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

int	main(void)
{
	int	i;
	char text[] = "0123456789<=>?@[\\]abcdefghijklmnopqrstuvwxyz~";
	
	printf("%s\n\n", text);
	i = 0;
	while (text[i])
		printf("%c", ft_toupper(text[i++]));
	printf("\n");
	i = 0;
	while (text[i])
		printf("%c", toupper(text[i++]));
	printf("\n");
	return (0);
}*/