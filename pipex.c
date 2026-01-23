/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 14:06:07 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/01/23 20:17:18 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"
#include <stdio.h>

void	error(char *msg_error, int nb_exit)
{
	// if(nb_exit != 1)
	// {
	msg_error = ft_strjoin("bash: ", msg_error);
	ft_putstr_fd(msg_error, 2);
	// }
	free(msg_error);
	exit(nb_exit);
}

void	exec_command(char **av, char **envp, int cmd)
{
	char	**path;
	char	**argv;
	char	*full_path;
	char	*part_path;
	int		nb_tab_path;

	nb_tab_path = 0;
	while (ft_strncmp(envp[nb_tab_path], "PATH=", 5))
		nb_tab_path++;
	path = ft_split(&envp[nb_tab_path][5], ':');
	nb_tab_path = 0;
	argv = ft_split(av[cmd], ' ');
	while (path[nb_tab_path] != NULL)
	{
		part_path = ft_strjoin("/", argv[0]);
		full_path = ft_strjoin(path[nb_tab_path], part_path);
		free(part_path);
		if (access(full_path, X_OK) == 0)
			execve(full_path, argv, envp);
		nb_tab_path++;
	}
	free(full_path);
	error(ft_strjoin(argv[0], "command not found: "), 127);
}

void	child_process(int fd, int *pipefd, int nb_dup1, int nb_dup2, char *av)
{
	char	*msg_error;

	if (fd == -1)
	{
		msg_error = ft_strjoin("bash: ", av);
		perror(msg_error);
		free(msg_error);
		exit(EXIT_FAILURE);
	}
	close(pipefd[nb_dup1]);
	dup2(fd, nb_dup1);
	dup2(pipefd[nb_dup2], nb_dup2);
}

void	mainv2(char **av, char **envp, int *pipefd, pid_t *pid)
{
	int	fd[2];
	int	status;

	pid[0] = fork();
	fd[0] = open(av[1], O_RDONLY);
	if (pid[0] == 0)
	{
		child_process(fd[0], pipefd, 0, 1, av[1]);
		exec_command(av, envp, 2);
	}
	pid[1] = fork();
	if (pid[0] < 0 || pid[1] < 0)
		error("Fork failed\n", 1);
	fd[1] = open(av[4], O_WRONLY | O_TRUNC | O_CREAT, 0644);
	if (pid[1] == 0)
	{
		child_process(fd[1], pipefd, 1, 0, av[4]);
		exec_command(av, envp, 3);
	}
	close(pipefd[0]);
	close(pipefd[1]);
	waitpid(pid[0], NULL, 0);
	waitpid(pid[1], &status, 0);
	close(fd[0]);
	close(fd[1]);
	exit(WEXITSTATUS(status));
}

int	main(int ac, char **av, char **envp)
{
	pid_t	pid[2];
	int		pipefd[2];

	if (pipe(pipefd) == -1)
		return (perror("pipe"), 1);
	if (ac == 5)
		mainv2(av, envp, pipefd, pid);
	else
		error("", 1);
	return (0);
}

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
//         // est 0, ce qui veut dire qu'on est close(pipe_fd[0]);
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

// pid = fork();
// if (argc > 1)
// {
// 	if (pid == -1)
// 	{
// 		perror("fork");
// 		return (1);
// 	}
// 	/* Si pid == 0, alors on est dans le process fils. */
// 	else if (pid == 0)
// 	{
// 		if (execve(argv[1], argv + 1, env) == -1)
// 			perror("execve");
// 		return (1);
// 			/* On termine le fils même si execve fail parce qu'on veut voir que le pid du pere*/
// 	}
// 	/* Sinon, dans le pere. */
// 	else
// 		waitpid(pid, &status, 0); /* Oui,
// 			il faudrait vérifier la valeur de retour... */
// printf("My pid is: %d\n", getpid());