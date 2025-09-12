/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsao-pay <rsao-pay@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 00:13:20 by rsao-pay          #+#    #+#             */
/*   Updated: 2025/09/12 10:20:10 by rsao-pay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb2(void)
{
	int a;
	int b;
	int c;
	int d;

	a = '49';
	b = '48';
	c = '48';
	d = '48';

	char a1;
	char b1;
	char c1;
	char d1;

	a1 = a;
	b1 = b;
	c1 = c;
	d1 = d;

	while (d <= '57')
	{
		while (c <= '57')
		{
			while (b <= '57')
			{
				while (a <= '57')
				{
					write(1, &d1, 1);
					write(1, &c1, 1);
					write(1, &b1, 1);
					write(1, &a1, 1);
					a++;
					a1 = a;
				}

				write(1, &d1, 1);
				write(1, &c1, 1);
				write(1, &b1, 1);
				write(1, &a1, 1);
				b++;
				b1 = b;
				a = '48';
				a1 = a;
				
			}

			write(1, &d1, 1);
			write(1, &c1, 1);
			write(1, &b1, 1);
			write(1, &a1, 1);
			d++;
			d1 = d;
			a = '48';
			a1 = a;
			b = '48';
			b1 = b;
		}
		write(1, &d1, 1);
		write(1, &c1, 1);
		write(1, &b1, 1);
		write(1, &a1, 1);
		c++;
		c1 = c;
		a = '48';
		a1 = a;
		b = '48';
		b1 = d;
		d = '48';
		d1 = d;
	}

}

int main()
{
	ft_print_comb2();
}
