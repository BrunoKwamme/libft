/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwamme <bkwamme@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 11:13:24 by bkwamme           #+#    #+#             */
/*   Updated: 2023/10/25 15:39:04 by bkwamme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*back_clean(char *s1, char *s2)
{
	size_t	s1_index;
	size_t	s2_index;

	s2_index = 0;
	s1_index = ft_strlen(s1) - 1;
	while (s2_index < ft_strlen(s2))
	{
		s2_index = 0;
		while (s2[s2_index] != s1[s1_index]
			&& s2_index < (ft_strlen(s2) - 1))
			s2_index++;
		if (s2[s2_index] == s1[s1_index])
		{
			s1[s1_index] = '\0';
			s1_index--;
		}
		else
			break;
	}
}

static char	*front_clean(char *s1, char *s2)
{
	size_t	s1_index;
	size_t	s2_index;

	s2_index = 0;
	s1_index = 0;
	while (s2_index < ft_strlen(s2) - 1)
	{
		s2_index = 0;
		while (s2[s2_index] != s1[s1_index]
			&& s2_index < ft_strlen(s2))
			s2_index++;
		if (s2[s2_index] == s1[s1_index])
		{
			s1[s1_index] = '\0';
			s1_index++;
		}
		else
			return (&s1[s1_index]);
	}
	return (&s1[s1_index]);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	char	*strim;
	char	*mem;

	strim = (char *)set;
	str = (char *)s1;
	back_clean(str, strim);
	front_clean(str, strim);
	printf("%s\n", str);
	mem = malloc(sizeof(char) * (ft_strlen(str) + 1));

	if (!mem)
		return (NULL);
	return (mem);
}
int main()
{
	char	str[] = "bumbum";
	char	set[] = "moli";
	ft_strtrim(str, set);



	return 0;
}
