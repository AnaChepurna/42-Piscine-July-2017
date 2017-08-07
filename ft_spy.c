/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achepurn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/04 02:33:50 by achepurn          #+#    #+#             */
/*   Updated: 2017/08/04 02:45:46 by achepurn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

char	*ft_strlowcase(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

void	ft_check(char *word, char *src)
{
	int		i;
	int		j;

	i = 0;
	while (src[i] == ' ' && src[i] == '\t')
		i++;
	j = 0;
	while (word[j])
	{
		if (src[i] != word[j])
			return ;
		j++;
		i++;
	}
	ft_putstr("Alert!!!\n");
}

int		main(int argv, char **argc)
{
	int		i;

	i = 1;
	while (argc[i])
	{
		ft_strlowcase(argc[i]);
		ft_check("president", argc[i]);
		ft_check("powers", argc[i]);
		ft_check("attack", argc[i]);
		i++;
	}
	argv = i;
}
