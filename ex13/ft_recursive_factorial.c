/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggeordi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 14:52:26 by ggeordi           #+#    #+#             */
/*   Updated: 2019/09/06 15:46:32 by ggeordi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int f;

	f = 1;
	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	else if (nb > 1)
	{
		f = nb * ft_recursive_factorial(nb - 1);
	}
	return (f);
}
