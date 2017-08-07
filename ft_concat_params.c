/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achepurn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/03 16:05:16 by achepurn          #+#    #+#             */
/*   Updated: 2017/08/03 16:28:06 by achepurn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src);

int		total_size(int argc, char **argv)
{
	int i;
	int j;
	int size;

	i = 1;
	size = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
			j++;
		size += j + 1;
		i++;
	}
	return (size);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		i;
	int		j;
	int		l;

	str = (char*)malloc(sizeof(char) * (total_size(argc, argv)));
	if (str == NULL)
		return (NULL);
	i = 1;
	l = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			str[l++] = argv[i][j];
			j++;
		}
		if (i < argc - 1)
			str[l++] = '\n';
		i++;
	}
	str[l] = '\0';
	return (str);
}
