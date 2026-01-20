/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 09:20:13 by tle-rhun          #+#    #+#             */
/*   Updated: 2025/11/18 14:49:54 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_remplir(int i, char	*dest, char	*src)
{
	while (i >= 0)
	{
		dest[i] = src[i];
		i--;
	}
	return (dest);
}

void	*ft_memmove(void *destination, const void *source, size_t n)
{
	char	*dest;
	char	*src;
	size_t	e;
	int		i;

	e = 0;
	src = (char *)source;
	dest = (char *)destination;
	i = (int) n - 1;
	if (n == 0 || (src == NULL && dest == NULL))
		return (dest);
	if (dest - src >= 0)
		ft_remplir(i, dest, src);
	else
	{
		while (e < n)
		{
			dest[e] = src[e];
			e++;
		}
	}
	return (dest);
}

/* #include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ELEMENT_COUNT 10

int main()
{

	// On crée une zone de mémoire de 10 entiers et contenant
	// que neuf valeurs. La dixième est non utilisée (0).
	// int data[] = {20, 30, 40, 50, 60, 70, 80, 90, 100, 0};

	// On affiche le contenu de la collection
	
	puts(""); // Un retour à la ligne

	// On décale les éléménts dans la collection ...
	// void *source = (void *)data;
	char	src[] = "lorem ipsum dolor sit amet";
	char	*dest;
	dest = src + 1;
	for (int i = 0; i < 20; i++)
		{
			printf("%c ", src[i]);
		}
	// size_t size = 20 * sizeof(int);
	memmove(dest, "consectetur", 5);

	// ... pour y insérer une nouvelle valeur en tête

	// On affiche le contenu de la collection
	printf("\n");
	for (int i = 0; i < 20; i++)
	{
		printf("%c ", src[i]);
	}
	puts(""); // Un retour à la ligne

	return EXIT_SUCCESS;
} */