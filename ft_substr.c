/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzaazaa <firas.zaazaa@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 17:36:33 by fzaazaa           #+#    #+#             */
/*   Updated: 2024/12/15 15:23:15 by fzaazaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	true_len;
	char	*sub;

	i = 0;
	true_len = 0;
	if (!s || start >= ft_strlen(s))
		return (ft_strdup(""));
	while (s[start + true_len] && true_len < len)
		true_len++;
	sub = (char *)malloc(sizeof(char) * (true_len + 1));
	if (!sub)
		return (0);
	while (i < true_len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
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