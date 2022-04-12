/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 04:50:29 by tjo               #+#    #+#             */
/*   Updated: 2022/04/12 15:13:56 by tjo              ###   ########.fr       */
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

static int	check_mul_overflow(long long ret, int next_digit)
{
	long long	mul_test;
	long long	sum_test;

	mul_test = ret * 10;
	if (mul_test / 10 != ret)
		return (1);
	sum_test = mul_test + next_digit;
	if (sum_test - next_digit != mul_test)
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	char		*cur;
	int			minus_cnt;
	long long	ret;

	cur = (char *)str;
	while (my_isspace(*cur))
		cur++;
	ret = 0;
	minus_cnt = 0;
	if (my_issign(*cur))
	{
		if (*cur == '-')
			minus_cnt++;
		cur++;
	}
	while (ft_isdigit(*cur))
	{
		if (check_mul_overflow(ret, (*(cur) - '0')))
			return (minus_cnt - 1);
		ret = ret * 10 + (*(cur++) - '0');
	}
	if (minus_cnt)
		ret *= -1;
	return (ret);
}
