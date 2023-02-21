/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtouze <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 16:20:44 by vtouze            #+#    #+#             */
/*   Updated: 2023/02/11 22:41:26 by vtouze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*dst;
	const char	*src_c;

	if (dest == NULL || src == NULL)
		return (NULL);
	if (n == 0)
		return (dest);
	dst = (char *)dest;
	src_c = (const char *)src;
	i = 0;
	while (i < n)
	{
		dst[i] = src_c[i];
		i++;
	}
	return (dest);
}
