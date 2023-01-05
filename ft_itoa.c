/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmunoz-f <lmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 11:04:39 by lmunoz-f          #+#    #+#             */
/*   Updated: 2022/10/27 18:23:09 by lmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_digits(long n)
{
	size_t	digits;

	digits = 0;
	if (n <= 0)
	{
		n *= -1;
		digits++;
	}
	while (n > 0)
	{
		n /= 10;
		digits++;
	}
	return (digits);
}

char	*ft_itoa(int n)
{
	char	*num;
	size_t	len;
	long	nb;

	len = ft_count_digits(n);
	num = malloc(sizeof(char) * (len + 1));
	nb = n;
	if (!num)
		return (NULL);
	num[len] = '\0';
	if (nb == 0)
		num[0] = '0';
	else if (nb < 0)
	{
		num[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		num[--len] = '0' + (nb % 10);
		nb /= 10;
	}
	return (num);
}
