/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmunoz-f <lmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 17:39:23 by lmunoz-f          #+#    #+#             */
/*   Updated: 2022/10/25 19:10:15 by lmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	size_t	len;
	size_t	setlen;

	len = ft_strlen(s1);
	setlen = ft_strlen(set);
	s2 = (char *) malloc(sizeof(char) * (len + 1));
	if (s1 == 0)
		return (0);
	if (set == 0)
	
		return (ft_strdup(s1));
	if (s2 != 0)
	{
		// 
	}
		return (s2);
	return (0);
}

int main (void)
{
	char s1[] = "..hello..";
	char *strtrim = ft_strtrim(s1, ".");
	printf("%s\n",strtrim);
}
/*

Parámetros s1: La string que debe ser recortada.
set: Los caracteres a eliminar de la string.
Valor devuelto La string recortada.
NULL si falla la reserva de memoria.
Funciones autorizadas
malloc
Descripción Elimina todos los caracteres de la string ’set’
desde el principio y desde el final de ’s1’, hasta
encontrar un caracter no perteneciente a ’set’. La
string resultante se devuelve con una reserva de
malloc(3)

*/