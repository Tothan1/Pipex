/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 17:59:11 by tle-rhun          #+#    #+#             */
/*   Updated: 2025/11/17 20:07:06 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	char			*str;
	unsigned char	character;

	character = (unsigned char) c;
	i = 0;
	str = (char *)s;
	while (str[i])
		i++;
	while (str[i] != character && i >= 0)
		i--;
	if (str[i] == character && i >= 0)
		return (&str[i]);
	else
		return (NULL);
}

/* #include <stdio.h>
#include <string.h>

int main(void)
{
	char s[] = "Salut tout le monde!";
	char c = 'h';
	printf("%s\n", strrchr(s, c));
	printf("%s", ft_strrchr(s, c));
	return (0);
} */