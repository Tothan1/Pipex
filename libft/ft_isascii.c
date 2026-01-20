/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 18:21:46 by tle-rhun          #+#    #+#             */
/*   Updated: 2025/11/18 14:02:07 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int nb)
{
	if (0 <= nb && nb <= 127)
		return (1);
	else
		return (0);
}

/* #include <stdio.h>
int main(void)
{
	int result = ft_isascii('a');
	printf("%d", result);
	return (0);
} */