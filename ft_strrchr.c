/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                      :+:      :+:    :+:    */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwamme <bkwamme@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 16:44:50 by bkwamme           #+#    #+#             */
/*   Updated: 2023/10/18 16:44:50 by bkwamme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	lastPosition;
	int	i;

	lastPosition = -1;
	i = 0;
	while(s[i] != '\0')
	{
		if (s[i] == c)
			lastPosition = i;
		i++;
	}
	if (lastPosition != -1)
		return ((char *) &s[lastPosition]);
	else if (c == '\0')
		return ((char *) &s[i]);
	return (NULL);
}