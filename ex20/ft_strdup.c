/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggeordi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 15:47:26 by ggeordi           #+#    #+#             */
/*   Updated: 2019/09/06 16:05:50 by ggeordi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int		len;
	char	*s;

	len = 0;
	s = str;
	while (*s != '\0')
	{
		s++;
		len++;
	}
	return (len);
}

void	ft_strcpy(char *src, char *cpystr)
{
	int		i;

	i = 0;
	while (src[i] != '\0')
	{
		cpystr[i] = src[i];
		i++;
	}
	cpystr[i] = '\0';
}

char	*ft_strdup(char *src)
{
	char	*cpystr;

	cpystr = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (cpystr != NULL)
	{
		ft_strcpy(src, cpystr);
	}
	return (cpystr);
}
