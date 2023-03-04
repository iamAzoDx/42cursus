/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtouze <vtouze@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 11:15:24 by vtouze            #+#    #+#             */
/*   Updated: 2023/02/22 07:44:46 by vtouze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst)
		return ;
	if (!new)
		return ;
	last = ft_lstlast(*lst);
	if (!last)
		*lst = new;
	else
		last->next = new;
}

/*
int	main(void)
{
	t_list	*lst;

	// Créer une liste chaînée avec un maillon
	lst = ft_lstnew("Premier maillon");

	// Ajouter deux nouveaux maillons à la fin de la liste
	ft_lstadd_back(&lst, ft_lstnew("Deuxième maillon"));
	ft_lstadd_back(&lst, ft_lstnew("Troisième maillon"));

	// Afficher le contenu de chaque maillon de la liste
	while (lst != NULL)
	{
		printf("%s\n", (char *)lst->content);
		lst = lst->next;
	}

	// Libérer la mémoire allouée pour la liste chaînée
	ft_lstclear(&lst, free);

	return (0);
}
*/
