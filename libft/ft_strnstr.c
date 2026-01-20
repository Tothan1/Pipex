/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 18:53:44 by tle-rhun          #+#    #+#             */
/*   Updated: 2025/11/18 13:34:15 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *smal, size_t len)
{
	size_t	i;
	size_t	occ;
	char	*str;
	char	*to_find;

	i = 0;
	occ = 0;
	str = (char *)big;
	to_find = (char *)smal;
	if (*to_find == '\0')
		return (str);
	while (str[i] && i < len && to_find[occ] != '\0')
	{
		occ = 0;
		while (str[i + occ] == to_find[occ]
			&& to_find[occ] != '\0' && (i + occ) < len)
		{
			occ++;
			if (to_find[occ] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (NULL);
}
/* 
#include <bsd/string.h>
#include <stdio.h>
int main(void)
{
	// char s[] = "lorem ipsum dolor sit amet";
	// char c[] = "dolor";
	// char haystack[30] = "ababcd";
	printf("Vrai fonction:%s\n", strnstr("lorem ipsum dolor sit amet", "", 10));
	printf("Ma fonction:%s", ft_strnstr("lorem ipsum dolor sit amet", "", 10));
	return (0);
} */