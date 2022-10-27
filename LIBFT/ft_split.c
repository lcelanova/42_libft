/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmunoz-f <lmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 10:45:16 by lmunoz-f          #+#    #+#             */
/*   Updated: 2022/10/26 11:00:59 by lmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	countwords(const char *s1, char c)
{
	size_t	i;
	int		flag;
	size_t	count;

	i = 0;
	flag = 0;
	count = 0;
	while (s1[i])
	{
		while (s1[i] && s1[i] == c)
		{
			i++;
		}
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

char	**ft_split(char const *s1, char c)
{
	char	**str;
	size_t	distance;
	size_t	index;
	size_t	i;

	i = 0;
	index = 0;
	distance = 0;
	str = malloc(sizeof(char *) * (countwords(s1, c)));
	while (i < ft_strlen(s1))
	{
		while (s1[i] == c)
			i++;
		if (ft_strchr(s1 + i, c))
			distance = ft_strchr(s1 + i, c) - (s1 + i);
		else
			distance = ft_strlen(s1) - i;
		str[index++] = ft_substr(s1, i, distance);
		i += distance + 1;
	}
	str[index] = 0;
	return (str);
}

/*
int	main(void)
{
	int i;
	char **s4 = ft_split("baby!", ' ');
	printf("----------\n");
	i = 0;
	while (s4[i])
	{
		printf("%s\n", s4[i]);
		i++;
	}
	char **s1 = ft_split("this is a string hello", ' ');
	i = 0;
	printf("-----------\n");
	while (s1[i])
	{
		printf("%s\n", s1[i]);
		i++;
	}
	printf("-----------\n");

	char **s2 = ft_split("this is a string hello", ' ');
	printf("-----------\n");
	i = 0;
	while (s2[i])
	{
		printf("%s\n", s2[i]);
		i++;
	}
	printf("-----------\n");

	char **s3 = ft_split("baby shark tuturututu!", ' ');
	printf("----------\n");
	i = 0;
	while (s2[i])
	{
		printf("%s\n", s3[i]);
		i++;
	}
	printf("-----------\n");

}
*/