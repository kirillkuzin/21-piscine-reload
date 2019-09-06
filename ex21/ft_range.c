/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggeordi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 16:07:30 by ggeordi           #+#    #+#             */
/*   Updated: 2019/09/06 16:21:38 by ggeordi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*list;
	int		i;

	i = 0;
	if (max - min <= 0)
		return (NULL);
	list = malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		list[i] = min;
		i++;
		min++;
	}
	return (list);
}
