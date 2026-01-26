/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 09:58:24 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/01/26 10:16:37 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_lasttab(int i, char *newstr, char *str3)
{
	int	b;

	b = 0;
	while (str3[b])
	{
		newstr[i] = str3[b];
		i++;
		b++;
	}
	newstr[i] = '\0';
	return (newstr);
}

static char	*ft_secondtab(int i, char *newstr, char *str2, char *str3)
{
	int	b;

	b = 0;
	while (str2[b])
	{
		newstr[i] = str2[b];
		i++;
		b++;
	}
	return (ft_lasttab(i, newstr, str3));
}

char	*ft_strjoin3(char const *s1, char const *s2, char const *s3)
{
	int		i;
	char	*str1;
	char	*str2;
	char	*str3;
	char	*newstr;

	str1 = (char *)s1;
	str2 = (char *)s2;
	str3 = (char *)s3;
	i = ft_strlen(str1) + ft_strlen(str2) + ft_strlen(str3);
	newstr = (char *)malloc(sizeof(char) * i + 1);
	if (newstr == NULL)
		return (NULL);
	i = 0;
	while (str1[i])
	{
		newstr[i] = str1[i];
		i++;
	}
	return (ft_secondtab(i, newstr, str2, str3));
}

/* #include <stdio.h>

int	main(void)
{
	char const s1[] = "Salut à";
	char const s2[] = "tous";
	char const s3[] = "à 42!";
	printf("%s", ft_strjoin3(s1, s2, s3));
	free(ft_strjoin3(s1, s2, s3));
	return (0);
} */