/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edvieira <edvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 13:48:20 by edvieira          #+#    #+#             */
/*   Updated: 2024/04/18 15:21:30 by edvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int ascii_num)
{
	if (ascii_num >= 97 && ascii_num <= 122)
		return (ascii_num - 32);
	return (ascii_num);
}
