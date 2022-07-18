/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javmarti <javmarti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 21:34:08 by javmarti          #+#    #+#             */
/*   Updated: 2022/07/17 21:43:38 by javmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H

int		is_solution(int square[4][4], int *input, int size);
int		check_down_col(int square[4][4], int column, int value, int size);
int		check_up_col(int square[4][4], int column, int value, int size);
int		check_right_row(int square[4][4], int row, int value, int size);
int		check_left_row(int square[4][4], int row, int value, int size);

int		*ft_get_input(char *str, int size);
int		validate_input(char *str);

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_print_square(int square[4][4]);

#endif 
