/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtouze <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 22:32:15 by vtouze            #+#    #+#             */
/*   Updated: 2023/02/15 06:04:04 by vtouze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ret;
	size_t	tmp;

	if (size == 0 || count == 0)
		return (malloc(0));
	tmp = size * count;
	if (tmp / size != count)
		return (NULL);
	else
	{
		ret = malloc(count * size);
		if (!(ret))
			return (NULL);
	}
	ft_bzero(ret, tmp);
	return (ret);
}
