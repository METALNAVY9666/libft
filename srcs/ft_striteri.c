/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzaazaa <fzaazaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 12:47:49 by fzaazaa           #+#    #+#             */
/*   Updated: 2024/11/17 13:15:09 by fzaazaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &(s[i]));
		i++;
	}
}

/*#include<stdio.h>

void    func(unsigned int i, char *s)
{
	s[i] = (s[i] + 1) % 127 + 1;
}

int main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	ft_striteri(argv[1], func);
	printf("%s\n", argv[1]);
	return (0);
}*/