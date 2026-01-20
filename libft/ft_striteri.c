/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 14:38:48 by tle-rhun          #+#    #+#             */
/*   Updated: 2025/11/18 13:49:25 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/* #include <stdio.h>
static void	fonction(unsigned int i, char *c)
{
	c[i] = c[i] + i;
}
int main (void)
{
	char s[]= "aaaaa";
	ft_striteri(s,fonction);
	printf("test1: %s\n", s);
	return(0);
} */