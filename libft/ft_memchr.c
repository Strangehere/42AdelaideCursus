/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaattwoo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 15:15:00 by aaattwoo          #+#    #+#             */
/*   Updated: 2022/02/28 23:31:40 by aaattwoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*s_cp;

	s_cp = (const unsigned char *)s;
	c = (unsigned char)c;
	while (n > 0)
	{
		if (*s_cp == c)
			return ((void *)s_cp);
		s_cp++;
		n--;
	}
	return (NULL);
}

/*int	main ()
{
	const char str[] = "Memnoch the Devil. This is not a Mnemonic";
	const char ch = '.';
	char *ret;

	ret = ft_memchr(str, ch, strlen(str));

	printf("String after |%c| is - |%s|\n", ch, ret);

	return(0);
}*/
