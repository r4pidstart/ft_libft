/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 15:33:51 by tjo               #+#    #+#             */
/*   Updated: 2022/04/07 15:08:12 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	char			*cur;
	unsigned char	target;

	cur = (char *)s - 1;
	target = (unsigned char)c;
	while (cur++)
	{
		if (*cur == target)
			return (cur);
		if (*cur == '\0')
		{
			if (c == '\0')
				return (cur);
			else
				return (0);
		}
	}
	return (0);
}
