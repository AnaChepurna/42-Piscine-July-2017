/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achepurn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/02 17:40:28 by achepurn          #+#    #+#             */
/*   Updated: 2017/08/02 21:35:09 by achepurn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_swap(char **a, char **b)
{
	char *helper;

	helper = *a;
	*a = *b;
	*b = helper;
}

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] && s2[i])
		i++;
	if (s1[i] > s2[i])
		return (1);
	else if (s1[i] < s2[i])
		return (-1);
	else
		return (0);
}

int		main(int argc, char **argv)
{
	int		i;
	int		j;

	j = 1;
	while (argv[j + 1])
	{
		if (ft_strcmp(argv[j], argv[j + 1]) > 0)
		{
			ft_swap(&argv[j], &argv[j + 1]);
			j--;
		}
		else
			j++;
	}
	j = 1;
	while (j < argc)
	{
		i = 0;
		while (argv[j][i])
		{
			ft_putchar(argv[j][i++]);
		}
		ft_putchar('\n');
		j++;
	}
}
