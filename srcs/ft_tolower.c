/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzaazaa <fzaazaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 08:42:39 by fzaazaa           #+#    #+#             */
/*   Updated: 2024/11/10 08:48:43 by fzaazaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isupper(int c)
{
	return (c > 64 && c < 91);
}

int	ft_tolower(int c)
{
	if (ft_isupper(c))
		return (c + 32);
	return (c);
}

/*#include<ctype.h>
#include<stdio.h>

int	main(void)
{
	int	i;
	char text[] = "0123456789<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	
	printf("%s\n\n", text);
	i = 0;
	while (text[i])
		printf("%c", ft_tolower(text[i++]));
	printf("\n");
	i = 0;
	while (text[i])
		printf("%c", tolower(text[i++]));
	printf("\n");
	return (0);
}*/