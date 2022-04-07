/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 15:23:51 by tjo               #+#    #+#             */
/*   Updated: 2022/04/07 20:51:50 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"./libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	cur;

	src_len = ft_strlen(src);
	dst_len = 0;
	while (dst[dst_len])
	{
		if (dstsize < dst_len)
			return (dstsize + src_len);
		dst_len++;
	}
	if (dstsize < dst_len)
		return (dstsize + src_len);
	cur = dst_len;
	while (cur - dst_len < src_len && cur + 1 < dstsize)
	{
		dst[cur] = src[cur - dst_len];
		cur++;
	}
	dst[cur] = '\0';
	return (dst_len + src_len);
}
