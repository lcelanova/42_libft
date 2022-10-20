/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmunoz-f <lmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 13:25:53 by lmunoz-f          #+#    #+#             */
/*   Updated: 2022/10/17 17:09:18 by lmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
	{
	size_t	num;
	size_t	i;
	char	*p;
	char	*p1;

	i = 0;
	num = count * size;
	if ((p = p1 = malloc(num)) != NULL)
	{
		i++;
		*p++ = 0;
	}
	return (p1);
	}
