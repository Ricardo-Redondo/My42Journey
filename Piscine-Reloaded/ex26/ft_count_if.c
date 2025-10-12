/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsao-pay <rsao-pay@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 16:56:55 by rsao-pay          #+#    #+#             */
/*   Updated: 2025/10/12 17:04:03 by rsao-pay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	i;
	int	count;

	if (!tab || !f)
        return (0);
	i = 0;
	count = 0;
	while(tab[i])
	{
		if (f(tab[i]) == 1)
			count++;
		i++;
	}
	return (count);
}
