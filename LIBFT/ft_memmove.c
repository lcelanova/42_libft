/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmunoz-f <lmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 12:17:54 by lmunoz-f          #+#    #+#             */
/*   Updated: 2022/09/29 12:17:54 by lmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
	 char	*dst1;
	 const char	*src1;
	 size_t	i;

	 i = 0;
	 while ((dst1 != '\0') && (src1 != '\0') && (i < len))
	 {

	 }


	while ()
}

/*
DESCRIPTION top
The memmove() function copies n bytes from memory area src to memory area dest.  
The memory areas may overlap: copying takes place as though the bytes in src are
first copied into a tmporary array that does not overlap src or dest, and the bytes
are then copied from the temporary array to dest.
RETURN VALUE         top
The memmove() function returns a pointer to dest.


*/