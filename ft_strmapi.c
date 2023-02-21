/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtouze <vtouze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 21:29:44 by vtouze            #+#    #+#             */
/*   Updated: 2023/02/14 15:55:45 by vtouze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*ns;

	i = 0;
	ns = ft_calloc(ft_strlen(s) + 1, sizeof(char));
	if (!(ns))
		return (NULL);
	while (s[i])
	{
		ns[i] = (*f)(i, s[i]);
		i++;
	}
	return (ns);
}
