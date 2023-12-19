/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-fior <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 15:09:58 by ldi-fior          #+#    #+#             */
/*   Updated: 2023/12/19 10:45:15 by ldi-fior         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <limits.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*dest;
	int	temp;

	i = 0;
	temp = min;
	if (min == -2147483648)
		return (-1);
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	dest = (int *)malloc((sizeof(int) * (max - min)));
	if (dest == NULL)
		return (0);
	while (i < (max - min))
		dest[i++] = temp++;
	*range = dest;
	if (i == 0)
		return (-1);
	return (max - min);
}
