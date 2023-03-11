/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtouze <vtouze@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 07:26:37 by vtouze            #+#    #+#             */
/*   Updated: 2023/03/04 19:35:19 by vtouze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*Lstiter applique une fonction donnee a chaque element d'une liste chaine
Elle prend en entree un pointeur vers le 1er element de la liste qui prend
en entree un pointeur vers le contenu d'un element de la liste
On commence par verifier si la liste n'est pas vide
Ensuite on itere sur tout les elements. Elle appellera la fonction f a chaque
tour en lui passant en parametre le contenu de l'element jusqu'a aller au
prochain element.
Lstiter ne modifie pas la liste elle ne fais que la parcourir.
*/
