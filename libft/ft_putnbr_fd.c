/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 16:37:30 by tle-rhun          #+#    #+#             */
/*   Updated: 2025/11/13 16:32:24 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;
	int		div;
	int		mod;

	nb = n;
	if (nb == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		nb = nb * -1;
		write(fd, "-", 1);
	}
	if (nb > 9)
	{
		div = nb / 10;
		ft_putnbr_fd(nb / 10, fd);
	}
	mod = nb % 10;
	mod = mod + '0';
	write(fd, &mod, 1);
}

/* #include <string.h>
#include <stdio.h>
int main(void)
{
	int s = 5888;
	// printf("Vrai fonction:%s\n", putnbr_fd(s));
	// putnbr(s);
	ft_putnbr_fd(s, 1);
	return (0);
} */