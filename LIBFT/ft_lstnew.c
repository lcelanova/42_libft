/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmunoz-f <lmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 17:31:06 by lmunoz-f          #+#    #+#             */
/*   Updated: 2022/11/02 12:24:13 by lmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}

/* 
int main (void)
{
	t_list node;

	char *s = "hola";

	node = *ft_lstnew(s);
	printf("%s", (char *)node.content);
}

Nombre de función
ft_lstnew
Prototipo t_list *ft_lstnew(void *content);
Archivos a entregar
-
Parámetros content: el contenido con el que crear el nodo.
Valor devuelto El nuevo nodo
Funciones autorizadas
malloc
Descripción Crea un nuevo nodo utilizando malloc(3). La
variable miembro ’content’ se inicializa con el
contenido del parámetro ’content’. La variable
’next’, con NULL.
*/