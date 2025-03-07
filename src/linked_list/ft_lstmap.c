/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cgrasser <cgrasser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 18:31:38 by cgrasser          #+#    #+#             */
/*   Updated: 2025/03/07 18:34:08 by cgrasser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*map;
	void	*temp_content;
	t_list	*temp_new;

	map = NULL;
	while (lst)
	{
		temp_content = f(lst->content);
		temp_new = ft_lstnew(temp_content);
		if (!temp_new)
		{
			ft_lstclear(&map, del);
			del(temp_content);
			return (NULL);
		}
		ft_lstadd_back(&map, temp_new);
		lst = lst->next;
	}
	return (map);
}
