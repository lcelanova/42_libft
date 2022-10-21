/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmunoz-f <lmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 09:19:31 by lmunoz-f          #+#    #+#             */
/*   Updated: 2022/10/21 12:35:07 by lmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		len1;
	int		len2;
	char	*str;

	if (s1 && s2)
	{
		len1 = strlen(s1);
		len2 = strlen(s2);
		str = (char *) malloc(sizeof (char) * (len1 + len2 + 1));
		if (str == 0)
			return (0);
		i = 0;
		while (s1[i])
		{
			str[i] = s1[i];
			i++;
		}
		i = 0;
		while (s2[i])
		{
			str[len1] = s2[i];
			len1++;
			i++;
		}
		str[len1] = '\0';
		return (str);
	}
	return (0);
}
