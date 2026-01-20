/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 20:44:38 by tle-rhun          #+#    #+#             */
/*   Updated: 2025/09/18 14:25:51 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				len;
	unsigned int	i;

	len = 0;
	i = 0;
	while (dest[len] != '\0')
	{
	len++;
	}
	while (src[i] != '\0' && i < nb)
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
  unsigned int nb;
  nb = 14;
//   char b;
  //b = *strcat (dest, src);
//   b=*ft_strcat(dest, src);
//   printf("dest:%s\n", dest);
//   printf("src:%s\n", src);
  printf("%s\n", ft_strncat(dest, src, nb));
  return(0);
}
*/
