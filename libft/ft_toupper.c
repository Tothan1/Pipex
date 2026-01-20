/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 16:55:02 by tle-rhun          #+#    #+#             */
/*   Updated: 2025/11/13 12:13:02 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int number)
{
	if (number > 96 && number < 123)
		number -= 32;
	return (number);
}

/* #include <stdio.h>
#include <ctype.h>
int main(void)
{
	char result;
	result = 'g';
	printf("%c\n", toupper(result));
	printf("%c", ft_toupper(result));

	return (0);
} */