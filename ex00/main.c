/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javmarti <javmarti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 20:03:16 by javmarti          #+#    #+#             */
/*   Updated: 2022/07/17 21:10:58 by javmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_putstr(char *str);

int		*ft_get_input(char *str, int size);

void	ft_create_square(int square[4][4], int length);
void	print_square(int square[4][4]);

int		solve(int square[4][4], int *input, int size);

int	main(int argc, char *argv[])
{
	int		*input;
	int		square[4][4];

	if (argc != 2)
	{
		ft_putstr("ERROR\n");
		return (0);
	}
	input = ft_get_input(argv[1], 4);
	if (input == 0)
	{
		ft_putstr("ERROR\n");
		return (0);
	}
	ft_create_square(square, 4);
	if (solve(square, input, 4))
		print_square(square);
	else
		ft_putstr("ERROR\n");
	return (0);
}

void	ft_create_square(int square[4][4], int length)
{
	int		index1;
	int		index2;

	index1 = 0;
	while (index1 < length)
	{
		index2 = 0;
		while (index2 < length)
		{
			square[index1][index2] = 0;
			index2++;
		}
		index1++;
	}
	return ;
}
