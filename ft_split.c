/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmunoz-f <lmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 10:45:16 by lmunoz-f          #+#    #+#             */
/*   Updated: 2022/11/06 20:24:40 by lmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countwords(char const *s1, char c)
{
	int		i;
	int		flag;
	size_t	count;

	i = 0;
	flag = 0;
	count = 0;
	while (s1[i])
	{
		while (s1[i] && s1[i] == c)
			i++;
		while ((s1[i] != c) && (s1[i] != '\0'))
		{
			i++;
			flag = 1;
		}
		if (flag == 1)
		{
			count++;
			flag = 0;
		}
	}
	return (count);
}

static char	*ft_word(char const *s, char c)
{
	size_t	i;
	char	*str;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	str = malloc(sizeof(char) * (i + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i] != c && s[i])
	{
		str[i] = s[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}

static void	ft_get_free(char **str, size_t words)
{
	size_t	i;

	i = 0;
	while (i < words)
	{
		free(str[i]);
		i++;
	}
	free(str);
	str = NULL;
}

char	**ft_split(char const *s, char c)
{
	int		i;
	char	**tab;

	if (!s)
		return (NULL);
	i = 0;
	tab = malloc (sizeof(char *) * (ft_countwords(s, c) + 1));
	if (!tab)
		return (NULL);
	while (*s)
	{
		if (*s != c && *s)
		{
			tab[i] = ft_word(s, c);
			if (!tab[i])
				return (ft_get_free(tab, i), NULL);
			i++;
			while (*s != c && *(s + 1))
				s++;
		}
		s++;
	}
	tab[i] = 0;
	return (tab);
}
