/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmunoz-f <lmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 18:03:22 by lmunoz-f          #+#    #+#             */
/*   Updated: 2022/11/03 15:35:43 by lmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Nombre de función
ft_lstiter
Prototipo void ft_lstiter(t_list *lst, void (*f)(void *));
Archivos a entregar
-
Parámetros lst: un puntero al primer nodo.
f: un puntero a la función que utilizará cada nodo.
Valor devuelto Nada
Funciones autorizadas
Ninguna
Descripción Itera la lista ’lst’ y aplica la función ’f’ en el
contenido de cada nodo.
*/