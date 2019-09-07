/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggeordi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 18:54:31 by ggeordi           #+#    #+#             */
/*   Updated: 2019/09/06 19:10:37 by ggeordi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <ft_display_file.h>

int		main(int argc, char **argv)
{
	if (argc == 1)
		write(2, "File name missing.\n", 18);
	else if (argc > 2)
		write(2, "Too many arguments.\n", 19);
	else
		ft_display_file(argv[1]);
	return (1);
}
