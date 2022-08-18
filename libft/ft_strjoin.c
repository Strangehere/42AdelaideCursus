/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaattwoo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 22:45:25 by aaattwoo          #+#    #+#             */
/*   Updated: 2022/04/04 16:27:15 by aaattwoo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	unsigned int	i1;
	unsigned int	i2;
	size_t			len1;
	size_t			len2;
	char			*dest;

	if (!s1 && !s2)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	i1 = 0;
	i2 = 0;
	dest = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!dest)
		return (NULL);
	while (s1[i1])
	{
		dest[i1] = s1[i1];
		i1++;
	}
	while (s2[i2])
		dest[i1++] = s2[i2++];
	dest[i1] = 0;
	return (dest);
}
