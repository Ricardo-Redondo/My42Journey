/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsao-pay <rsao-pay@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 16:53:44 by rsao-pay          #+#    #+#             */
/*   Updated: 2025/10/12 16:55:08 by rsao-pay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	if (!tab || !f || length <= 0)
        return;
	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}
#include <unistd.h>


void	ft_putnbr(int nb)
{
    char	c;
    long	n;

    n = nb;
    if (n < 0)
    {
        write(1, "-", 1);
        n = -n;
    }

    if (n >= 10)
        ft_putnbr(n / 10);

    c = (n % 10) + '0';
    write(1, &c, 1);
}

void	ft_foreach(int *tab, int length, void (*f)(int));

int	main(void)
{
    int tab[5] = {1, 2, 3, 4, 5};

    ft_foreach(tab, 5, &ft_putnbr);
    return 0;
}
