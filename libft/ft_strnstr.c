/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaattwoo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 16:53:47 by aaattwoo          #+#    #+#             */
/*   Updated: 2022/04/03 20:19:00 by aaattwoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *needle, size_t len)
{
	size_t	nlen;
	size_t	hlen;

	nlen = ft_strlen(needle);
	hlen = ft_strlen(str);
	if (len < 0)
	{
		len = hlen + (hlen % len);
	}
	if (!nlen)
		return ((char *)str);
	while (len >= nlen)
	{
		len--;
		if (!ft_memcmp(str, needle, nlen))
			return ((char *)str);
		if (*str++ == '\0')
			return (NULL);
	}
	return (NULL);
}

/*int main()
{
	const char *largestring = "Foo Bar Baz";
	const char *smallstring = "Bar";
	char *ptr;

	ptr = ft_strnstr(largestring, smallstring, 4);

	printf(" strnstr: %s\n", ft_strnstr(largestring, smallstring, 4));
	printf(" strnstr: %s\n", ft_strnstr(smallstring, " ", 4));
	return (0);
}*/
