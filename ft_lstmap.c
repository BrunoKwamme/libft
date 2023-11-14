/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwamme <bkwamme@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 11:00:36 by bkwamme           #+#    #+#             */
/*   Updated: 2023/11/02 11:00:36 by bkwamme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *strct;
	t_list *node;

	strct = NULL;
	while (lst)
	{
		node = ft_lstnew(f(lst->content));
		if(!node)
		{
			ft_lstclear(&strct, del);
			return (strct);
		}
		ft_lstadd_back(&strct, node);
		lst = lst->next;
	}
	return (strct);
}
