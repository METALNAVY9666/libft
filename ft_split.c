/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzaazaa <fzaazaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/23 15:56:48 by fzaazaa           #+#    #+#             */
/*   Updated: 2024/11/23 18:49:55 by fzaazaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

typedef struct s_data
{
	char	**res;
	int		i;
	int		j;
	int		index;
}	t_data;

int	count_words(char const *s, char c)
{
	int	total;
	int	index;
	int	i;

	total = 0;
	index = -1;
	i = 0;
	while (s[i])
	{
		if (index == -1 && s[i] != c)
			index = i;
		if (s[i] == c && index > -1)
		{
			index = -1;
			total++;
		}
		i++;
	}
	if (index > -1)
		total++;
	return (total);
}

char	*ft_strndup(const char *s, t_data *data)
{
	int		i;
	int		n;
	char	*new;

	i = 0;
	n = data->i - data->index;
	new = (char *)malloc(sizeof(char) * (n + 1));
	while (*s && i < n)
	{
		new[i] = *s;
		i++;
		s++;
	}
	new[i] = 0;
	data->index = -1;
	return (new);
}

char	**ft_free(char **res, int max)
{
	int	i;

	i = 0;
	while (i < max && res[i])
		free(res[i++]);
	free(res);
	return (0);
}

void	define_data(int word_count, t_data *data)
{
	data->res = (char **)malloc(sizeof(char *) * (word_count + 1));
	data->i = 0;
	data->j = 0;
	data->index = -1;
}

char	**ft_split(const char *s, char c)
{
	t_data	data;

	define_data(count_words(s, c), &data);
	if (!(s) || !data.res)
		return (0);
	while (data.i < (int) ft_strlen(s))
	{
		if (data.index == -1 && s[data.i] != c)
			data.index = data.i;
		if ((s[data.i] == c || !s[data.i]) && data.index > -1)
		{
			data.res[data.j] = ft_strndup(&s[data.index], &data);
			if (!data.res[data.j++])
				return (ft_free(data.res, data.j - 1));
		}
		data.i++;
	}
	if (data.index != -1)
	{
		data.res[data.j] = ft_strndup(&s[data.index], &data);
		if (!data.res[data.j++])
			return (ft_free(data.res, data.j - 1));
	}
	data.res[data.j] = 0;
	return (data.res);
}

/*
#include<stdio.h>
int	main(int argc, char **argv)
{
	char	**splits;
	int		i;

	if (argc != 3)
		return (1);
	printf("%i word(s)\n", count_words(argv[1], argv[2][0]));
	splits = ft_split(argv[1], argv[2][0]);
	i = 0;
	while (splits[i])
	{
		printf("\"%s\"\n", splits[i]);
		i++;
	}
	ft_free(splits, count_words(argv[1], argv[2][0]));
	return (0);
}
*/