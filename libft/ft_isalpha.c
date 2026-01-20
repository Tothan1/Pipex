/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 17:07:47 by tle-rhun          #+#    #+#             */
/*   Updated: 2025/11/18 14:05:20 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int character)
{
	if ((64 < character && character < 91)
		|| (96 < character && character < 123))
		return (1);
	else
		return (0);
}
/* #include <stdio.h>
int main(void)
{
	char str = -1;
	if (ft_isalpha(str))
		printf("%c est un caractère alphabétique", str);
	else
		printf("%c n'est pas un caractère alphabétique", str);
	return (0);
} */