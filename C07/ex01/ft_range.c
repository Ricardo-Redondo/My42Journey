/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsao-pay <rsao-pay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 15:56:50 by rsao-pay          #+#    #+#             */
/*   Updated: 2025/09/29 16:01:25 by rsao-pay         ###   ########.fr       */
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