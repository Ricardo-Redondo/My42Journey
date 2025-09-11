/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsao-pay <rsao-pay@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 11:10:47 by ric               #+#    #+#             */
/*   Updated: 2025/09/11 11:28:19 by rsao-pay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	*alphabet;

	alphabet = "abcdefghijklmnopqrstuvwxyz";
	write (1, alphabet, 26);
}

int main()
{
	ft_print_alphabet();
}
