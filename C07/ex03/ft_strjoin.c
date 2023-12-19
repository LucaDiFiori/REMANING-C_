/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-fior <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 08:59:18 by ldi-fior          #+#    #+#             */
/*   Updated: 2023/12/18 12:23:44 by ldi-fior         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/*Sta cosa conta gli spazi da allocare per i 
 * separatori moltiplicandoli per il numero di stringhe*/
int	count_len_sep(char *arr, int size)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (arr[i])
		i++;
	return (i * size);
}

/*Questa conta la lunghezza di tutte le lettere di tutte le stringhe*/
int	count_all_len(char **arr, int size)
{
	int	i;
	int	j;
	int	count;

	i = 0;
	count = 0;
	while (i < size)
	{
		j = 0;
		while (arr[i][j++])
			count++;
		i++;
	}
	return (count);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*arr;
	int		i;
	int		j;
	int		k;
	int		l;

	i = 0;
	k = 0;
	j = count_len_sep(sep, size);
	arr = (char *)malloc(sizeof(char) * ((count_all_len(strs, size)) + j));
	if (arr == NULL)
		return (0);
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			arr[k++] = strs[i][j++];
		l = 0;
		while (sep[l] && i < size - 1)
			arr[k++] = sep[l++];
		i++;
	}
	arr[k] = '\0';
	return (arr);
}

/*int main()
{
	char *strs[4] = {"ab", "cd", "ef", "gh"}; array di puntatori a stringhe

	char *sep = ", ";array di char
	char *string = ft_strjoin(4, strs, sep);
	
	printf("%s\n", string);
	free (string);
}*/
