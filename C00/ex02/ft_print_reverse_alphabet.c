/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsao-pay <rsao-pay@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 11:32:12 by rsao-pay          #+#    #+#             */
/*   Updated: 2025/09/18 12:24:19 by rsao-pay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	*alphabet;

	alphabet = "zyxwvutsrqponmlkjihgfedcba";
	write (1, alphabet, 26);
}

// int main()
// {
// 	ft_print_reverse_alphabet();
// }
