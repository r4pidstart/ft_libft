/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 15:14:54 by tjo               #+#    #+#             */
/*   Updated: 2022/04/07 20:52:08 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"./libft.h"

static size_t	min(size_t a, size_t b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	size_t	substr_len;

	if (!s)
		return (0);
	if ((unsigned int)ft_strlen(s) <= start)
	{
		ret = (char *)malloc(sizeof(char) * 1);
		ret[0] = '\0';
		return (ret);
	}
	substr_len = min(len, ft_strlen(s + start));
	ret = (char *)malloc(sizeof(char) * substr_len + 1);
	if (!ret)
		return (0);
	ft_memmove(ret, s + start, substr_len);
	ret[substr_len] = 0;
	return (ret);
}
