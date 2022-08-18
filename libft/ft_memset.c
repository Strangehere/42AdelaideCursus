/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaattwoo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 07:51:35 by aaattwoo          #+#    #+#             */
/*   Updated: 2022/01/21 08:56:45 by aaattwoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*str_cp;

	str_cp = (unsigned char *)b;
	while (len > 0)
	{
		*str_cp = (unsigned int)c;
		str_cp++;
		len--;
	}
	return (b);
}
