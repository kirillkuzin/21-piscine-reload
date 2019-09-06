/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggeordi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/06 18:29:58 by ggeordi           #+#    #+#             */
/*   Updated: 2019/09/06 18:34:54 by ggeordi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int		i;
	int		nb;

	i = 0;
	nb = 0;
	while (tab[i][0] != '0')
	{
		if (f(tab[i]) == 1)
		{
			nb++;
		}
		i++;
	}
	return (nb);
}