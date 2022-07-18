/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sol.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javmarti <javmarti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 20:02:18 by javmarti          #+#    #+#             */
/*   Updated: 2022/07/17 21:32:35 by javmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	is_solution(int square[4][4], int *input, int size)
{
	int		index;

	index = 0;
	while (index < size * size)
	{
		if (index / size == 0)
			if (check_up_col(square, index % size, input[index], size))
				return (0);
		if (index / size == 1)
			if (check_down_col(square, index % size, input[index], size))
				return (0);
		if (index / size == 2)
			if (check_left_row(square, index % size, input[index], size))
				return (0);
		if (index / size == 3)
			if (check_right_row(square, index % size, input[index], size))
				return (0);
		index++;
	}
	return (1);
}

int	check_down_col(int square[4][4], int column, int value, int size)
{
	int		index;
	int		max_value;
	int		count;

	max_value = 0;
	index = size - 1;
	count = 0;
	while (index >= 0)
	{
		if (square[column][index] > max_value)
		{
			count++;
			max_value = square[column][index];
		}
		index--;
	}
	if (count == value)
		return (0);
	return (1);
}

int	check_up_col(int square[4][4], int column, int value, int size)
{
	int		index;
	int		max_value;
	int		count;

	max_value = 0;
	index = 0;
	count = 0;
	while (index < size)
	{
		if (square[column][index] > max_value)
		{
			count++;
			max_value = square[column][index];
		}
		index++;
	}
	if (count == value)
		return (0);
	return (1);
}

int	check_right_row(int square[4][4], int row, int value, int size)
{
	int		index;
	int		max_value;
	int		count;

	max_value = 0;
	index = size - 1;
	count = 0;
	while (index >= 0)
	{
		if (square[index][row] > max_value)
		{
			count++;
			max_value = square[index][row];
		}
		index--;
	}
	if (count == value)
		return (0);
	return (1);
}

int	check_left_row(int square[4][4], int row, int value, int size)
{
	int		index;
	int		max_value;
	int		count;

	max_value = 0;
	index = 0;
	count = 0;
	while (index < size)
	{
		if (square[index][row] > max_value)
		{
			count++;
			max_value = square[index][row];
		}
		index++;
	}
	if (count == value)
		return (0);
	return (1);
}
