/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 12:32:34 by tle-rhun          #+#    #+#             */
/*   Updated: 2025/11/21 10:21:46 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, int n)
{
	unsigned int			i;
	unsigned int			nb;
	unsigned char			*str1;
	unsigned char			*str2;

	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	nb = (unsigned int) n;
	i = 0;
	while (str1[i] == str2[i] && str1[i] && str2[i] && i + 1 < nb)
		i++;
	if (nb == 0)
		return (0);
	return (str1[i] - str2[i]);
}

/* #include <stdio.h>
int main(void)
{
	char s1[] = "1233";
	char s2[] = "1235";
	int n = -1;
	printf("Vraie fonction:%d\n", strncmp(s1, s2, n));
	printf("Ma fonction:%d", ft_strncmp(s1, s2, n));
	return (0);
} */