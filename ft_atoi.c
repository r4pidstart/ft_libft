/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 04:50:29 by tjo               #+#    #+#             */
/*   Updated: 2022/04/07 20:50:29 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"./libft.h"

static int	my_isspace(int c)
{
	return ((9 <= c && c <= 13) || c == 20 || c == 32);
}

static int	my_issign(int c)
{
	return ('+' == c || '-' == c);
}

int	ft_atoi(const char *str)
{
	char		*cur;
	size_t		minus_cnt;
	long long	ret;

	cur = (char *)str;
	minus_cnt = 0;
	while (my_isspace(*cur))
		cur++;
	ret = 0;
	if (my_issign(*cur))
	{
		if (*cur == '-')
			minus_cnt++;
		cur++;
	}
	while (ft_isdigit(*cur))
		ret = ret * 10 + (*(cur++) - '0');
	if (minus_cnt & 1)
		ret *= -1;
	return (ret);
}
