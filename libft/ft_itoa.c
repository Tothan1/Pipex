/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 16:19:25 by tle-rhun          #+#    #+#             */
/*   Updated: 2025/11/21 13:00:10 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

static int	ft_size(int n)
{
	long	nb;
	int		len;

	len = 0;
	nb = n;
	if (nb == -2147483648)
	{
		return (11);
	}
	if (nb < 0)
	{
		nb = nb * -1;
		len++;
	}
	while (nb > 9)
	{
		nb = nb / 10;
		len++;
	}
	len++;
	return (len);
}

static void	ft_remplir(int n, char *str, int len)
{
	int		i;
	long	nb;

	nb = n;
	i = len - 1;
	if (nb < 0)
	{
		nb = nb * -1;
		str[0] = '-';
	}
	while (nb > 9)
	{
		str[i] = (nb % 10) + '0';
		nb = nb / 10;
		i--;
	}
	if (nb <= 9 && nb >= 0)
		str[i] = (nb % 10) + '0';
	str[len] = '\0';
}

char	*ft_itoa(int n)
{
	int		len;
	char	*str;

	len = ft_size(n);
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	ft_remplir(n, str, len);
	return (str);
}
/* #include <stdio.h>
int main (void)
{
	int nb = 9;
	printf("salut");
	printf("%s\n", ft_itoa(nb));
	return(0);
} */