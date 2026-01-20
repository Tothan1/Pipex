/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 14:49:55 by tle-rhun          #+#    #+#             */
/*   Updated: 2025/11/20 17:46:41 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*newobj;
	void	*newcontent;

	if (!lst || !f || !del)
		return (NULL);
	newlst = NULL;
	while (lst)
	{
		newcontent = f(lst->content);
		newobj = ft_lstnew(newcontent);
		if (!newobj)
		{
			del(newcontent);
			ft_lstclear(&newlst, del);
			return (NULL);
		}
		ft_lstadd_back(&newlst, newobj);
		lst = lst->next;
	}
	return (newlst);
}

// #include <stdlib.h> // Nécessaire pour free()

// void del(void *content)
// {
// 	// On vérifie si le contenu existe avant d'appeler free
// 	if (content)
// 	{
// 		free(content);
// 	}
// }
// void *ft_lstmodif(void *content)
// {
// 	char	*str;

// 	// On caste le pointeur void* en pointeur de char*
// 	str = (char *)content;
// 	// On modifie le premier caractère de la chaîne
// 	if (str && *str)
// 		str[3] = 'X';
// 	return (str);
// }
// #include <stdio.h>
// int main (void)
// {
// 	// 1. On initialise la tête de liste à NULL (liste vide).
// 	t_list *head = NULL;
// 	t_list *elem1;
// 	t_list *elem2;
// 	t_list *elem3;
// 	// t_list *elem4;

// 	// 2. On crée 3 nouveaux maillons.
// 	elem1 = ft_lstnew(ft_strdup("wagon 3"));
// 	elem2 = ft_lstnew(ft_strdup("wagon 2"));
// 	elem3 = ft_lstnew(ft_strdup("wagon 1"));

// 	// 3. On les ajoute au début de la liste.
// 	ft_lstadd_front(&head, elem1); // La liste est : [elem1]
// 	ft_lstadd_front(&head, elem2); // La liste est : [elem2] -> [elem1]
// 	ft_lstadd_front(&head, elem3); 
// La liste est : [elem3] -> [elem2] -> [elem1]
// 	// ft_lstadd_back(&head, elem4);
// 	// 4. On appelle ft_lstsize et on affiche le résultat.

// 	printf("%s", (char *) (ft_lstmap(head, ft_lstmodif, &del))->content) ;

// 	// free(elem1);
// 	// free(elem2);
// 	// free(elem3);

// 	return (0);
// } 