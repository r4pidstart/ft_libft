/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 04:48:33 by tjo               #+#    #+#             */
/*   Updated: 2022/04/07 20:51:43 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"./libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	target_len;
	char	*ret;

	target_len = ft_strlen(s1);
	ret = (char *)malloc(sizeof(char) * target_len + 1);
	if (!ret)
		return (0);
	ft_memmove(ret, s1, target_len);
	ret[target_len] = '\0';
	return (ret);
}
