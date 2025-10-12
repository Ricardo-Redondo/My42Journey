/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsao-pay <rsao-pay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 14:14:36 by rsao-pay          #+#    #+#             */
/*   Updated: 2025/09/25 12:10:51 by rsao-pay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int v;

	i = 0;
	v = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while(src[v] != '\0' && v < nb)
	{
		dest[i] = src[v];
		i++;
		v++;
	}
	dest[i] = '\0';
	return(dest);
}

// #include <stdio.h>
// int main()
// {
// 	char src[] = "bye";
// 	char dest[] = "hello";
// 	unsigned int nb = 6;
// 	printf("%s", ft_strncat(dest, src));
// }