/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkwamme <bkwamme@student.42.rio>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 10:46:52 by bkwamme           #+#    #+#             */
/*   Updated: 2023/10/18 10:46:52 by bkwamme          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int ft_atoi(char *str)
{
    int atoi;
    int i;
    int m;

    i = 0;
    m = 0;
    atoi = 0;
    while (str[i] == 32 || (str[i] >= 7 && str[i] <= 13))
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            m++;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        atoi = atoi * 10 + str[i] - 48;
        i++;
    }
    if (m == 1)
        return (-atoi);
    return (atoi);
}

int main()
{
    printf ("%d\n", ft_atoi("                -25 48"));
    printf ("%d\n", atoi("        -25a5"));

    return 0;
}