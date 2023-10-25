/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwamme <bkwamme@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:36:59 by bkwamme           #+#    #+#             */
/*   Updated: 2023/10/23 14:31:56 by bkwamme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big,	const char *little, size_t len)
{
	size_t	i;
	size_t	li;

	li = 0;
	i = 0;
	if (ft_strlen(little) == 0)
		return ((char *) big);
	while (big[i] != '\0' && i < len)
	{
		if (big[i] == little[li])
			li++;
		else
			li = 0;
		if (little[li] == '\0')
			return ((char *) &big[i - (li - 1)]);
		i++;
	}
	return (NULL);
}
