/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 18:02:51 by tle-rhun          #+#    #+#             */
/*   Updated: 2025/11/18 14:32:56 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	character;

	str = (unsigned char *)s;
	character = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == character)
			return ((void *)&str[i]);
		i++;
	}
	return (NULL);
}

/* #include <stdio.h>
#include <string.h>

int main(void)
{
	size_t size = 3;
	char s[] = {0, 1, 2 ,3 ,4 ,5};
	char c = '2';
	printf("%s", ((char *)memchr(s, c, size)));
	printf("\n%s", ((char *)ft_memchr(s, c, size)));
	return (0);
} */
