/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 10:00:50 by tle-rhun          #+#    #+#             */
/*   Updated: 2025/11/18 14:02:50 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int character)
{
	if (character > 31 && character < 127)
		return (1);
	else
		return (0);
}
/* #include <ctype.h>
#include <stdio.h>
int main(void)
{
	int result = ft_isprint('7');
	printf("%d", result);
	return (0);
} */