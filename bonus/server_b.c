/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edvieira <edvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 15:41:01 by edvieira          #+#    #+#             */
/*   Updated: 2024/08/02 16:42:31 by edvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"

char	*join_c(char *s1, char c)
{
	char	*new_str;
	int		i;

	i = -1;
	new_str = ft_calloc(1, (ft_strlen(s1) + 2));
	if (!new_str)
		return (NULL);
	while (s1[++i] != '\0')
		new_str[i] = s1[i];
	new_str[i] = c;
	free(s1);
	return (new_str);
}

int	full_string(char c, siginfo_t *info)
{
	static char	*buffer;

	if (!buffer)
	{
		buffer = ft_calloc(sizeof(char), 1);
		if (!buffer)
			exit (EXIT_FAILURE);
	}
	if (c == 0)
	{
		ft_printf("%s\n", buffer);
		kill(info->si_pid, SIGUSR1);
		free(buffer);
		buffer = NULL;
	}
	else
		buffer = join_c(buffer, c);
	return (0);
}

void	signal_handler(int signum, siginfo_t *info, void *context)
{
	static char	c;
	static int	i = 0;

	(void) context;
	if (signum == SIGUSR1)
		c = c << 1 | 1;
	else
		c = c << 1;
	i++;
	if (i == 8)
		i = full_string(c, info);
}

int	main(void)
{
	struct sigaction	sa;

	sigemptyset(&sa.sa_mask);
	sa.sa_flags = SA_SIGINFO;
	sa.sa_sigaction = &signal_handler;
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
	ft_printf("Myserver PID:%d\n", getpid());
	while (1)
		pause ();
}
