/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 15:33:51 by tjo               #+#    #+#             */
/*   Updated: 2022/04/07 15:08:49 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	char			*cur;
	char			*ret;
	unsigned char	target;

	cur = (char *)s - 1;
	target = (unsigned char)c;
	ret = 0;
	while (cur++)
	{
		if (*cur == target)
			ret = cur;
		if (*cur == '\0')
			break ;
	}
	return (ret);
}
