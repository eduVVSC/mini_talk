/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edvieira <edvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 13:48:14 by edvieira          #+#    #+#             */
/*   Updated: 2024/04/18 15:21:28 by edvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int ascii_num)
{
	if (ascii_num >= 65 && ascii_num <= 90)
		return (ascii_num + 32);
	return (ascii_num);
}
