/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pnumerical.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaattwoo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 13:37:54 by aaattwoo          #+#    #+#             */
/*   Updated: 2023/02/15 18:15:17 by aaattwoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_pchkhex(unsigned long n, int base, int *output)
{
	base = 16;
	if (!n)
	{
		ft_pstring("0x0", output);
		return ;
	}
	else
	{
		(*output) += write(1, "0x", 2);
		ft_pnumerical(n, base, output, false);
	}
}

void	ft_pnumerical(unsigned long n, int base, int *output, bool upper)
{
	char	*u_digits;
	char	*l_digits;
	char	*digits;

	u_digits = "0123456789ABCDEF";
	l_digits = "0123456789abcdef";
	if (base == 17)
	{
		ft_pchkhex(n, 16, output);
		return ;
	}
	if (upper)
		digits = u_digits;
	else
		digits = l_digits;
	if (n < (unsigned int)base)
		ft_pchar(digits[n], output);
	else
	{
		ft_pnumerical(n / base, base, output, upper);
		ft_pnumerical(n % base, base, output, upper);
	}
}
