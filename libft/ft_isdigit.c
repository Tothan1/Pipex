/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 17:59:11 by tle-rhun          #+#    #+#             */
/*   Updated: 2025/11/18 14:03:03 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int nb)
{
	if (47 < nb && nb < 58)
		return (1);
	else
		return (0);
}
/* #include <ctype.h>
#include <stdio.h>
int main(void)
{
	int result = ft_isdigit('a');
	printf("%d", result);
	return (0);
} */