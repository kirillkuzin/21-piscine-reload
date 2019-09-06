/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggeordi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 18:50:59 by ggeordi           #+#    #+#             */
/*   Updated: 2019/09/06 19:11:20 by ggeordi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_display_file(char *file_name)
{
	int		fd;
	char	buffer;

	fd = open(file_name, O_RDONLY);
	while (read(fd, &buffer, 1) != 0)
	{
		write(1, &buffer, 1);
	}
	close(fd);
}
