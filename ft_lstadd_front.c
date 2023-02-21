/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtouze <vtouze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 09:55:13 by vtouze            #+#    #+#             */
/*   Updated: 2023/02/17 09:56:56 by vtouze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}

/* La fonction ft_lstadd_front ajoute un nouveau maillon au début d'une liste 
 *chaînée
 *représentée par un pointeur de pointeur vers le premier maillon lst. 
 *Le nouveau maillon est représenté par un pointeur new_node de type t_list. */
