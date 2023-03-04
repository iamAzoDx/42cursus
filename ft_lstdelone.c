/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtouze <vtouze@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 11:20:59 by vtouze            #+#    #+#             */
/*   Updated: 2023/03/03 15:06:14 by vtouze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	del(lst->content);
	free(lst);
}

/*La fontion delone permet de supprimer un seul element
d'une liste chainee (t_list)
On souhaite supprimer l'element pointer par lst et on utilise la fonction del
pour liberer la memoire alloue par l'element
On commence par verifier si lst = NULL si oui la fonction return sans rien faire
Si lst != NULL, del est appeler avec le contenu de lst comme argument
c'est important de faire cela car cela libere la memoire
On utilise enfin free afin de s'assurer que toute la memoire alloue
est correctement liberer on evite ainsi les fuites de memoire*/