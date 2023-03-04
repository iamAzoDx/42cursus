/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtouze <vtouze@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 17:54:34 by vtouze            #+#    #+#             */
/*   Updated: 2023/03/02 17:06:56 by vtouze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *b, size_t n)
{
	unsigned char	*dest;
	size_t			i;

	dest = b;
	i = 0;
	while (i++ < n)
		*dest++ = 0;
}
/*La fonction ft_bzero initialise les n premiers octets de la 
zone mémoire pointée par b à zéro.
Le traitement commence par initialiser un pointeur dest de type unsigned char 
sur l'adresse de la zone mémoire b, et un compteur i à zéro.
La boucle while qui suit parcourt n octets de la zone mémoire pointée par b 
et met chacun d'eux à zéro en utilisant l'opérateur d'indirection * pour accéder
à la valeur pointée par dest, puis en incrémentant le pointeur dest.
Enfin tous les n octets de la zone mémoire pointée par b sont mis à zéro.*/