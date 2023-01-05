/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmunoz-f <lmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 19:15:55 by laura             #+#    #+#             */
/*   Updated: 2022/11/05 12:33:13 by lmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	c1;
	char			*s2;

	c1 = (unsigned char)c;
	s2 = (char *) s;
	while (*s2 != c1)
	{
		if (*s2 == '\0')
			return (NULL);
		s2++;
	}
	return (s2);
}
