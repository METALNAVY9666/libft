/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzaazaa <firas.zaazaa@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 02:55:35 by fzaazaa           #+#    #+#             */
/*   Updated: 2024/12/15 12:22:39 by fzaazaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n-- > 0)
		*(ptr++) = (unsigned char)c;
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