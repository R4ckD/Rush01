/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   visualization.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javmarti <javmarti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 20:01:51 by javmarti          #+#    #+#             */
/*   Updated: 2022/07/17 21:43:43 by javmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "header.h"

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
	return ;
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_square(int square[4][4])
{
	int		index1;
	int		index2;

	index1 = 0;
	while (index1 < 4)
	{
		index2 = 0;
		while (index2 < 4)
		{
			ft_putchar(square[index2][index1] + '0');
			if (index2 < 3)
				ft_putchar(' ');
			index2++;
		}
		ft_putchar('\n');
		index1++;
	}
	return ;
}
