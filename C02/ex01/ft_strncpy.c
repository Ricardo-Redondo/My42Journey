/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsao-pay <rsao-pay@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 14:39:29 by rsao-pay          #+#    #+#             */
/*   Updated: 2025/09/16 19:03:50 by rsao-pay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	n = n / sizeof(char);
	i = 0;
	while(i != n + 1)
	{
		dest[i] = src[i];
		i++;
	}
	return(dest);
}

int main()
{
	char dest[4];
	char *src = "nigga";
	unsigned int n = 4 * sizeof(char);
	ft_strncpy(dest, src, n);
	printf("%s\n", dest);
}
