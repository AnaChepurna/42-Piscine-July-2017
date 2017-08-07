/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achepurn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/29 09:58:50 by achepurn          #+#    #+#             */
/*   Updated: 2017/07/29 10:14:35 by achepurn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_itarative_factorial(int nb)
{
	int		factorial;
	int		i;
	
	if (nb < 0 || nb > 12)
		return (0);
	i = 1;
	factorial = 1;
	while (i <= nb)
	{
		factorial *= i++;
	}
	return (factorial);
}
