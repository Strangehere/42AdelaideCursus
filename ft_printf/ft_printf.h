/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaattwoo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 03:10:35 by aaattwoo          #+#    #+#             */
/*   Updated: 2023/02/09 16:01:19 by aaattwoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdbool.h>

int		ft_printf(const char *format, ...);
void	ft_pchar(const char input, int *output);
void	ft_pint(int n, int *output);
void	ft_pnumerical(unsigned long n, int base, int *output, bool upper);
void	ft_pstring(const char *input, int *output);

#endif
