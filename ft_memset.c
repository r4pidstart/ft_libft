/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 15:55:06 by tjo               #+#    #+#             */
/*   Updated: 2022/04/07 20:51:26 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"./libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	void	*cur;

	cur = b;
	while (len--)
		*(unsigned char *)(cur++) = (unsigned char)c;
	return (b);
}
