/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtouze <vtouze@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 21:11:37 by vtouze            #+#    #+#             */
/*   Updated: 2023/03/10 08:09:17 by vtouze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	size_t	count;

	str = ((char *)s);
	if (!(str == (char *)s))
		return (NULL);
	count = 0;
	while (count < n)
	{
		if ((char)c == str[0])
			return ((void *)str);
		str++;
		count++;
	}
	return (NULL);
}

/*Memchr recherche les n octets de la zone memoire pointee par s,
a la recherche de c
*/
