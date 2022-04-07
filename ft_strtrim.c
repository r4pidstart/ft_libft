/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 15:30:06 by tjo               #+#    #+#             */
/*   Updated: 2022/04/07 20:52:05 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"./libft.h"

static int	char_check(const char c, char *set)
{
	set--;
	while (*(++set) != '\0')
		if (c == *set)
			return (1);
	return (0);
}

static void	get_cur(size_t *lcur, size_t *rcur, char const *s1, char const *set)
{
	size_t	s_len;

	s_len = ft_strlen(s1);
	*lcur = 0;
	*rcur = s_len - 1;
	while (1)
	{
		if (!(*lcur < *rcur))
		{
			if (char_check(s1[*lcur], (char *)set))
				(*lcur)++;
			return ;
		}
		else if (*lcur < s_len && char_check(s1[*lcur], (char *)set))
			(*lcur)++;
		else if (0 <= *rcur && char_check(s1[*rcur], (char *)set))
			(*rcur)--;
		else
			return ;
	}
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ret;
	size_t	ret_len;
	size_t	lcur;
	size_t	rcur;

	if (!s1 || !set)
		return (0);
	get_cur(&lcur, &rcur, s1, set);
	ret_len = rcur - lcur + 1;
	ret = (char *)malloc(sizeof(char) * ret_len + 1);
	if (!ret)
		return (0);
	ft_memmove(ret, s1 + lcur, ret_len);
	ret[ret_len] = '\0';
	return (ret);
}
