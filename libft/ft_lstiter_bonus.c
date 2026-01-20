/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 11:09:37 by tle-rhun          #+#    #+#             */
/*   Updated: 2025/11/20 12:42:27 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/* void ft_lstmodif(void *content)
{
	char	*str;

	// On caste le pointeur void* en pointeur de char*
	str = (char *)content;
	// On modifie le premier caractère de la chaîne
	if (str && *str)
		str[3] = 'X';
}

#include <stdio.h>
int main (void)
{
	
	// 1. On initialise la tête de liste à NULL (liste vide).
	t_list *head = NULL;
	t_list *elem1;
	t_list *elem2;
	t_list *elem3;
	// t_list *elem4;

	// 2. On crée 3 nouveaux maillons.
	elem1 = ft_lstnew(ft_strdup("wagon 3"));
	elem2 = ft_lstnew(ft_strdup("wagon 2"));
	elem3 = ft_lstnew(ft_strdup("wagon 1"));

	// 3. On les ajoute au début de la liste.
	ft_lstadd_front(&head, elem1); // La liste est : [elem1]
	ft_lstadd_front(&head, elem2); // La liste est : [elem2] -> [elem1]
	ft_lstadd_front(&head, elem3); // La liste est : [elem3] -> [elem2] -> [elem1]
	// ft_lstadd_back(&head, elem4);
	// 4. On appelle ft_lstsize et on affiche le résultat.
	
	ft_lstiter(head, &ft_lstmodif);
	printf("Premier maillon de la liste chaînnée : %s\n", (char *)head->content);
	printf("Second maillon de la liste chaînnée : %s\n", (char *)elem1->content);
	printf("Troisième maillon de la liste chaînnée : %s\n", (char *)elem2->content);
	printf("Quatrième maillon de la liste chaînnée : %s\n", (char *)elem3->content);

	// N'oubliez pas de libérer la mémoire allouée (même si ce n'est pas testé ici).
	// free(elem1);
	// free(elem2);
	// free(elem3);

	return (0);
} */