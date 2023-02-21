/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtouze <vtouze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 10:18:58 by vtouze            #+#    #+#             */
/*   Updated: 2023/02/19 07:34:25 by vtouze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

/*La fonction ft_lstlast renvoie un pointeur 
 * vers le dernier maillon d'une liste chaînée 
 * représentée par un pointeur lst vers son premier maillon. 
 * Si la liste est vide, la fonction renvoie un pointeur nul.*/
/*
int	main(void)
{
	t_list	*lst;
	t_list	*last;

	// Créer une liste chaînée avec trois maillons
	lst = ft_lstnew("Premier maillon");
	ft_lstadd_back(&lst, ft_lstnew("Deuxième maillon"));
	ft_lstadd_back(&lst, ft_lstnew("Troisième maillon"));

	// Récupérer le dernier maillon de la liste
	last = ft_lstlast(lst);

	// Afficher le contenu du dernier maillon
	printf("Dernier maillon : %s\n", (char *)last->content);

	// Libérer la mémoire allouée pour la liste chaînée
	ft_lstclear(&lst, free);

	return (0);
}
*/
