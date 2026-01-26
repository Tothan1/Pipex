/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tle-rhun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 14:06:07 by tle-rhun          #+#    #+#             */
/*   Updated: 2026/01/26 15:40:23 by tle-rhun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

void	error(char *msg_error, int nb_exit)
{
	char	*final_msg_error;

	final_msg_error = ft_strjoin("Pipex: ", msg_error);
	ft_putstr_fd(final_msg_error, 2);
	if (nb_exit != 1)
		free(msg_error);
	free(final_msg_error);
	exit(nb_exit);
}

void	exec_command(char *av, char **envp, char *msg_error)
{
	char	**path;
	char	**argv;
	char	*full_path;
	int		nb_tab_path;

	nb_tab_path = 0;
	while (ft_strncmp(envp[nb_tab_path], "PATH=", 5))
		nb_tab_path++;
	path = ft_split(&envp[nb_tab_path][5], ':');
	nb_tab_path = 0;
	argv = ft_split(av, ' ');
	if (access(argv[0], X_OK) == 0)
		execve(argv[0], argv, envp);
	while (path[nb_tab_path] != NULL)
	{
		full_path = ft_strjoin3(path[nb_tab_path], "/", argv[0]);
		if (access(full_path, X_OK) == 0)
			execve(full_path, argv, envp);
		nb_tab_path++;
		free(full_path);
	}
	msg_error = ft_strjoin(argv[0], ": command not found\n");
	ft_free_tab(argv);
	ft_free_tab(path);
	error(msg_error, 127);
}

void	child_process(t_liste fd, int *pipefd, char **av, char **envp)
{
	char	*msg_error;

	msg_error = NULL;
	if (fd.fd == -1)
	{
		msg_error = ft_strjoin("Pipex: ", av[fd.nb_tab]);
		perror(msg_error);
		free(msg_error);
		close(fd.fd);
		exit(EXIT_FAILURE);
	}
	close(pipefd[fd.nb_dup1]);
	dup2(fd.fd, fd.nb_dup1);
	dup2(pipefd[fd.nb_dup2], fd.nb_dup2);
	close(pipefd[fd.nb_dup2]);
	close(fd.fd);
	exec_command(av[fd.cmd], envp, msg_error);
}

void	mainv2(char **av, char **envp, t_liste fd1, t_liste fd2)
{
	int		status;
	pid_t	pid[2];
	int		pipefd[2];

	if (pipe(pipefd) == -1)
		error("Pipe failed\n", 1);
	pid[0] = fork();
	if (pid[0] == 0)
	{
		fd1.fd = open(av[1], O_RDONLY);
		child_process(fd1, pipefd, av, envp);
	}
	pid[1] = fork();
	if (pid[0] < 0 || pid[1] < 0)
		error("Fork failed\n", 1);
	fd2.fd = open(av[4], O_WRONLY | O_TRUNC | O_CREAT, 0644);
	if (pid[1] == 0)
		child_process(fd2, pipefd, av, envp);
	close(pipefd[0]);
	close(pipefd[1]);
	waitpid(pid[0], NULL, 0);
	waitpid(pid[1], &status, 0);
	close(fd2.fd);
	if (WIFEXITED(status))
		exit(WEXITSTATUS(status));
}

int	main(int ac, char **av, char **envp)
{
	t_liste	fd1;
	t_liste	fd2;

	fd1.nb_dup1 = 0;
	fd1.nb_dup2 = 1;
	fd2.nb_dup1 = 1;
	fd2.nb_dup2 = 0;
	fd1.cmd = 2;
	fd2.cmd = 3;
	fd1.nb_tab = 1;
	fd2.nb_tab = 4;
	if (ac == 5)
		mainv2(av, envp, fd1, fd2);
	else
		return (2);
	return (0);
}
