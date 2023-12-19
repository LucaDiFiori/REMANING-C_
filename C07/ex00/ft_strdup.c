/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdump.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldi-fior <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 16:30:38 by ldi-fior          #+#    #+#             */
/*   Updated: 2023/12/18 17:45:46 by ldi-fior         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	str_len(char *src);

char	*ft_strdup(char *src)
{
	char	*dest;
	int		i;

	if (!src)
		return (0);
	i = 0;
	dest = (char *)malloc((sizeof(char) * (str_len(src) + 1)));
	if (dest == NULL)
		return (0);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	str_len(char *src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}
