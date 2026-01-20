/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 15:48:18 by tle-rhun          #+#    #+#             */
/*   Updated: 2025/11/20 12:03:20 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		i++;
	}
	return (i);
}
/* 
#include <stdio.h>
int main (void)
{
	
	// 1. On initialise la tête de liste à NULL (liste vide).
	t_list *head = NULL;
	t_list *elem1;
	t_list *elem2;
	t_list *elem3;

	// 2. On crée 3 nouveaux maillons.
	elem1 = ft_lstnew("wagon 3");
	elem2 = ft_lstnew("wagon 2");
	elem3 = ft_lstnew("wagon 1");

	// 3. On les ajoute au début de la liste.
	ft_lstadd_front(&head, elem1); // La liste est : [elem1]
	ft_lstadd_front(&head, elem2); // La liste est : [elem2] -> [elem1]
	ft_lstadd_front(&head, elem3); // La liste est : [elem3] -> [elem2] -> [elem1]

	// 4. On appelle ft_lstsize et on affiche le résultat.
	printf("Taille de la liste : %d\n", ft_lstsize(head));

	// N'oubliez pas de libérer la mémoire allouée (même si ce n'est pas testé ici).
	free(elem1);
	free(elem2);
	free(elem3);

	return (0);
} */