/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 13:58:15 by tle-rhun          #+#    #+#             */
/*   Updated: 2025/11/13 12:28:27 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}

/* #include <stdio.h>
#include <strings.h>
int main ( void ){
	int length;
    char str[]="-1234ab567";
    size_t n = 5;
    ft_bzero(str, n);
//     bzero(str, n);

    for( length=0; length<9; length++) {
        printf( "%c ", str[ length ] );
    }
    printf( "\n" );
    return(0);
} */