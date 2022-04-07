/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:32:01 by tjo               #+#    #+#             */
/*   Updated: 2022/04/07 20:51:16 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"./libft.h"

int	ft_lstsize(t_list *lst)
{
	int		cnt;
	t_list	*cur;

	if (!lst)
		return (0);
	cnt = 0;
	cur = lst;
	while (cur)
	{
		cur = cur->next;
		cnt++;
	}
	return (cnt);
}
