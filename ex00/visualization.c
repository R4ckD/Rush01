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
{ //Mientras *str no sea igual a \0 (es el valor que se almacena al final de un puntero)
	while (*str != '\0')
	{
		write(1, str, 1);
		//Escribe el primer valor almacenado en str
		str++;
		//Avanza al siguiente valor almacenado y lo escribe.
		//Asi hasta llegar al final del puntero
	}
	return ;
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_square(int square[4][4])
{
	//Declara index1 tipo int coressponde al nº de fila = posicion de la linea
	int		index1;//posicion vertical
	//Declara index2 tipo int corresponde al nª de columna = posicion del caracter en linea
	int		index2;//posicion horizontal

	//Inicializa index1 con valor 0 
	index1 = 0;
	//Mintras que index 1 sea < que 4 
	while (index1 < 4)
	{//mientras estes en la primera linea, linea 0, 1, 2 o 3
		index2 = 0;//estas en el primer caracter
		while (index2 < 4)
		{//mientras estes en el caracter 0, 1, 2, o 3 
			ft_putchar(square[index2][index1] + '0');
			//castea el valor de los int a char para que write los pueda escribir al sumar su valor a '0'
			if (index2 < 3)/*mientras la posicion del caracter no sea la ultima
			va a excribir un espacio despues de cada 0*/
				ft_putchar(' ');
			index2++;
			//avanza una posicion el caracter
		}
		ft_putchar('\n');
		//imprime un salto de linea 
		index1++;
		//aumenta en 1 el valor de index 1 por lo que pasa a la siguiente linea
	}
	return ;
}
