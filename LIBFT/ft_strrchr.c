/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmunoz-f <lmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 19:16:10 by laura             #+#    #+#             */
/*   Updated: 2022/09/26 13:03:59 by lmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			*s2;
	unsigned char	c1;

	s2 = (char *) s;
	c1 = (unsigned char) c;
	while (*s2 != '\0')
		s2++;
	s2--;
	while (*s2)
	{
		if (*s2 == c1)
			return (s2);
		s2--;
	}
	return (NULL);
}
