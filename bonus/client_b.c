/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edvieira <edvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 15:40:57 by edvieira          #+#    #+#             */
/*   Updated: 2024/08/02 16:43:46 by edvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk_bonus.h"

int	u_sleep_time(int len)
{
	if (len >= 100000)
		return (1000);
	if (len > 20000)
		return (500);
	if (len > 10000)
		return (250);
	if (len >= 1000)
		return (100);
	else
		return (42);
}

void	s_h(int signum, siginfo_t *info, void *context)
{
	(void) signum;
	(void) info;
	(void) context;
	ft_printf("Str was received in the server");
	exit (EXIT_SUCCESS);
}

void	send_string(int pid, char *str, int i, int j)
{
	char	c;
	int		len;

	len = ft_strlen(str);
	while (str[++i])
	{
		c = str[i];
		while (--j >= 0)
		{
			if (c >> j & 1)
				kill(pid, SIGUSR1);
			else
				kill(pid, SIGUSR2);
			usleep(u_sleep_time(len));
		}
		j = 8;
	}
	while (--j >= 0)
	{
		kill(pid, SIGUSR2);
		usleep(42);
	}
}

int	main(int ac, char **av)
{
	struct sigaction	sa;

	sigemptyset(&sa.sa_mask);
	sa.sa_flags = SA_SIGINFO;
	sa.sa_sigaction = &s_h;
	sigaction(SIGUSR1, &sa, NULL);
	if (ac != 3)
		return (ft_printf("Wrong number of arguments!"));
	send_string(ft_atoi(av[1]), av[2], -1, 8);
	return (0);
}
