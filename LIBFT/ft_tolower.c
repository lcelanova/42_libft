/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmunoz-f <lmunoz-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 19:16:12 by laura             #+#    #+#             */
/*   Updated: 2022/09/25 20:06:38 by lmunoz-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	unsigned char	letter;

	letter = (unsigned char)c;
	if (letter >= 'A' && letter <= 'Z')
		letter += 32;
	return (letter);
}
