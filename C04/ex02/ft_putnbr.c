/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-fior <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 16:44:25 by ldi-fior          #+#    #+#             */
/*   Updated: 2023/12/12 10:25:55 by ldi-fior         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_convert(int nbr)
{
	int	print;

	print = nbr + 48;
	write(1, &print, 1);
}

int	check_min(int nb)
{
	if (nb <= -2147483648)
	{
		write(1, "-", 1);
		write(1, "2", 1);
		return (nb = 147483648);
	}
	else
		return (nb);
}

int	check_neg(int nb)
{
	if (nb < 0)
	{
		write(1, "-", 1);
		return (nb = nb * -1);
	}
	else
		return (nb);
}

void	ft_putnbr(int nb)
{
	int	temp;
	int	posiz;

	posiz = 1;
	nb = check_min(nb);
	nb = check_neg(nb);
	temp = nb;
	while (temp >= 10)
	{
		posiz = posiz * 10;
		temp = temp / 10;
	}
	temp = nb;
	while (posiz != 1)
	{
		temp = nb / posiz;
		ft_print_convert(temp);
		nb = nb - (temp * posiz);
		posiz = posiz / 10;
	}
	if (nb < 10)
		ft_print_convert(nb);
}
