/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edvieira <edvieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 14:46:46 by edvieira          #+#    #+#             */
/*   Updated: 2024/05/16 16:16:10 by edvieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*temp;
	void	*content;

	result = NULL;
	if (!lst || !f || !del)
		return (0);
	while (lst)
	{
		content = f(lst->content);
		temp = ft_lstnew(content);
		if (temp == NULL)
		{
			free (content);
			ft_lstclear(&result, del);
			return (0);
		}
		ft_lstadd_back(&result, temp);
		lst = lst->next;
	}
	return (result);
}
