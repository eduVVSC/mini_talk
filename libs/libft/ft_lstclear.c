/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edvieira <edvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 13:32:17 by edvieira          #+#    #+#             */
/*   Updated: 2024/05/01 16:12:45 by edvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*to_delete;
	t_list	*next_del;

	to_delete = *lst;
	next_del = *lst;
	if (!lst || !(*del) || !(*lst))
		return ;
	while (to_delete)
	{
		next_del = next_del->next;
		(del)(to_delete->content);
		free(to_delete);
		to_delete = next_del;
	}
	*lst = NULL;
}
