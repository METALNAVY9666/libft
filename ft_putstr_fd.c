/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzaazaa <fzaazaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 14:17:58 by fzaazaa           #+#    #+#             */
/*   Updated: 2024/11/23 14:38:05 by fzaazaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}

/*#include<fcntl.h>

int	main(void)
{
	int	fd;

	fd = open("test.txt", O_WRONLY);
	if (fd == -1)
		return (1);
	ft_putstr_fd("hello world", fd);
	close(fd);
	return (0);
}*/