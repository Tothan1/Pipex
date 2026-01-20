/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 18:04:20 by tle-rhun          #+#    #+#             */
/*   Updated: 2025/11/20 12:44:04 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	del(lst->content);
	free(lst);
}

// #include <stdio.h>
// int main (void)
// {
// 	// 1. On initialise la tête de liste à NULL (liste vide).
// 	t_list *head = NULL;
// 	t_list *elem1;
// 	t_list *elem2;
// 	t_list *elem3;
// 	t_list *elem4;

// 	// 2. On crée 3 nouveaux maillons.
// 	elem1 = ft_lstnew("wagon 3");
// 	elem2 = ft_lstnew("wagon 2");
// 	elem3 = ft_lstnew("wagon 1");
// 	elem4 = ft_lstnew("wagon 42");

// 	// 3. On les ajoute au début de la liste.
// 	ft_lstadd_front(&head, elem1); // La liste est : [elem1]
// 	ft_lstadd_front(&head, elem2); // La liste est : [elem2] -> [elem1]
// 	ft_lstadd_front(&head, elem3);
// 	ft_lstadd_back(&head, elem4);
// 	// 4. On appelle ft_lstsize et on affiche le résultat.
// 	ft_lstdelone(elem3);
// 	// printf("Dernier maillon de la liste chaînnée : %s\n",
// (char *)ft_lstlast(head)->content);

//N'oubliez pas de libérer la mémoire allouée (même si ce n'est pas testé ici).
// 	free(elem1);
// 	free(elem2);
// 	free(elem3);

// 	return (0);
// } 