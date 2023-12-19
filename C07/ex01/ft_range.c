/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-fior <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 17:58:01 by ldi-fior          #+#    #+#             */
/*   Updated: 2023/12/18 16:28:53 by ldi-fior         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h> 

int	check_value(int min, int max)
{
	if (min >= max || (min == 0 && max == 0))
		return (1);
	return (0);
}

int	*ft_range(int min, int max)
{
	int	i;
	int	range;
	int	*dest;
	int	temp;

	if (check_value(min, max))
		return (0);
	i = 0;
	range = max - min;
	temp = min;
	dest = (int *)malloc((sizeof(int) * range));
	if (dest == NULL)
		return (0);
	while (i < range)
	{
		dest[i] = temp;
		temp++;
		i++;
	}
	return (dest);
}
