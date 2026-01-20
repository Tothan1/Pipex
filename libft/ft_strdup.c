/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 11:48:00 by tle-rhun          #+#    #+#             */
/*   Updated: 2025/11/18 14:59:21 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	char	*str;
	char	*dup;

	str = (char *)s;
	i = 0;
	while (str[i])
		i++;
	dup = (char *)malloc(sizeof(char) * (i + 1));
	if (dup == NULL)
		return (NULL);
	i = 0;
	while (str[i])
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

/* #include <string.h>
#include <stdio.h>
int main(void)
{
	char s[] = "this is a normal test";
	printf("Vrai fonction:%s\n", strdup(s));
	printf("Ma fonction:%s", ft_strdup(s));
	return (0);
} */