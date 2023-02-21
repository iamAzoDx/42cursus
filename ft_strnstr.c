/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtouze <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 21:39:10 by vtouze            #+#    #+#             */
/*   Updated: 2023/02/12 20:44:34 by vtouze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	i2;

	if (!big && !len)
		return (NULL);
	if (ft_strlen(little) == 0)
		return ((char *)big);
	i = 0;
	i2 = 0;
	while (big[i] && i < len)
	{
		i2 = 0;
		while (i + i2 < len && little[i2] && big[i + i2] == little[i2])
				i2++;
		if (!(little[i2]))
			return ((char *)big + i);
		else
			i2 = 0;
		i++;
	}
	return (NULL);
}
