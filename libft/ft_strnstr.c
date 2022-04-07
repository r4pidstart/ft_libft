/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 15:07:24 by tjo               #+#    #+#             */
/*   Updated: 2022/04/07 20:52:01 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"./libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	long long	cur_h;
	long long	cur_n;
	long long	len_h;
	long long	len_n;
	int			flag;

	if (!(*needle))
		return ((char *)haystack);
	cur_h = -1;
	len_h = ft_strlen(haystack);
	len_n = ft_strlen(needle);
	while (++cur_h + (size_t)len_n - 1 < len && cur_h + len_n - 1 < len_h)
	{
		cur_n = -1;
		flag = 1;
		while (++cur_n < len_n)
		{
			if (haystack[cur_h + cur_n] != needle[cur_n])
				flag = 0;
		}
		if (flag)
			return ((char *)haystack + cur_h);
	}
	return (0);
}
