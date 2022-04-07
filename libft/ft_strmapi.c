/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:07:09 by tjo               #+#    #+#             */
/*   Updated: 2022/04/07 20:51:56 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"./libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ret;
	size_t	s_len;
	size_t	cur;

	if (!s || !f)
		return (0);
	cur = 0;
	s_len = ft_strlen(s);
	ret = (char *)malloc(sizeof(char) * s_len + 1);
	if (!ret)
		return (0);
	while (cur < s_len)
	{
		ret[cur] = f(cur, s[cur]);
		cur++;
	}
	ret[cur] = 0;
	return (ret);
}
