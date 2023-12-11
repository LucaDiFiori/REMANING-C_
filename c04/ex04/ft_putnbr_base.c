/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-fior <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 09:42:41 by ldi-fior          #+#    #+#             */
/*   Updated: 2023/12/11 17:05:57 by ldi-fior         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		check_sign(char *str);
int		check_double(char *str);
int		check_condition(char *str, int num);
int		str_len(char *str);
void	ft_putnbr_base(int nbr, char *base);

void	ft_putnbr_base(int nbr, char *base)
{
	int	len;

	len = str_len(base);
	if (check_condition(base, len) == 0)
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
		}
		if (nbr >= len)
		{
			ft_putnbr_base((nbr / len), base);
			write(1, &base[nbr % len], 1);
		}
		else
		{
			write(1, &base[nbr % len], 1);
		}
	}
}

int	check_sign(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '+' || str[i] == '-')
		{
			return (1);
		}
		i++;
	}
	return (0);
}

int	check_double(char *str)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		j = i + 1;
		while (str[j] != '\0')
		{
			if (str[i] == str[i + j])
			{
				count++;
			}
			j++;
		}
		if (count > 0)
			return (1);
		i++;
	}
	return (0);
}

int	str_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	check_condition(char *str, int num)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	j = 1;
	count = 0;
	if (num == 0 || num == 1)
		return (1);
	count = count + check_sign(str);
	count = count + check_double(str);
	return (count);
}
