/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsao-pay <rsao-pay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 16:03:26 by rsao-pay          #+#    #+#             */
/*   Updated: 2025/09/29 16:16:43 by rsao-pay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int lenght;
	int	*dest;

	i = 0;
	lenght = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	dest = (int *) malloc(sizeof(int) * (lenght + 1));
	if (dest != NULL)
	{
		while (min < max)
		{
			dest[i] = min;
			i++;
			min++;
		}
		*range = dest;
		return (i);
	}
	else
		return (-1);
}