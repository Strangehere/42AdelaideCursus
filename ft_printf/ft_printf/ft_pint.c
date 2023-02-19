/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pint.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaattwoo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 13:27:43 by aaattwoo          #+#    #+#             */
/*   Updated: 2023/02/15 18:16:12 by aaattwoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_pint(int n, int *output)
{
	if (n == -2147483648)
	{
		ft_pstring("-2147483648", output);
	}
	else if (n < 0)
	{
		ft_pchar('-', output);
		ft_pint(-n, output);
	}
	else if (n >= 10)
	{
		ft_pint(n / 10, output);
		ft_pchar(n % 10 + '0', output);
	}
	else
	{
		ft_pchar(n + '0', output);
	}
}
