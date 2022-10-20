/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmunoz-f <lmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 14:13:55 by lmunoz-f          #+#    #+#             */
/*   Updated: 2022/10/20 15:39:40 by lmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dst1;
	unsigned char	*src1;
	size_t			i;

	i = 0;
	dst1 = (unsigned char *)dst;
	src1 = (unsigned char *)src;
	while ((src1[i]) && (dst1[i]) && (i < n))
	{
		dst1[i] = src1[i];
		i++;
	}
	return (dst);
}
/*
  The memcpy() function copies n bytes from memory area src to memory area dst.  
  If dst and src overlap, behavior is undefined.
RETURN VALUES
     The memcpy() function returns the original value of dst.
*/