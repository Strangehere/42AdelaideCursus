/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaattwoo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 06:35:11 by aaattwoo          #+#    #+#             */
/*   Updated: 2022/04/04 01:53:31 by aaattwoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	num_length(int n)
{
	size_t	length;

	if (!n)
		return (1);
	if (n < 0)
		n *= -1;
	length = 0;
	while (n)
	{
		n /= 10;
		length++;
	}
	return (length);
}

static char	*putnumber(char *dest, int n, int len)
{
	unsigned int	number;

	number = n;
	if (n < 0)
		number = -n;
	while (len--)
	{
		dest[len] = (number % 10) + '0';
		if (number > 9)
			number /= 10;
	}
	if (n < 0)
		dest[0] = '-';
	return (dest);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;

	len = num_length(n);
	if (n < 0)
		len++;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	putnumber(str, n, len);
	str[len] = '\0';
	return (str);
}
