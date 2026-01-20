/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 17:17:03 by tle-rhun          #+#    #+#             */
/*   Updated: 2025/11/21 12:33:28 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isset(int a, char const *set, char const *s1)
{
	int	i;

	i = 0;
	while (s1[a] != set[i] && set[i] != '\0')
		i++;
	if (s1[a] == set[i] && set[i] != '\0')
		return (1);
	else
		return (0);
}

static int	ft_start(char const *set, char const *s1)
{
	int	start;

	start = 0;
	while (s1[start] != '\0' && ft_isset(start, set, s1))
		start++;
	return (start);
}

static int	ft_last(int last, char const *set, char const *s1)
{
	while ((last - 1) > 0 && ft_isset(last - 1, set, s1))
			last--;
	return (last);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		last;
	int		len;
	char	*str1;

	if (!s1 || !set)
		return (NULL);
	start = ft_start(set, s1);
	str1 = (char *)s1;
	last = ft_strlen(str1);
	last = ft_last (last, set, s1);
	len = last - start;
	return (ft_substr(s1, start, len));
}

/* #include <stdio.h>
int main(void)
{
	char const s1[] = "********";
	char const set[] = "*";
	printf("%s", ft_strtrim(s1, set));
	return (0);
} */