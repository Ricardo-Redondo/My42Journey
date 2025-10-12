/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsao-pay <rsao-pay@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 15:57:12 by rsao-pay          #+#    #+#             */
/*   Updated: 2025/10/12 17:44:55 by rsao-pay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	lenght;
	int	*dest;

	i = 0;
	lenght = max - min;
	if (min >= max)
		return (NULL);
	dest = (int *)malloc(sizeof(int) * (lenght + 1));
	if (dest == NULL)
		return (NULL);
	while (min < max)
	{
		dest[i] = min;
		i++;
		min++;
	}
	return (dest);
}
