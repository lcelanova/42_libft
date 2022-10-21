/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmunoz-f <lmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 09:19:31 by lmunoz-f          #+#    #+#             */
/*   Updated: 2022/10/21 12:38:59 by lmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		s1len;
	int		s2len;
	char	*str;

	if (s1 && s2)
	{
		s1len = strlen(s1);
		s2len = strlen(s2);
		str = (char *) malloc(sizeof (char) * (s1len + s2len + 1));
		if (str == 0)
			return (0);
		i = -1;
		while (s1[++i])
			str[i] = s1[i];
		i = -1;
		while (s2[++i])
		{
			str[s1len] = s2[i];
			s1len++;
		}
		str[s1len] = '\0';
		return (str);
	}
	return (0);
}
