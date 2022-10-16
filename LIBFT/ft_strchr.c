/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmunoz-f <lmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 19:15:55 by laura             #+#    #+#             */
/*   Updated: 2022/09/29 12:00:13 by lmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	c1;
	char			*s2;

	c1 = (unsigned char)c;
	s2 = (char *) s;

	while ((*s2 != '\0') && (c1 != '\0'))
	{
		if (*s2 == c1)
			return (s2);
		s2++;
	}
	return (0);
}
