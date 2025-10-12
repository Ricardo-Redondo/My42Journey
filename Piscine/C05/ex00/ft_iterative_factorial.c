/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsao-pay <rsao-pay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 17:57:49 by rsao-pay          #+#    #+#             */
/*   Updated: 2025/09/28 16:52:30 by rsao-pay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb;
	if (nb < 0)
		return (0);
	else if (nb == 1 || nb == 0)
		return (1);
	else
	{
		while (i > 1)
		{
			nb = nb * (i - 1);
			i--;
		}
		return (nb);
	}
}

// #include <stdio.h>
// int main(){
// 	int nb = 5;
// 	printf("%i", ft_iterative_factorial(nb));
// }