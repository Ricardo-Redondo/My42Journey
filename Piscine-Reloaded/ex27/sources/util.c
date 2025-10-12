/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsao-pay <rsao-pay@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 17:16:09 by rsao-pay          #+#    #+#             */
/*   Updated: 2025/10/12 17:40:51 by rsao-pay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	display_file(int fd)
{
	char buffer[1024];
	int bytes;

	bytes = read(fd, buffer, sizeof(buffer));
	if (bytes < 0)
	{
		write(2, "Cannot read file.\n", 18);
		return;
	}
	while ((bytes = read(fd, buffer, sizeof(buffer))) > 0)
		write(1, buffer, bytes);
}