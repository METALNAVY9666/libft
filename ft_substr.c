/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzaazaa <fzaazaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 17:36:33 by fzaazaa           #+#    #+#             */
/*   Updated: 2024/11/23 15:54:17 by fzaazaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	int		true_len;
	char	*sub;

	i = 0;
	true_len = 0;
	while (s[true_len] && true_len < (int)len)
		true_len++;
	sub = (char *)malloc(sizeof(char) * (true_len + 1));
	if (!sub)
	{
		free(sub);
		return (0);
	}
	while (i < true_len)
	{
		sub[i] = s[i + start];
		i++;
	}
	return (sub);
}

/*#include<stdio.h>

int	main(void)
{
	char	*new;
	
	new = ft_substr("hello", 3, 123);
	printf("%s\n", new);
	free(new);
	return (0);
}*/