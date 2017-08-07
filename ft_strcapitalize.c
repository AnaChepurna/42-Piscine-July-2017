/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achepurn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/01 10:04:58 by achepurn          #+#    #+#             */
/*   Updated: 2017/08/01 16:02:05 by achepurn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

void	upcase(char *str, int i)
{
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
}

void	lowcase(char *str, int i)
{
	if (str[i] >= 'A' && str[i] <= 'Z')
		str[i] += 32;
}

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	upcase(str, i);
	while (str[i + 1])
	{
		if ((str[i] >= 32 && str[i] <= 47) || (str[i] >= 58 && str[i] <= 63) || (str[i] >= 91 && str[i] <= 96) || (str[i] >= 123 && str[i] <=127))
			upcase(str, i + 1);
		else
			lowcase(str, i + 1);
		i++;
	}
	return (str);
}

int main(void)
{
	char str[] = "salut, comment tu vas ? 42Mots quaRante-deux; cinquante+et+un";
	printf("%s", ft_strcapitalize(str));
	return (0);
}
