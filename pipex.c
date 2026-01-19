/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 14:06:07 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/01/19 17:00:48 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"




#include <stdio.h>

int main(void)
{
    pid_t pid;

    printf("Fork ici.\n");
    pid = fork();
    if (pid == -1)
    {
        // Si fork renvoie -1, il y a eu une erreur !
        return (1);
    }
    printf("\nFork reussi !\n");
    if (pid == 0)
    {
        // La valeur de retour de fork
        // est 0, ce qui veut dire qu'on est
        // dans le processus fils
        printf("Fils : Je suis le fils, mon pid interne est %d.\n", pid);
        sleep(3); // Attendre 1 seconde.
        printf("Fils : Termine !\n");
    }
    else if (pid > 0)
    {
        // La valeur de retour de fork
        // est différente de 0, ce qui veut dire
        // qu'on est dans le processus père
        printf("Pere : Je suis le pere, le pid de mon fils est %d.\n", pid);
        printf("Père : Termine !\n");
    }
    return(0);
}
// int main (void)
// {
// 	int p= 5;

// 	if (pipe(p) < 0)
//      	exit(1);
// }