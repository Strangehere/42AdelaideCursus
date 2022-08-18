/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaattwoo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 10:51:55 by aaattwoo          #+#    #+#             */
/*   Updated: 2022/08/15 15:42:22 by aaattwoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	l;

	l = ft_strlen(str);
	if ((char)c == '\0')
		return ((char *)str + l);
	while (l--)
		if (*(str + l) == (char)c)
			return ((char *)(str + l));
	return (NULL);
}
