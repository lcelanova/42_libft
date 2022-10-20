/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmunoz-f <lmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 11:23:27 by lmunoz-f          #+#    #+#             */
/*   Updated: 2022/10/20 12:19:00 by lmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ss1;
	const unsigned char	*ss2;
	size_t				i;

	ss1 = (const unsigned char *)s1;
	ss2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (ss1[i] != ss2[i])
			return (ss1[i] - ss2[i]);
		i++;
	}
	return (0);
}

/*

		ft_print_result(ft_memcmp("t\200", "t\0", 2));
		ft_print_result(ft_memcmp("test", "", 4));

The memcmp() function compares byte string s1 against byte string s2. 
 Both strings are assumed to be n bytes long.
The memcmp() function returns zero if the two strings are identical, otherwise
returns the difference between the first two differing bytes (treated as 
unsigned char values, so that ‘\200’ is greater than ‘\0’, for example).  
Zero-length strings are always identical.  This behavior is not required 
by C and  portable code should only depend on the sign of the returned value.
*/