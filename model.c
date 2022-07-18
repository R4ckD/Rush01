/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   model.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javmarti <javmarti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 17:07:23 by javmarti          #+#    #+#             */
/*   Updated: 2022/07/17 21:33:09 by javmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		solve(int square[4][4], int *input, int size);
int		is_solution(int square[4][4], int *input, int size);

int		check_value_col(int square[4][4], int col, int n);
int		check_value_row(int square[4][4], int row, int n);
int		doubled_value(int square[4][4], int row, int col, int n);
int		find_zero(int square[4][4], int *row, int *col, int size);

void	print_square(int square[4][4]);

void	ft_putstr(char *str);

int	check_value_col(int square[4][4], int col, int n)
{
	int		row;

	row = 0;
	while (row < 4)
	{
		if (square[row][col] == n)
			return (1);
		row++;
	}
	return (0);
}

int	check_value_row(int square[4][4], int row, int n)
{
	int		col;

	col = 0;
	while (col < 4)
	{
		if (square[row][col] == n)
			return (1);
		col++;
	}
	return (0);
}

int	doubled_value(int square[4][4], int row, int col, int n)
{
	if (check_value_row(square, row, n)
		|| check_value_col(square, col, n))
		return (1);
	return (0);
}

int	find_zero(int square[4][4], int *row, int *col, int size)
{
	*row = 0;
	while (*row < size)
	{
		*col = 0;
		while (*col < size)
		{
			if (square[*row][*col] == 0)
				return (1);
			*col += 1;
		}
		*row += 1;
	}
	*col -= 1;
	*row -= 1;
	return (0);
}

int	solve(int square[4][4], int *input, int size)
{
	int		n;
	int		row;
	int		col;

	if (find_zero(square, &row, &col, size) == 0
		&& is_solution(square, input, size))
		return (1);
	n = 1;
	while (n <= size)
	{
		if (doubled_value(square, row, col, n) == 0)
		{
			square[row][col] = n;
			if (solve(square, input, size))
				return (1);
		}
		n++;
	}
	square[row][col] = 0;
	return (0);
}
