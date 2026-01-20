/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 17:31:13 by tle-rhun          #+#    #+#             */
/*   Updated: 2025/11/17 20:05:44 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	char			*str;
	unsigned char	character;

	character = (unsigned char) c;
	i = 0;
	str = (char *)s;
	while (str[i] != character && str[i] != '\0')
		i++;
	if (str[i] == character)
		return (&str[i]);
	else
		return (NULL);
}

/* #include <stdio.h>
#include <string.h>

int main(void)
{
	char s[] = "teste";
	// char c = 1024 + 'e';
	printf("Vraie fonction:%s\n", strchr(s, 1024));
	printf("Fausse fonction:%s", ft_strchr(s, 1024));
	return (0);
} */