/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwamme <bkwamme@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 07:35:14 by bkwamme           #+#    #+#             */
/*   Updated: 2023/11/16 07:41:04 by bkwamme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;
	char	*str;

	if (!s)
		return (NULL);
	str = ft_strdup(s);
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = (*f)(i, s);
		i++;
	}
	str[i] = '\0';
	return (str);
}
