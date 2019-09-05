/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ggeordi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/05 16:48:21 by ggeordi           #+#    #+#             */
/*   Updated: 2019/09/05 17:34:07 by ggeordi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	char	*str1;
	char	*str2;

	str1 = s1;
	str2 = s2;
	while (*str1 == *str2 && *str1 != '\0')
	{
		str1++;
		str2++;
	}
	if (*str1 > *str2)
		return (1);
	else if (*str1 < *str2)
		return (-1);
	else
		return (0);
}

void	sort_params(int argc, char **argv)
{
	char	*arg;
	int		i;
	int		j;

	i = 1;
	while (i < argc)
	{
		j = argc - 1;
		while (j > i)
		{
			if (ft_strcmp(argv[j - 1], argv[j]) == 1)
			{
				arg = argv[j - 1];
				argv[j - 1] = argv[j];
				argv[j] = arg;
			}
			j--;
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	int		i;
	char	*s;

	i = 1;
	sort_params(argc, argv);
	while (i < argc)
	{
		s = argv[i];
		while (*s != '\0')
		{
			ft_putchar(*s);
			s++;
		}
		ft_putchar('\n');
		i++;
	}
	return (1);
}
