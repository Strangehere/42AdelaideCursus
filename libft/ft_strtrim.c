/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaattwoo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 03:56:58 by aaattwoo          #+#    #+#             */
/*   Updated: 2022/07/25 15:52:24 by aaattwoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_inset(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	b;
	size_t	e;
	char	*str;

	b = 0;
	while (s1[b] && ft_inset(s1[b], set))
		b++;
	e = ft_strlen(s1);
	while (e > b && ft_inset(s1[e - 1], set))
			e--;
	str = (char *)malloc(sizeof(*s1) * (e - b + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (b < e)
		str[i++] = s1[b++];
	str[i] = 0;
	return (str);
}

/*int	main(void)
{
	ft_putendl_fd(ft_strtrim("lorem ipsum dolor sit am", "oa"), 1);
	return (0);
}*/
