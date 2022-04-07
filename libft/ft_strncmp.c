/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 15:41:33 by tjo               #+#    #+#             */
/*   Updated: 2022/04/07 20:51:58 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"./libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	cur;

	cur = 0;
	while (cur < n)
	{
		if ((s1[cur] == '\0' || s2[cur] == '\0') || s1[cur] != s2[cur])
			return ((unsigned char)s1[cur] - (unsigned char)s2[cur]);
		cur++;
	}
	return (0);
}
