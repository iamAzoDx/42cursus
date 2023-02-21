/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtouze <vtouze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 10:14:13 by vtouze            #+#    #+#             */
/*   Updated: 2023/02/17 10:16:56 by vtouze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst != NULL)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}

/* La fonction ft_lstsize calcule la taille d'une liste chaînée 
 * représentée par un pointeur lst vers son premier maillon. 
 * La fonction parcourt tous les maillons de la liste et compte leur nombre.*/
