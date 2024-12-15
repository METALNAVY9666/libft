/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzaazaa <firas.zaazaa@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 15:00:32 by fzaazaa           #+#    #+#             */
/*   Updated: 2024/12/15 12:42:51 by fzaazaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*array;

	if (!nmemb || !size)
		return (malloc(0));
	array = (void *)malloc(nmemb * size);
	if (!array)
	{
		free(array);
		return (NULL);
	}
	ft_bzero(array, nmemb * size);
	return (array);
}

/*#include<stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	int		size;
	char	*ft_str;
	char	*str;	

	if (argc != 2)
		return (1);
	size = ft_strlen(argv[1]) + 1;
	ft_str = ft_calloc(size, sizeof(char));
	str = calloc(size, sizeof(char));
	printf("ft_str -> \"%s\"\n", ft_str);
	printf("str -> \"%s\"\n", str);
	ft_strcpy(ft_str, argv[1]);
	ft_strcpy(str, argv[1]);
	printf("ft_str -> \"%s\"\n", ft_str);
	printf("str -> \"%s\"\n", str);
	free(ft_str);
	free(str);
	return (0);
}*/