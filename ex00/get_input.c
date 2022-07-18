/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_input.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: javmarti <javmarti@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 10:59:21 by javmarti          #+#    #+#             */
/*   Updated: 2022/07/17 21:31:52 by javmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "header.h"

int	validate_input(char *str)
{
	int		index;

	index = 0;
	while (str[index])
	{
		if (str[index] < '1' || str[index] > '4')
			return (1);
		index++;
		if (str[index] == '\0')
			break ;
		if (str[index] != ' ')
			return (1);
		index++;
	}
	if (index != 31)
		return (1);
	return (0);
}

int	*ft_get_input(char *str, int size)
{
	int		*ptr;
	int		index1;
	int		index2;

	if (validate_input(str))
		return (0);
	ptr = malloc(size * size * sizeof(int));
	index1 = 0;
	index2 = 0;
	while (str[index1])
	{
		ptr[index2] = str[index1] - '0';
		index1++;
		if (str[index1] == '\0')
			break ;
		index1++;
		index2++;
	}
	return (ptr);
}
