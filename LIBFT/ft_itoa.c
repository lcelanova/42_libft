/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmunoz-f <lmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:04:39 by lmunoz-f          #+#    #+#             */
/*   Updated: 2022/10/27 14:31:46 by lmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_digits(int n)
{
	size_t	digits;
	
	digits = 0;
	if (n < 0 || n == 0)
		digits++;
	while (n =! 0)
	{
		n /= 10;
		digits++;
	}
	return (digits);
}

char *ft_itoa(int n)
{
	char	*num;
	size_t	len;

	len = count_digits(n);
	num = malloc(sizeof(char) * len);

	return (num);
}



/*
Nombre de función
ft_itoa
Prototipo char *ft_itoa(int n);
Archivos a entregar
-
Parámetros n: el entero a convertir.
Valor devuelto La string que represente el número.
NULL si falla la reserva de memoria.
Funciones autorizadas
malloc
Descripción Utilizando malloc(3), genera una string que
represente el valor entero recibido como argumento.
Los números negativos tienen que gestionarse.



Vamos desde atras hasta adelante
	Lo primero es saber cuantos numeros tenemos para saber el numero de caracteress
	formula = 
			number = 
*/