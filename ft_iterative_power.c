/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achepurn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/29 13:03:01 by achepurn          #+#    #+#             */
/*   Updated: 2017/07/29 13:22:00 by achepurn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int		res;
	
	if (power < 0)
	{
		return (0);
	}
	res = 1;
	while (power > 1)
	{
		res *= nb;
		power--;
	}
	return (res);
}
