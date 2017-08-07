/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achepurn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/29 18:08:42 by achepurn          #+#    #+#             */
/*   Updated: 2017/07/29 18:52:17 by achepurn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int i;

	if (nb == 0 || nb == 1)
		return 0;
	i = 2;
	while ( i <= nb / 2)
	{
		if (nb % i++ == 0)
			return 0;
	}
	return 1;
}
