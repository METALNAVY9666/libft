/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzaazaa <fzaazaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 02:55:35 by fzaazaa           #+#    #+#             */
/*   Updated: 2024/11/23 14:36:27 by fzaazaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memset(void *s, int c, size_t size)
{
	unsigned int	i;

	i = 0;
	if (size == 0)
		return (s);
	while (i++ < size)
		*((char *)s++) = (char)c;
	return (s);
}

/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

    int array [] = {54, 85, 20, 63, 21};
    unsigned int size = sizeof(int) * 5;
    unsigned int i;

	i = 0;
    while (i < 5)
        printf("%d ", array[i++]);
    printf("\n");

    // memset(array, 2, size);
	ft_memset(array, 0, size);

	i = 0;
    while (i < 5)
        printf("%d ", array[i++]);
    printf( "\n" );
    
    return (0);
}*/