/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/19 16:16:15 by tle-rhun          #+#    #+#             */
/*   Updated: 2025/11/20 12:43:19 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int	i;

	i = 0;
	if (lst == NULL)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}

// #include <stdio.h>
// int main (void)
// {
// 	// 1. On initialise la tête de liste à NULL (liste vide).
// 	t_list *head = NULL;
// 	t_list *elem1;
// 	t_list *elem2;
// 	t_list *elem3;

// 	// 2. On crée 3 nouveaux maillons.
// 	elem1 = ft_lstnew("wagon 3");
// 	elem2 = ft_lstnew("wagon 2");
// 	elem3 = ft_lstnew("wagon 1");

// 	// 3. On les ajoute au début de la liste.
// 	ft_lstadd_front(&head, elem1); // La liste est : [elem1]
// 	ft_lstadd_front(&head, elem2); // La liste est : [elem2] -> [elem1]
// 	ft_lstadd_front(&head, elem3);

// 	// 4. On appelle ft_lstsize et on affiche le résultat.
// 	printf("Dernier maillon de la liste chaînnée : %s\n",
// (char *)ft_lstlast(head)->content);

// 	free(elem1);
// 	free(elem2);
// 	free(elem3);

// 	return (0);
// }
