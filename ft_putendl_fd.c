/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzaazaa <fzaazaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 14:27:15 by fzaazaa           #+#    #+#             */
/*   Updated: 2024/11/23 14:37:10 by fzaazaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
	write(fd, "\n", 1);
}

/*#include<fcntl.h>
#include<stdio.h>

int	main(void)
{
	int	fd;

	fd = open("test.txt", O_WRONLY);
	if (fd == -1)
		return (1);
	ft_putendl_fd("hello world", fd);
	close(fd);
	return (0);
}*/