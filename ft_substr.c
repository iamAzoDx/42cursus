/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtouze <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 23:03:02 by vtouze            #+#    #+#             */
/*   Updated: 2023/02/13 21:26:43 by vtouze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char				*temp;
	unsigned int		i;

	i = 0;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_calloc(1, sizeof(char)));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	temp = ft_calloc(len + 1, sizeof(char));
	if (!(temp))
		return (NULL);
	while (s[start + i] && i < len)
	{
		temp[i] = s[start + i];
		i++;
	}
	temp[i] = 0;
	return (temp);
}
