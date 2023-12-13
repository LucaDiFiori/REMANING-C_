/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-fior <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 12:40:10 by ldi-fior          #+#    #+#             */
/*   Updated: 2023/12/13 12:52:44 by ldi-fior         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_prime(int nb)
{
	int	power;

	power = 2;
	if (nb <= 1)
		return (0);
	while (power <= nb / power)
	{
		if (nb % power == 0)
			return (0);
		power++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (ft_is_prime(nb) == 1)
		return (nb);
	while (ft_is_prime(nb) == 0)
		nb++;
	return (nb);
}
