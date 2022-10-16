/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmunoz-f <lmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 19:15:57 by laura             #+#    #+#             */
/*   Updated: 2022/09/29 12:18:04 by lmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char	*dst1;
	size_t	i;
	size_t	dstlen;
	size_t	srclen;

	dst1 = (char *) dst;
	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	i = 0;
	
	if (dstsize < (dstlen + 1))
		return (dstsize + srclen);
	while ((src[i] != '\0') && ((dstlen + 1 + 1) < dstsize))
	{
		dst1[dstlen + i] = src[i];
		i++;
	}
	dst1[dstlen + i] = '\0';
	return (dstlen + srclen);
}
