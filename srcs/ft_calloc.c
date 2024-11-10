/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzaazaa <fzaazaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 15:00:32 by fzaazaa           #+#    #+#             */
/*   Updated: 2024/11/10 15:24:20 by fzaazaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_bzero(void *s, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size == 0)
		return ;
	while (i++ < size)
		*(char *)(s++) = 0;
}

void	*ft_calloc(unsigned int n_elements, unsigned int data_size)
{
	void	*array;

	if (!n_elements || !data_size)
		return (0);
	array = (void *)malloc(n_elements * data_size);
	if (!array)
	{
		free(array);
		return (0);
	}
	ft_bzero(array, n_elements * data_size);
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