/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtouze <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 21:28:23 by vtouze            #+#    #+#             */
/*   Updated: 2023/02/11 23:21:00 by vtouze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*ns1;
	unsigned char	*ns2;

	if (!s1 && !s2)
		return (0);
	ns1 = (unsigned char *)s1;
	ns2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if ((unsigned char)ns1[i] != (unsigned char)ns2[i])
			return ((int)(ns1[i] - ns2[i]));
		i++;
	}
	return (0);
}
