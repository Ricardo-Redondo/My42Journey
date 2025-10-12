/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsao-pay <rsao-pay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/25 13:47:31 by rsao-pay          #+#    #+#             */
/*   Updated: 2025/09/27 17:23:48 by rsao-pay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	spaces(char *a, int i, int *count)
{
	while (a[i] == ' ' || (a[i] >= 9 && a[i] <= 13)
		|| (a[i] == 43 || a[i] == 45))
	{
		if (a[i] == 45)
		{
			*count *= -1;
		}
		i++;
	}
	return (i);
}

int	ft_atoi(char *str)
{
	int	i;
	int	count;
	int	num;

	i = 0;
	count = 1;
	num = 0;
	i = spaces(str, i, &count);
	if (str[0] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		while (str[i] >= '0' && str[i] <= '9')
		{
			num = (num * 10) + (str[i] - '0');
			i++;
		}
		num *= count;
		return (num);
	}
	else
		return (0);
}

// #include <stdio.h>
// int main(){
// 	// char str[] = "     ---+--+1234ab567237568dfhg";
// 	// char str[] = "     ---+--+";
// 	char str[] = "     ";
// 	// char str[] = "     ---+--+he1234ab567237568dfhg";
// 	printf("%d\n", ft_atoi(str));
// }