/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edvieira <edvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 13:59:02 by edvieira          #+#    #+#             */
/*   Updated: 2024/04/26 13:49:13 by edvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	struct s_list	*new_s_list;

	new_s_list = (struct s_list *)malloc(sizeof(struct s_list));
	if (!new_s_list)
		return (NULL);
	new_s_list->content = (void *)content;
	new_s_list->next = NULL;
	return (new_s_list);
}
