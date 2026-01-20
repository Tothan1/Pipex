/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 17:27:10 by tle-rhun          #+#    #+#             */
/*   Updated: 2025/11/13 12:12:59 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int number)
{
	if (number > 64 && number < 91)
		number += 32;
	return (number);
}

/* #include <stdio.h>
#include <ctype.h>
int main(void)
{
	char result;
	result = '@';
	printf("%c\n", tolower(result));
	printf("%c", ft_tolower(result));
	return (0);
} */