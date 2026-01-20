/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 18:28:40 by tle-rhun          #+#    #+#             */
/*   Updated: 2025/11/18 09:19:00 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	*s2;

	i = 0;
	s1 = (unsigned char *)str1;
	s2 = (unsigned char *)str2;
	while (s1[i] == s2[i] && i + 1 < n)
		i++;
	if (s1[i] == s2[i] || n == 0)
		return (0);
	else
		return (s1[i] - s2[i]);
}

/* #include <stdio.h>
#include <string.h>

int main(void)
{
	char s1[] = "Salat tout le monde";
	char s2[] = "Salut tout le monde";
	size_t size = 5;
	printf("Vrai fonction:%d\n", memcmp(s1, s2 , size));
	printf("Ma fonction:%d", ft_memcmp(s1, s2 , size));
	return (0);
} */