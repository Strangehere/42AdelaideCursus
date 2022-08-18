/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaattwoo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 11:02:57 by aaattwoo          #+#    #+#             */
/*   Updated: 2022/02/13 22:00:43 by aaattwoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char		*d_str;
	const char	*s_str;

	d_str = (char *)dest;
	s_str = (const char *)src;
	if (d_str == s_str || len == 0)
		return (dest);
	else if (d_str < s_str || d_str > s_str + len)
		return (ft_memcpy(dest, src, len));
	else
	{
		d_str += len;
		s_str += len;
		while (len > 0)
		{
			*--d_str = *--s_str;
			len--;
		}
		return (dest);
	}
}

/*int main ()
{
	char dest[] = "oldstring";
	const char src[] = "newstring";

	printf("Before memmove dest = %s, src = %s\n", dest, src);
	ft_memmove(dest, src, 9);
	printf("After memmove dest = %s, src = %s\n", dest, src);

	return (0);
}*/
