/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 10:24:43 by tle-rhun          #+#    #+#             */
/*   Updated: 2025/11/14 19:17:29 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *pointer, int v, size_t count )
{
	int				i;
	int				c;
	unsigned char	*pointer2;
	unsigned char	value;

	i = 0;
	pointer2 = (unsigned char *)pointer;
	value = (unsigned char) v;
	c = (int) count;
	while (i < c)
	{
		pointer2[i] = value;
		i++;
	}
	return (pointer);
}
/* #include <stdio.h>
int main(void)
{
	int length;
	int str[]= { 54, 85, 20, 63, 21 };
	size_t size = sizeof( int ) *3;
	memset(str, 0, size);
	for( length=0; length<5; length++) {
        printf( "%d ", str[ length ] );
    }
    printf( "\n" );
	return (0);
} */
/* 
// exemple de la fonction
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    int array [] = { 54, 85, 20, 63, 21 };
    size_t size = sizeof( int ) * 4;
    int length;

    //  Display the initial values 
    for( length=0; length<5; length++) {
        printf( "%d ", array[ length ] );
    }
    printf( "\n" );

    //  Reset the memory bloc 
    ft_memset( array, 0, size );

    //  Display the new values 
    for( length=0; length<5; length++) {
        printf( "%d ", array[ length ] );
    }
    printf( "\n" );
    
    return 0;
} */