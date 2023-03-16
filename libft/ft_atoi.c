/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 04:50:29 by tjo               #+#    #+#             */
/*   Updated: 2023/03/16 23:45:30 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"./libft.h"

static int	my_isspace(int c)
{
	return ((9 <= c && c <= 13) || c == 32);
}

static int	my_issign(int c)
{
	return ('+' == c || '-' == c);
}

static int	skip_ws_and_sign(char **cur)
{
	int	flag;

	while (my_isspace(**cur))
		(*cur)++;
	flag = 0;
	if (my_issign(**cur))
	{
		if (**cur == '-')
			flag++;
		(*cur)++;
	}
	if (flag & 1)
		return (-1);
	return (1);
}

int	ft_atoi(const char *str)
{
	char			*cur;
	int				sign;
	unsigned long	ret;
	unsigned long	abs_max;

	cur = (char *)str;
	ret = 0;
	sign = skip_ws_and_sign(&cur);
	abs_max = LONG_MAX + (sign == -1);
	while (ft_isdigit(*cur))
	{
		if (abs_max / 10 < ret)
		{
			ret = abs_max;
			break ;
		}
		ret = ret * 10 + (*(cur++) - '0');
		if (ret > abs_max)
		{
			ret = abs_max;
			break ;
		}
	}
	return (ret * sign);
}
