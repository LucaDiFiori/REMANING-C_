/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-fior <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 16:44:25 by ldi-fior          #+#    #+#             */
/*   Updated: 2023/12/10 17:38:54 by ldi-fior         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	int		i_rem;
	char	c_rem;

	if (nb >= 0 && nb <= 9)
	{
		while (rem != 0)
		{
			rem = nb % 10;
			c_rem = rem - 48;
			write(1, &c_rem, 1);
		}
	}
	return (0);
}
