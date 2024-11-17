/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzaazaa <fzaazaa@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 16:48:21 by fzaazaa           #+#    #+#             */
/*   Updated: 2024/11/17 17:02:08 by fzaazaa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include<stdio.h>

typedef struct s_data
{
	int	i;
	int	j;
	int	loc;
	int	word;
}	t_data;

int	is_delimiter(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (c == str[i++])
			return (1);
	}
	return (0);
}

int	count_words(char *str, char *charset)
{
	int	i;
	int	count;
	int	word;

	i = 0;
	count = 0;
	word = 0;
	while (str[i])
	{
		if (is_delimiter(str[i], charset))
			word = 0;
		else
		{
			if (!word)
			{
				count++;
				word = 1;
			}
		}
		i++;
	}
	return (count);
}

char	*ft_strndup(char *str, t_data *data)
{
	int		i;
	int		length;
	int		start;
	int		end;
	char	*res;

	if (!(data->word))
		return (0);
	i = 0;
	length = data->i - data->j + 1;
	start = data->j;
	end = data->i;
	res = (char *) malloc(sizeof(char) * (length + 1));
	if (!res)
		return (0);
	while (start < end)
		res[i++] = str[start++];
	res[i] = 0;
	return (res);
}

int	add_text(char *str, char *charset, char **tab, t_data *data)
{
	if (data->word)
	{
		tab[data->loc] = ft_strndup(str, data);
		if (tab[data->loc] == 0)
			return (0);
		data->word = 0;
		data->loc = data->loc + 1;
		if (data->loc == count_words(str, charset))
			tab[data->loc] = 0;
	}
	return (1);
}

char	**ft_split(char *str, char *charset)
{
	t_data		data;
	char		**tab;

	data.loc = 0;
	data.i = 0;
	data.j = 0;
	data.word = 0;
	tab = (char **) malloc(sizeof(char *) * (count_words(str, charset) + 1));
	while (str[data.i])
	{
		if (is_delimiter(str[data.i], charset))
		{
			if (!add_text(str, charset, tab, &data))
				return (0);
		}
		if (!is_delimiter(str[data.i], charset) && !data.word)
		{
			data.word = 1;
			data.j = data.i;
		}
		data.i++;
	}
	if (!add_text(str, charset, tab, &data))
		return (0);
	return (tab);
}

void	print_str_tab(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		printf("%i : %s\n", i, tab[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc != 3)
		return (0);
	printf("Occurences : %i\n", count_words(argv[1], argv[2]));
	printf("Splits :\n");
	print_str_tab(ft_split(argv[1], argv[2]));
	return (0);
}