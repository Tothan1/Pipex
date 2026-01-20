/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 14:06:07 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/01/20 18:26:40 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"
#include <stdio.h>

// int main(void)
// {
//     pid_t pid;

//     printf("Fork ici.\n");
//     pid = fork();
//     if (pid == -1)
//     {
//         // Si fork renvoie -1, il y a eu une erreur !
//         return (1);
//     }
//     printf("\nFork reussi !\n");
//     if (pid == 0)
//     {
//         // La valeur de retour de fork
//         // est 0, ce qui veut dire qu'on est
//         // dans le processus fils
//         printf("Fils : Je suis le fils, mon pid interne est %d.\n", pid);
//         sleep(3); // Attendre 1 seconde.
//         printf("Fils : Termine !\n");
//     }
//     else if (pid > 0)
//     {
//         // La valeur de retour de fork
//         // est différente de 0, ce qui veut dire
//         // qu'on est dans le processus père
//         printf("Pere : Je suis le pere, le pid de mon fils est %d.\n", pid);
//         printf("Père : Termine !\n");
//     }
//     return(0);
// }

// int
// main(void)
// {
//   pid_t          pid;

//   if ((pid = fork()) == -1)
//     {
//       perror("fork");
//       return (1);
//     }
//   else if (pid == 0)
//     printf("Je suis le fils, et mon pid = %d\n", getpid());
//   else
//     printf("Je suis le pere, et mon pid = %d. Le pid de mon fils = %d\n",
	// getpid(), pid);

//   return (0);
// }

int	main(int ac, char **av, char **envp)
{
	// pid_t pid1;
	// int status;
	// int pipefd[2];
	char **path;
	char **argv;
	char *full_path;
	char *part_path;
	int nb_tab_path = 0;
	if(ac == 2)
	{
		while (ft_strncmp(envp[nb_tab_path], "PATH=", 5))
			nb_tab_path++;
		// printf("%s\n", envp[nb_tab_path]);
		path = ft_split(&envp[nb_tab_path][5], ':');
		nb_tab_path = 0;
		argv = ft_split(av[1],' ');
		while (path[nb_tab_path])
		{
			part_path = ft_strjoin("/", argv[0]);
			full_path = ft_strjoin(path[nb_tab_path], part_path);
			free(part_path);
			if(access(full_path, X_OK) == 0)
				execve(full_path, argv, envp);
			free(full_path);
			nb_tab_path++;
		}
		if(access(full_path, X_OK) != 0)
			perror("bash");
		
	}
	// pid1 = fork(); 
    // if (argc > 1)
	// {
	// 	if (pid1 == -1)
	// 	{
	// 		perror("fork");
	// 		return (1);
	// 	}
	// 	/* Si pid == 0, alors on est dans le process fils. */
	// 	else if (pid1 == 0)
	// 	{
	// 		if (execve(argv[1], argv + 1, env) == -1)
	// 			perror("execve");
	// 		return (1);
	// 			/* On termine le fils même si execve fail parce qu'on veut voir que le pid du pere*/
	// 	}
	// 	/* Sinon, dans le pere. */
	// 	else
	// 		waitpid(pid1, &status, 0); /* Oui,
	// 			il faudrait vérifier la valeur de retour... */
	// }

	// printf("My pid is: %d\n", getpid());

	return (0);
}