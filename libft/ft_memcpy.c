/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 14:22:21 by tle-rhun          #+#    #+#             */
/*   Updated: 2025/11/18 15:05:07 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t n)
{
	size_t	i;
	char	*src;
	char	*dest;

	i = 0;
	src = (char *)source;
	dest = (char *)destination;
	if (n == 0 || (src == NULL && dest == NULL))
		return (dest);
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

/* #include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

//     int array[] = {54, 85, 20, 63, 21};
    int *copy = NULL;
//     size_t length = sizeof(int) * 3;

    //  Memory allocation and copy
    copy = (void*)0;
    size_t length = sizeof(int) * 3;
	memcpy(((void*)0), 54, 3);

    //  Display the copied values
    for (length = 0; length < 5; length++)
    {
	    printf("%d ", copy[length]);
    }
    printf("\n");

    free(copy);

    return EXIT_SUCCESS;
} */
