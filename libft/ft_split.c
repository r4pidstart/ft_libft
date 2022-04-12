/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 15:47:37 by tjo               #+#    #+#             */
/*   Updated: 2022/04/12 15:28:24 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"./libft.h"

static size_t	get_substr_cnt(char	*s_cpy, char c)
{
	size_t	cur;
	size_t	ret;

	cur = 0;
	ret = 0;
	while (s_cpy[cur])
	{
		if (s_cpy[cur] == c)
			s_cpy[cur] = 0;
		if (s_cpy[cur] && (cur == 0 || !s_cpy[cur - 1]))
			ret++;
		cur++;
	}
	return (ret);
}

static char	**map_substr(char *s_cpy, size_t ret_cnt, size_t s_len)
{
	char	**ret;
	size_t	cur;
	size_t	ret_cur;

	cur = 0;
	ret_cur = 0;
	ret = (char **)malloc(sizeof(char *) * (ret_cnt + 1));
	if (!ret)
		return (0);
	while (cur < s_len)
	{
		if (s_cpy[cur] && (cur == 0 || !s_cpy[cur - 1]))
			ret[ret_cur++] = ft_strdup(s_cpy + cur);
		cur++;
	}
	ret[ret_cur] = 0;
	free(s_cpy);
	return (ret);
}

char	**ft_split(char const *s, char c)
{
	char	*s_cpy;
	size_t	s_len;
	size_t	ret_cnt;

	if (!s)
		return (0);
	s_len = ft_strlen(s);
	s_cpy = ft_strdup(s);
	ret_cnt = get_substr_cnt(s_cpy, c);
	return (map_substr(s_cpy, ret_cnt, s_len));
}
