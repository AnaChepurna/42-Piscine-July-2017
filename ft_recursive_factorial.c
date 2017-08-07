/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achepurn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/29 11:10:36 by achepurn          #+#    #+#             */
/*   Updated: 2017/07/29 11:55:55 by achepurn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int		factorial;

	if (n < 0 || n > 12)
		return (0);
	if (n == 1 || n == 0)
		return (1);
	return = (n * ft_recursive_factorial(n - 1));
}

