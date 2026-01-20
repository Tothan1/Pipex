/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 12:22:18 by tle-rhun          #+#    #+#             */
/*   Updated: 2025/11/22 12:23:34 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	int		i;
	char	*ptr;
	void	*pointeur;

	if (nmemb == 0 || size == 0)
		return (malloc(0));
	if ((nmemb / 2) * size > SIZE_MAX / 2)
		return (NULL);
	i = 0;
	ptr = (char *)malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);
	while (ptr[i])
	{
		ptr[i] = 0;
		i++;
	}
	pointeur = (void *)ptr;
	return (pointeur);
}
/* #include <stdio.h>
int main(void)
{
// 	// char s[] = "Salut tout le monde!";
// 	// char c[] = "le";
// 	int *ptr = (int *)calloc(4, 0x800000000000000);
// // 	if (ptr == NULL) {
// // 	   printf("Allocation Failed");
// // 	   exit(0);
// //     }
// 	int size;
// 	size = 0;
// 	while (ptr[size])
// 		size++;
// 	printf("fonction originale:");
// 	for (int i = 0; i < 12; i++)
// 		printf("%d", ptr[i]);


		int size;
	size = 0;
	int *pointeur = (int *)ft_calloc(0x800000000000000, sizeof (int));
// 	if (ptr == NULL) {
// 	   printf("Allocation Failed");
// 	   exit(0);
//     }
	size = 0;
	while (pointeur[size])
		size++;
	printf("\nMa fonction:");
	for (int i = 0; i < 12; i++)
		printf("%d", pointeur[i]);

	// printf("Ma fonction:%s", ft_calloc(s, c, 10));
	return (0);
} */