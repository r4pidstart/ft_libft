/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:20:31 by tjo               #+#    #+#             */
/*   Updated: 2022/04/07 21:05:41 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"./libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char		res[12];
	long long	num;
	int			cnt;

	num = n;
	cnt = 0;
	if (num == 0)
		write(fd, "0", 1);
	if (num < 0)
	{
		write(fd, "-", 1);
		num *= -1;
	}
	while (num)
	{
		res[cnt++] = num % 10 + '0';
		num /= 10;
	}
	while (cnt--)
		write(fd, res + cnt, 1);
}
