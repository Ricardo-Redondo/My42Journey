/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsao-pay <rsao-pay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 16:00:02 by rsao-pay          #+#    #+#             */
/*   Updated: 2025/09/18 12:15:20 by rsao-pay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (tab[i] != size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}
// #include <stdio.h>

// void	ft_rev_int_tab(int *tab, int size);
// int main()
// {
// 	int tab[5]={1, 2, 3, 4, 5};
// 	int size = 5;
// 	ft_rev_int_tab(tab, size);
// 	printf("%d", ft_rev_int_tab);
// 	return (0);
// }
