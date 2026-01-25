/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_super_strjoin.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 10:18:43 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/01/25 12:13:47 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_seplen(char *sep)
{
	int	i;

	i = 0;
	while (sep[i])
		i++;
	return (i);
}

int	ft_strslen(char **strs, int b, int i, int sizestrs)
{
	while (strs[b][i])
		i++;
	return (sizestrs + i);
}

char	*ft_remplir_concat(int size, char *concat, char *sep, char **strs)
{
	int	i;
	int	c;
	int	a;
	int	b;

	c = 0;
	b = 0;
	while (b < size)
	{
		i = 0;
		a = 0;
		while (strs [b][i])
			concat [c++] = strs [b][i++];
		while ((sep[a]) && (b + 1 < size))
			concat [c++] = sep[a++];
		b++;
	}
		concat [c] = '\0';
	return (concat);
}

int	ft_malloc(char *sep, int size, char **strs, int b)
{
	int	i;
	int	sizestrs;

	sizestrs = 0;
	i = 0;
	while (b < size)
	{
		sizestrs = ft_strslen(strs, b, i, sizestrs);
		b++;
	}
	return (((size -1) * (ft_seplen(sep))) + (sizestrs + 1));
}

char	*ft_super_strjoin(int size, char **strs, char *sep)
{
	int		a;
	int		b;
	char	*concat;

	b = 0;
	a = 0;
	if (size <= 0)
	{
		concat = (char *)malloc(1);
		concat[0] = '\0';
		return (concat);
	}
	concat = malloc(sizeof(char) *(ft_malloc(sep, size, strs, b)));
	if (!concat)
		return (NULL);
	return (ft_remplir_concat(size, concat, sep, strs));
}
