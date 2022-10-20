/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memove.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmunoz-f <lmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 12:17:54 by lmunoz-f          #+#    #+#             */
/*   Updated: 2022/10/20 15:36:11 by lmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*dst1;
	char	*src1;

	i = len;
	if (dst1 > src1)
	{
		while (i > 0)
		{
			dst1[len] = src1[len];
			len--;
		}
	}
	i = 0;
	if (dst1 < src1)
	{
		while (i < len)
		{
			dst1[i] = src1[i];
			i++;
		}
	}
	return (dst);
}

/*
DESCRIPTION top
The memmove() function copies n bytes from memory
area src to memory area dest.  
The memory areas may overlap: copying takes place 
as though the bytes in src are first copied into a 
tmporary array that does not overlap src or dest, 
and the bytes are then copied from the temporary 
array to dest.
RETURN VALUE
The memmove() function returns a pointer to dest.
*/