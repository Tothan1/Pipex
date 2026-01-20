/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 11:51:45 by tle-rhun          #+#    #+#             */
/*   Updated: 2025/11/27 13:26:26 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	int		i;

	dst_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	i = 0;
	if (dst_len >= size)
		return (size + src_len);
	while (src[i] != '\0' && dst_len + i < size - 1)
	{
		dest[dst_len + i] = src[i];
		i++ ;
	}
	dest[dst_len + i] = '\0';
	return (dst_len + src_len);
}


/* 
#include <bsd/string.h>
#include<stdio.h>
int main (void){
	char src []="lorem ipsum dolor sit amet";
	char dest[]="";
	int size= 0;
	// strlcat(dest, src , size);
	// n=strlcat(dest, src , size);

	// printf("Vraie fonction: %zu\n",strlcat(dest, src , size));	
	printf("Ma fonction: %zu\n",ft_strlcat(dest, src , size));	
	printf("dest:%s\n", dest);


	return (0);
} */