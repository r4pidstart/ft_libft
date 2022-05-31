/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 15:00:13 by tjo               #+#    #+#             */
/*   Updated: 2022/04/07 20:51:23 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"./libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	cur;

	if (dst == src)
		return (dst);
	cur = -1;
	while (++cur < n)
		*(char *)(dst + cur) = *((char *)src + (cur));
	return (dst);
}
