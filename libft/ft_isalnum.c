/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 18:23:33 by tle-rhun          #+#    #+#             */
/*   Updated: 2025/11/18 14:02:25 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int character)
{
	if ((64 < character && character < 91)
		|| (96 < character && character < 123)
		|| (47 < character && character < 58))
		return (1);
	else
		return (0);
}

/* #include <stdio.h>

int main(void)
{
	char c = 'a';
	if (ft_isalnum(c))
		printf("%c est un caractère alphabétique ou numérique", c);
	else
		printf("%c n'est pas un caractère alphabétique ou numérique", c);
	return (0);
} */