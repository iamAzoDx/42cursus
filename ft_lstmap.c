/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtouze <vtouze@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 07:28:37 by vtouze            #+#    #+#             */
/*   Updated: 2023/02/19 09:09:15 by vtouze           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void*(*f)(void *), void(*del) (void *))
{
	t_list	*nlst;
	t_list	*tmp;

	nlst = NULL;
	while (lst)
	{
	tmp = ft_lstnew(f(lst->content));
		if (!tmp)
			return (NULL);
		ft_lstadd_back(&nlst, tmp);
	lst = lst->next;
	}
	ft_lstclear(&lst, del);
	return (nlst);
}
