/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsao-pay <rsao-pay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 14:01:34 by rsao-pay          #+#    #+#             */
/*   Updated: 2025/09/25 11:34:45 by rsao-pay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int v;

	i = 0;
	v = 0;
	if (src && dest)
	{
		while (dest[i] != '\0')
		{
			i++;
		}
		while(src[v] != '\0')
		{
			dest[i] = src[v];
			i++;
			v++;
		}
		dest[i] = '\0';
		return(dest);
	}
	return(0);
}

// #include <stdio.h>
// int main()
// {
// 	char src[] = "bye";
// 	char dest[] = "hello";
// 	printf("%s", ft_strcat(dest, src));
// }