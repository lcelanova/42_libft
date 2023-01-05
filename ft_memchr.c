/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmunoz-f <lmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 16:13:28 by lmunoz-f          #+#    #+#             */
/*   Updated: 2022/09/26 16:15:50 by lmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s1;
	unsigned char	c1;
	size_t			i;

	i = 0;
	s1 = (unsigned char *)s;
	c1 = (unsigned char)c;
	while (n--)
	{
		if (s1[i] == c1)
			return ((void *)s1);
		s1++;
	}
	return (0);
}
