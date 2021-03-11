/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stun-ism <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 21:06:42 by stun-ism          #+#    #+#             */
/*   Updated: 2021/03/11 21:13:10 by stun-ism         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

int		main(int argc, char **argv)
{
	int index;

	index = argc - 1;
	while (index > 0)
	{
		ft_putstr(argv[index]);
		ft_putstr("\n");
		index--;
	}
	return (0);
}
