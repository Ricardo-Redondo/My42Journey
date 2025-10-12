/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsao-pay <rsao-pay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 13:07:04 by rsao-pay          #+#    #+#             */
/*   Updated: 2025/09/25 11:45:57 by rsao-pay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	if (n == 0)
	{
		return(0);
	}
	if (s1 && s2)
	{
		while (i < n)
		{
			if(s1[i] != s2[i] || s1[i] == '\0')
			{
				return (s1[i] - s2[i]);
			}
			i++;
		}
	}
	return(0);
}

// #include <stdio.h>
// int main()
// {
// 	char s1[] = "dfuygffa";
// 	char s2[] = "dfuyg";
// 	unsigned int n = 2;
// 	printf("%d", ft_strcmp(s1, s2, n));	
// }
