/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 10:47:24 by tle-rhun          #+#    #+#             */
/*   Updated: 2025/11/21 17:28:01 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_secondtab(int i, char *newstr, char *str2)
{
	int	b;

	b = 0;
	while (str2[b])
	{
		newstr[i] = str2[b];
		i++;
		b++;
	}
	newstr[i] = '\0';
	return (newstr);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		len;
	char	*str1;
	char	*str2;
	char	*newstr;

	str1 = (char *)s1;
	str2 = (char *)s2;
	len = ft_strlen(str1) + ft_strlen(str2);
	newstr = (char *)malloc(sizeof(char) * len + 1);
	if (newstr == NULL)
		return (NULL);
	i = 0;
	while (str1[i])
	{
		newstr[i] = str1[i];
		i++;
	}
	return (ft_secondtab(i, newstr, str2));
}

/* #include <stdio.h>
int main(void)
{
	char const s1[] = "Salut à";
	char const s2[] = "tous!";
	printf("%s", ft_strjoin(s1, s2));
	return (0);
} */