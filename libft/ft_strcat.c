/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 20:17:18 by tle-rhun          #+#    #+#             */
/*   Updated: 2025/09/17 20:17:49 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
char	*ft_strcat(char *dest, char *src)
{
	int	len;
	int	i;

	len = 0;
	i = 0;
	while (dest[len] != '\0')
	{
	len++;
	}
	while (src[i] != '\0')
	{
	dest[len + i] = src[i];
	i++ ;
	}
	dest[len + i] = '\0';
	return (dest);
}
/*
int main ( void ){
  char dest[]="test";
  char src[]="aasdfsdfst";
//   char b;
  //b = *strcat (dest, src);
//   b=*ft_strcat(dest, src);
//   printf("dest:%s\n", dest);
//   printf("src:%s\n", src);
  printf("%s\n", ft_strcat(dest, src));
  return(0);
} */
