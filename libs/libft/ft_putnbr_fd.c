/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edvieira <edvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:59:16 by edvieira          #+#    #+#             */
/*   Updated: 2024/05/23 18:15:39 by edvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	num_in_char;
	int		check;

	check = 0;
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		check = 1;
	}
	if (n < 0 && check == 0)
	{
		n = -n;
		write(fd, "-", 1);
	}
	if (n > 9)
	{
		ft_putnbr_fd((n / 10), fd);
		num_in_char = '0' + (n % 10);
		write(fd, &num_in_char, 1);
	}
	if (n <= 9 && n >= 0)
	{
		num_in_char = '0' + n;
		write(fd, &num_in_char, 1);
	}
}
