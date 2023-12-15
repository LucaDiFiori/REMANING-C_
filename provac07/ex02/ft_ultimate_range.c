/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-fior <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 15:09:58 by ldi-fior          #+#    #+#             */
/*   Updated: 2023/12/14 18:26:03 by ldi-fior         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h> ////////////////////////
#include <limits.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*dest;
	int	temp;
	
	i = 0;
	temp = min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	dest = (int *)malloc((sizeof(int) * (max - min)));
	if (dest == NULL)
	{
		*range = NULL;
		return (-1);
	}
	*range = dest;
	while (i < (max - min))
	{
		dest[i] = temp;
		temp++;
		i++;
	}
//	*range = dest;
	return (max - min);
}
/* mi da problemi sul min int*/
int main()///////////////////////////////////
{
	int *arr;
	int min = -2147483648;
	int max = 0;
	int range_value;
	int i = 0;

	arr = (int *)malloc(sizeof(int) * (max - min));
	range_value = ft_ultimate_range(&arr, min, max);
	printf("%d\n", range_value);
	printf("%d\n", INT_MIN);
	printf("%d\n", INT_MAX);
			

	while (i < (max -min))
	{
		printf("%d\n", arr[i]);
	i++;
	}
	free (arr);
}

