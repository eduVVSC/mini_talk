/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edvieira <edvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 13:46:02 by edvieira          #+#    #+#             */
/*   Updated: 2024/04/26 19:23:44 by edvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*to_alocate;

	to_alocate = malloc(nmemb * size);
	if (!to_alocate)
		return (NULL);
	ft_bzero(to_alocate, nmemb * size);
	return (to_alocate);
}
