/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtouze <vtouze@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 16:20:44 by vtouze            #+#    #+#             */
/*   Updated: 2023/03/11 09:32:55 by vtouze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*dst;
	const char	*src_c;

	if (dest == NULL && src == NULL)
		return (NULL);
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
