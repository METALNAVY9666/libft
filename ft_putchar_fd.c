/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzaazaa <firas.zaazaa@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 13:20:30 by fzaazaa           #+#    #+#             */
/*   Updated: 2024/12/15 12:22:35 by fzaazaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*#include<fcntl.h>

int	main(void)
{
	int	fd;

	fd = open("test.txt", O_WRONLY);
	if (fd == -1)
		return (1);
	ft_putchar_fd('c', fd);
	close(fd);
	return (0);
}*/