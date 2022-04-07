/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 14:52:36 by tjo               #+#    #+#             */
/*   Updated: 2022/04/07 20:51:09 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"./libft.h"

static void	free_nodes(t_list *dummy, void (*del)(void *))
{
	t_list	*cur;
	t_list	*tmp;

	cur = dummy->next;
	while (cur)
	{
		tmp = cur;
		cur = cur->next;
		del(tmp->content);
		free(tmp);
	}
	free(dummy);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*dummy;
	t_list	*tmp;
	t_list	*cur;

	dummy = ft_lstnew(NULL);
	cur = dummy;
	while (lst)
	{
		tmp = ft_lstnew(f(lst->content));
		if (!tmp)
		{
			free_nodes(dummy, del);
			return (0);
		}
		cur->next = tmp;
		cur = cur->next;
		lst = lst->next;
	}
	cur = dummy->next;
	free(dummy);
	return (cur);
}
