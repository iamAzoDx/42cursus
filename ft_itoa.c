/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtouze <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 21:47:26 by vtouze            #+#    #+#             */
/*   Updated: 2023/02/14 19:22:06 by vtouze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_len(int n)
{
	int		i;
	size_t	nu;

	i = 1;
	if (n < 0)
	{
		i++;
		nu = (size_t)n * -1;
	}
	else
		nu = (size_t)n;
	while (nu > 9)
	{
		nu /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		i;
	size_t	nn;
	int		a;

	if (n < 0)
		a = -1;
	else
		a = 1;
	i = ft_len(n);
	nn = (size_t)n * a;
	s = ft_calloc(i + 1, sizeof(char));
	if (!s)
		return (NULL);
	while (nn > 9)
	{
		i--;
		s[i] = (nn % 10) + '0';
		nn /= 10;
	}
	s[i - 1] = nn + '0';
	if (a == -1)
		s[i - 2] = '-';
	return (s);
}
