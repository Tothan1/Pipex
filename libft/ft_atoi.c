/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 13:47:11 by tle-rhun          #+#    #+#             */
/*   Updated: 2025/11/21 12:28:56 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	if ((c == 32) || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	signe;
	int	nombre;

	i = 0;
	signe = 1;
	nombre = 0;
	while (ft_isspace (str[i]))
	i++;
	if (str[i] == '-' || str[i] == '+' )
	{
		if (str[i] == '-')
		signe *= -1;
		i++;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
		nombre = nombre * 10 + str[i] - '0';
		i++;
	}
	nombre = signe * nombre;
	return (nombre);
}

/* #include <stdlib.h>
#include <stdio.h>
int main ( void ){
    char str[]="     	-1234ab567";
    printf("%d", ft_atoi(str));
//     printf("%d", atoi(str));
    return(0);
} */