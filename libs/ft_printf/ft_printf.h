/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edvieira <edvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 16:21:35 by edvieira          #+#    #+#             */
/*   Updated: 2024/05/23 16:21:35 by edvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

void	ft_unsignedint(unsigned int nbr);
void	ft_putnbr(int nbr);
void	ft_printlowerhexa(unsigned int nbr);
void	ft_printupperhexa(unsigned int nbr);

int		ft_printpointer(unsigned long memory_num);
int		ft_printf(const char *format, ...);
int		ft_putchar(const char c);
int		ft_putstr(const char *str);

#endif
