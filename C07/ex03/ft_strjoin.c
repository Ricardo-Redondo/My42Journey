/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsao-pay <rsao-pay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 11:31:03 by rsao-pay          #+#    #+#             */
/*   Updated: 2025/09/30 11:58:19 by rsao-pay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
char *str_together_size(int size, char **strs, char *sep)
{
	int		i;
	int		sum;
	char	dest;
	if (size <= 0)
		sum = 1;
	else
	{
		while (i < size)
		{
			sum += ft_strlen(strs[i]);
			i++;
		}
		if (i != size)
			sum += ft_strlen(sep);
	}
	dest = (char *) malloc(sizeof(char) * sum);
	if (dest == NULL)
		return (NULL);
	else
		return (dest);
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		v;
	char	dest;

	dest = str_together_size(size, strs, sep);
}