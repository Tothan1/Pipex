/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 09:58:54 by tle-rhun          #+#    #+#             */
/*   Updated: 2025/11/18 10:59:09 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	size_t		alloc_len;
	char		*str;
	char		*newstr;

	str = (char *)s;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (len > ft_strlen(s) - start)
		alloc_len = ft_strlen(s) - start;
	else
		alloc_len = len;
	newstr = (char *)malloc(sizeof(char) * (alloc_len + 1));
	if (newstr == NULL)
		return (NULL);
	i = 0;
	while (i < alloc_len && i < (ft_strlen(s)))
	{
		newstr[i] = str[i + start];
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}

/* #include <stdio.h>
int main(void)
{
	char const s[] = "Salut";
	unsigned int start = 2;
	size_t len = 3;
	printf("%s", ft_substr(s, start, len));
	return (0);
} */