/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edvieira <edvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 08:43:04 by edvieira          #+#    #+#             */
/*   Updated: 2024/07/29 17:27:42 by edvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <signal.h>
# include <stdlib.h>
# include <unistd.h>
# include "../libs/libft/libft.h"
# include "../libs/ft_printf/ft_printf.h"

void	send_string(int pid, char *str, int i, int j);
void	itoa_binary(int nb, char *binary);
void	signal_handler(int signum, siginfo_t *info, void *context);
void	c_in_bin(int c, char *bin);

#endif
