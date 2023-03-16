/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 14:52:36 by tjo               #+#    #+#             */
/*   Updated: 2023/03/16 23:16:11 by tjo              ###   ########.fr       */
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

static t_list	*new_node(void *content)
{
	t_list	*node;

	if (!content)
		return (0);
	node = ft_lstnew(content);
	if (!node)
		free(content);
	return (node);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*dummy;
	t_list	*tmp;
	t_list	*cur;

	dummy = ft_lstnew(NULL);
	if (!dummy)
		return (0);
	cur = dummy;
	while (lst)
	{
		tmp = new_node(f(lst->content));
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
