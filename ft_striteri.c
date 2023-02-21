/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtouze <vtouze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 06:05:58 by vtouze            #+#    #+#             */
/*   Updated: 2023/02/16 16:39:02 by vtouze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Applique la fonction f à chaque caractère de la chaine de caractères
** passée en paramètre en précisant son index en pre- mier argument.
** Chaque caractère est passé par adresse à la fonction f afin de
** pouvoir être modifié si nécéssaire.
** Param. #1
** La chaine de caractères sur laquelle itérer.
** Param. #2
** La fonction à appeler sur chaque caractère de s et son index.
** Retour
** Rien.
*/

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (s)
	{
		while (s[i])
		{
			(*f)(i, s + i);
			i++;
		}
	}
}
