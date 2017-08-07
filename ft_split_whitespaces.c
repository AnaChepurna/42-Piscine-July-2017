/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achepurn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/05 20:22:43 by achepurn          #+#    #+#             */
/*   Updated: 2017/08/05 22:11:25 by achepurn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*make_word(int start, int finish, char *str)
{
	char	*word;
	int		i;

	if (finish - start <= 1)
		return (NULL);
	word = (char*)malloc(sizeof(char) * (finish - start));
	i = 0;
	while (start < finish)
		word[i++] = str[start++];
	return (word);
}

int		count_words(char *str)
{
	int		i;
	int		count;
	int		space;

	i = 0;
	count = 0;
	space = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		{
			if (space)
			{
				count++;
				space = 0;
			}
		}
		else
			space = 1;
		i++;
	}
	return (count + 1);
}

char	**ft_split_whitespaces(char *str)
{
	int		start;
	int		i;
	char	**res;
	int		j;
	char	*buff;

	res = (char**)malloc(sizeof(char*) * (count_words(str) + 1));
	i = 0;
	j = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
		i++;
	start = i;
	while (str[i++])
	{
		if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\0')
		{
			buff = make_word(start, i, str);
			if (buff != NULL)
				res[j++] = buff;
			if (str[i] != '\0')
				start = i + 1;
		}
	}
	res[j] = NULL;
	return (res);
}
