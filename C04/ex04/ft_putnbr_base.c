/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   versione2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-fior <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 11:29:48 by ldi-fior          #+#    #+#             */
/*   Updated: 2023/12/12 12:44:59 by ldi-fior         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	check_double(char *str)
{
	int	i;
	int	j;
	int	flag;

	i = 0;
	flag = 0;
	while (str[i])
	{
		j = 0;
		while (str[j])
		{
			if (str[i] == str[j])
				flag++;
			j++;
		}
		if (flag > 1)
			return (1);
		flag = 0;
		i++;
	}
	return (0);
}

int	check_condition(char *str)
{
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	if (str_len(str) < 2)
		flag = 1;
	while (i < str_len(str))
	{
		if (str[i] == '+' || str[i] == '-')
			flag = 1;
		i++;
	}
	if (check_double(str) == 1)
		flag = 1;
	return (flag);
}

void	conv(int nbr, char *base)
{
	int	len;

	len = str_len(base);
	if (nbr == -2147483648)
	{
		conv (-(nbr / len), base);
		write (1, &base[-(nbr % len)], 1);
	}
	else if (nbr >= len)
	{
		conv((nbr / len), base);
		write (1, &base[nbr % len], 1);
	}
	else
		write(1, &base[nbr], 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	flag;

	flag = check_double(base) + check_condition(base);
	if (flag == 0)
	{
		if (nbr < 0)
		{
			nbr = nbr * (-1);
			write (1, "-", 1);
		}
		conv(nbr, base);
	}
}
