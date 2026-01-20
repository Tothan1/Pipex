/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 11:51:45 by tle-rhun          #+#    #+#             */
/*   Updated: 2025/11/18 11:08:52 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int			i;
	unsigned int			len;
	size_t					src_len;

	len = (unsigned int) size;
	i = 0;
	while (len > 0 && i < len - 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	if (len != 0)
		dest[i] = '\0';
	i = 0;
	while (src[i])
		i++;
	src_len = (size_t)i;
	return (i);
}

/* #include <bsd/string.h>
#include<stdio.h>
int main (void){
	char src []="lorem ipsum dolor sit amet";
	char dest[]="djfslksdjflkjsdl";
	int size= 0;
	
	// strlcpy(dest, src , size);
	// n=ft_strlcpy(dest, src, size);
	// printf("Vraie fonction: %zu\n",strlcpy(dest, src , size));	
	printf("Ma fonction: %zu\n",ft_strlcpy(dest, src , size));	
	printf("dest:%s\n", dest);	
	// printf("\n%d", n);
	return (0);
} */