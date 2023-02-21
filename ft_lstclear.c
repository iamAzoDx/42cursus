/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtouze <vtouze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 11:09:38 by vtouze            #+#    #+#             */
/*   Updated: 2023/02/19 07:39:13 by vtouze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	while (*lst)
	{
		temp = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = temp;
	}
}

/*La fonction ft_lstclear supprime et 
 * libère la mémoire de tous les maillons d'une liste chaînée 
 * représentée par un pointeur vers un pointeur lst vers son premier maillon. 
 * Le pointeur de fonction del est utilisé pour 
 * libérer la mémoire allouée pour le contenu de chaque maillon. */
