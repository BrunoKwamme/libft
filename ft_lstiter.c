/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwamme <bkwamme@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:52:48 by bkwamme           #+#    #+#             */
/*   Updated: 2023/11/02 10:52:48 by bkwamme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return;
	while (lst->next != '\0')
	{
		f(lst->content);
		lst = lst->next;
	}
}
