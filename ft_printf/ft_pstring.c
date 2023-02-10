/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pstring.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaattwoo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 14:48:36 by aaattwoo          #+#    #+#             */
/*   Updated: 2023/02/09 13:58:33 by aaattwoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_pstring(const char *input, int *output)
{
	int	i;

	i = 0;
	if (input == NULL)
	{
		(*output) += write(1, "(null)", 6);
		return ;
	}
	while (input[i])
	{
		ft_pchar(input[i], output);
		i++;
	}
}
