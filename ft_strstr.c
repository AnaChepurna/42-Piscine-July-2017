/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achepurn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/31 16:02:37 by achepurn          #+#    #+#             */
/*   Updated: 2017/07/31 20:37:24 by achepurn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;
	//char		*p;

	i = 0;
	while (str[i])
	{	
		j = 0;
		if (str[i+j] == to_find[j])
		{
			while (to_find[j])
			{
				if (str[i+j] != to_find[j])	
					break;
				j++;
			}
		}
		if (j == ft_strlen(to_find))
		{
			//p = &str[i];
			return (&str[i]);
		}
		i++;
	}
	return (NULL);
}

int main(void)
{
	char str[] = "Hello Allo";
	char f[] = "ll";
	printf("%s", ft_strstr(str, f));
	return (0);
}
