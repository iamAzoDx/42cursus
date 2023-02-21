/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtouze <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 22:00:34 by vtouze            #+#    #+#             */
/*   Updated: 2023/02/10 23:16:44 by vtouze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	res;
	int	neg;

	res = 0;
	neg = 0;
	if (str)
	{
		while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
			str++;
		if (*str == '-')
		{
			neg = -1;
			str++;
		}
		else if (*str == '+')
			str++;
		while (*str >= '0' && *str <= '9')
		{
			res = res * 10 + (*str - '0');
			str++;
		}
	}
	if (neg < 0)
		return (-res);
	return (res);
}
