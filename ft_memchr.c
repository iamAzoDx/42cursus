/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtouze <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 21:11:37 by vtouze            #+#    #+#             */
/*   Updated: 2023/02/11 22:35:33 by vtouze           ###   ########.fr       */
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
