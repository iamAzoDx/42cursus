/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtouze <vtouze@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 22:32:15 by vtouze            #+#    #+#             */
/*   Updated: 2023/03/03 14:17:59 by vtouze           ###   ########.fr       */
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
/*La fonction calloc alloue de la mémoire pour un tableau de 'count' éléments, 
chacun de taille 'size' octets, et initialise cette mémoire à zéro.
Le traitement commence par vérifier si size ou count sont égaux à zéro, 
auquel cas elle retourne un pointeur vers une allocation de mémoire de taille 0.
Cela garantit que si ft_calloc est appelée avec count ou size égal à zéro, 
elle retournera toujours un pointeur valide, 
même s'il ne peut pas y avoir d'allocation de mémoire réelle.
Ensuite, la var tmp est initialisée avec la valde size multipliée par count. 
On vérifie si tmp est égal à la multiplication de size et count. 
Si ce n'est pas le cas, cela signifie qu'il y a un dépassement de capacité,
donc la fonction retourne NULL.
Si l'allocation de mémoire réussit, 
la fonction alloue count fois size octets avec malloc. 
Si malloc échoue, la fonction renvoie NULL.
Enfin, la fonction ft_bzero est utilisée pour initialiser 
la zone mémoire allouée avec la valeur zéro, 
ce qui garantit que tous les éléments du tableau sont initialisés à zéro.
Enfin, la fonction ft_calloc retourne un pointeur vers
la zone mémoire nouvellement allouée.*/