/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsao-pay <rsao-pay@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/12 17:16:09 by rsao-pay          #+#    #+#             */
/*   Updated: 2025/10/12 17:52:03 by rsao-pay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	display_file(int fd)
{
	char	buffer[1024];
	size_t	bytes;

	bytes = read(fd, buffer, sizeof(buffer));
	while (bytes > 0)
	{
		write(1, buffer, bytes);
		bytes = read(fd, buffer, sizeof(buffer));
	}
}
