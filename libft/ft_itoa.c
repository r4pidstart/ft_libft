/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 14:54:06 by tjo               #+#    #+#             */
/*   Updated: 2022/04/07 20:50:54 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"./libft.h"

int	get_length(long long n)
{
	int	ret;

	ret = 0;
	if (n == 0)
		ret++;
	if (n < 0)
	{
		ret++;
		n *= -1;
	}
	while (n)
	{
		ret++;
		n /= 10;
	}
	return (ret);
}

char	*ft_itoa(int n)
{
	long long	tmp;
	char		*ret;
	int			cur;

	ret = (char *)malloc(sizeof(char) * get_length(n) + 1);
	if (!ret)
		return (0);
	tmp = n;
	cur = 0;
	if (n < 0)
	{
		ret[cur++] = '-';
		tmp *= -1;
	}
	if (n == 0)
		ret[cur++] = '0';
	cur = get_length(n);
	ret[cur] = '\0';
	while (tmp)
	{
		ret[--cur] = tmp % 10 + '0';
		tmp /= 10;
	}
	return (ret);
}
