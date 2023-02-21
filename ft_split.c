/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtouze <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 22:55:50 by vtouze            #+#    #+#             */
/*   Updated: 2023/02/14 16:48:06 by vtouze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_getsize(char const *s, char c)
{
	size_t	i;
	size_t	i2;
	size_t	old_i;

	i2 = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		old_i = i;
		while (s[i] && s[i] != c)
			i++;
		if (i - old_i != 0)
			i2++;
	}
	return (i2);
}

static char	*ft_fill(char	*new_s, char const *s, size_t i, size_t old_i)
{
	int		i3;

	i3 = 0;
	while (old_i < i)
	{
		new_s[i3] = s[old_i];
		i3++;
		old_i++;
	}
	return (new_s);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	i2;
	size_t	old_i;
	char	**new_s;

	i = 0;
	i2 = 0;
	new_s = (char **)ft_calloc(ft_getsize(s, c) + 1, sizeof(char *));
	if (new_s == NULL)
		return (NULL);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		old_i = i;
		while (s[i] && s[i] != c)
			i++;
		if (i - old_i != 0)
		{
			new_s[i2] = (char *)ft_calloc((i - old_i + 1), sizeof(char));
			new_s[i2] = ft_fill(new_s[i2], s, i, old_i);
			i2++;
		}
	}
	return (new_s);
}
