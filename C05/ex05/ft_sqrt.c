/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-fior <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 21:02:04 by ldi-fior          #+#    #+#             */
/*   Updated: 2023/12/13 11:52:11 by ldi-fior         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)
{
	int	power;

	power = 2;
	if (nb <= 0 || nb == 2)
		return (0);
	else if (nb == 1)
		return (1);
	while (power < nb / power)
		power++;
	if (power * power == nb)
		return (power);
	return (0);
}
