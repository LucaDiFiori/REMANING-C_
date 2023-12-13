/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-fior <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 09:00:07 by ldi-fior          #+#    #+#             */
/*   Updated: 2023/12/13 12:28:08 by ldi-fior         ###   ########.fr       */
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
