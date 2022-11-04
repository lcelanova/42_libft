/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmunoz-f <lmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 18:03:06 by lmunoz-f          #+#    #+#             */
/*   Updated: 2022/11/03 15:36:06 by lmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Nombre de función
ft_lstmap
Prototipo t_list *ft_lstmap(t_list *lst, void *(*f)(void *),
void (*del)(void *));
Archivos a entregar
-
Parámetros lst: un puntero a un nodo.
f: la dirección de un puntero a una función usada
en la iteración de cada elemento de la lista.
del: un puntero a función utilizado para eliminar
el contenido de un nodo, si es necesario.
Valor devuelto La nueva lista.
NULL si falla la reserva de memoria.
Funciones autorizadas
malloc, free
Descripción Itera la lista ’lst’ y aplica la función ’f’ al
contenido de cada nodo. Crea una lista resultante
de la aplicación correcta y sucesiva de la función
’f’ sobre cada nodo. La función ’del’ se utiliza
para eliminar el contenido de un nodo, si hace
falta.
*/