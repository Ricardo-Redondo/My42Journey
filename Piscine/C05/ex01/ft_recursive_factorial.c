/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsao-pay <rsao-pay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 18:04:20 by rsao-pay          #+#    #+#             */
/*   Updated: 2025/09/28 16:52:40 by rsao-pay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb == 1 || nb == 0)
		return (1);
	else
		return(nb * ft_recursive_factorial(nb - 1));
}

// #include <stdio.h>
// int main(){
// 	int nb = 5;
// 	printf("%i", ft_recursive_factorial(nb));
// }