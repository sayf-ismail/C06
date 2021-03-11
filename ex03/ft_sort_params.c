/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stun-ism <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 21:14:52 by stun-ism          #+#    #+#             */
/*   Updated: 2021/03/11 21:41:35 by stun-ism         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcompare(char *str1, char *str2)
{
	while (*str1 == *str2 && *str1 != '\0')
	{
		str1++;
		str2++;
	}
	return ((unsigned char)*str1 - (unsigned char)*str2);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_sort_params(int num, char **var)
{
	int		i;
	int 	j;
	char	*tmp;

	i = 0;
	while (i < num)
	{
		j = i + 1;
		while (j < num)
		{
			if (ft_strcompare(var[i], var[j]) > 0)
			{
				tmp = var[i];
				var[i] = var[j];
				var [j] = tmp;
			}
			j++;
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	int i;
	if (argc > 2)
		ft_sort_params(argc, argv);
	i = 0;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		i++;
		ft_putstr("\n");
	}
}
