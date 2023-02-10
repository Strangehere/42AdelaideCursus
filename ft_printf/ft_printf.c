/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaattwoo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/09 13:20:33 by aaattwoo          #+#    #+#             */
/*   Updated: 2023/02/09 16:00:57 by aaattwoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	check_var(va_list args, const char type, int *output)
{
	if (type == 'c')
		ft_pchar(va_arg(args, int), output);
	else if (type == 's')
		ft_pstring(va_arg(args, char *), output);
	else if (type == 'p')
		ft_pnumerical(va_arg(args, unsigned long), 17, output, false);
	else if (type == 'd' || type == 'i')
		ft_pint(va_arg(args, int), output);
	else if (type == 'u')
		ft_pnumerical(va_arg(args, unsigned int), 10, output, false);
	else if (type == 'x')
		ft_pnumerical(va_arg(args, unsigned int), 16, output, false);
	else if (type == 'X')
		ft_pnumerical(va_arg(args, unsigned int), 16, output, false);
	else if (type == '%')
		ft_pchar('%', output);
	else if (type != '\0')
		ft_pchar(type, output);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		output;
	va_list	args;

	i = 0;
	output = 0;
	if (format == 0)
		return (0);
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%' && format[i + 1] != 0)
		{
			i++;
			check_var(args, format[i], &output);
		}
		else if (format[i] == '%' && format [i + 1] == '\0')
			return (-1);
		else
			ft_pchar(format[i], &output);
		i++;
	}
	va_end(args);
	return (output);
}
