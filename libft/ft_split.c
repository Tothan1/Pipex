/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 18:22:21 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/01/23 09:19:06 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbtab(char const *s, char c)
{
	int	i;
	int	nbtab;

	i = 0;
	nbtab = 0;
	while (s[i] != '\0')
	{
		while (s[i] != c && s[i] != '\0')
			i++;
		if (i > 0 && (s[i] == c || s[i] == '\0') && s[i - 1] != c)
			nbtab++;
		if (s[i] != '\0')
			i++;
	}
	return (nbtab);
}

static int	free_all(char **bigtab, int a)
{
	int	i;

	i = 0;
	if (!bigtab[a])
	{
		while (i <= a)
		{
			free(bigtab[i]);
			i++;
		}
		free(bigtab);
		return (0);
	}
	else
		return (1);
}

static char	**ft_remplir(char const *s, char c, int i, char **bigtab)
{
	int	len;
	int	a;

	a = 0;
	while (a < ft_nbtab(s, c))
	{
		len = 0;
		while (s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			i++;
			len++;
		}
		if ((s[i - 1] != c && s[i] == c) || s[i] == '\0')
		{
			bigtab[a] = ft_substr(s, i - len, len);
			if (!free_all(bigtab, a))
				return (NULL);
			i++;
		}
			a++;
	}
	bigtab[a] = NULL;
	return (bigtab);
}

char	**ft_split(char const *s, char c)
{
	char	**bigtab;
	int		i;

	i = 0;
	bigtab = (char **)malloc(sizeof(char *) * (ft_nbtab(s, c) + 1));
	if (bigtab == NULL)
		return (NULL);
	if (!ft_remplir(s, c, i, bigtab))
		return (NULL);
	return (bigtab);
}

/* #include <stdio.h>
int main(void)
{
	char const s[] = " salut";
	char c = ' ';
	char **test = ft_split(s, c);
	int i;
	i = 0;
	while (test[i]!=NULL)
	{
		printf("%s\n", test[i]);
		free (test[i]);
		i++;
	}
	free (test);
	return (0);
} */