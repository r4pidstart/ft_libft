# Libft - Your very first own library

Summary: This project aims to code a C library regrouping usual functions that you’ll be use for all your next projects.

Version : 15

## Part 1 - LIbc functions

<!-- MARKDOWN-AUTO-DOCS:START (CODE:src=./libft/ft_isalpha.c) -->
<!-- The below code snippet is automatically added from ./libft/ft_isalpha.c -->
```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 15:09:42 by tjo               #+#    #+#             */
/*   Updated: 2022/03/10 15:57:06 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	return (('A' <= c && c <= 'Z') || ('a' <= c && c <= 'z'));
}
```
<!-- MARKDOWN-AUTO-DOCS:END -->
