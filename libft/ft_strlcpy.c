/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 15:13:39 by tjo               #+#    #+#             */
/*   Updated: 2022/04/08 00:43:27 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"./libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t const	src_len = ft_strlen(src);
	size_t			cur;

	if (dstsize == 0)
		return (src_len);
	cur = 0;
	while (cur < src_len && cur < dstsize - 1)
	{
		dst[cur] = src[cur];
		cur++;
	}
	dst[cur] = '\0';
	return (src_len);
}
