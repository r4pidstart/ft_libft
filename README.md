# Libft - Your very first own library

### This project aims to code a C library regrouping usual functions that you’ll be use for all your next projects.
*Version : 15*

이 밑은, 각 함수에 대해서, 간략하게 해당 함수의 코드와 함께 정리한 내용들입니다.

## Part 1 - Libc functions

*In this first part, you must re-code a set of the libc functions, as defined in their
man.*

<details>
    <summary>ft_isalpha – alphabetic character test</summary>

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
* 인자가 알파벳에 속한다면 1을 리턴하고, 아니라면 0을 리턴한다.

- - -
</details>

<details>
    <summary>ft_isdigit – decimal-digit character test</summary>

<!-- MARKDOWN-AUTO-DOCS:START (CODE:src=./libft/ft_isdigit.c) -->
<!-- The below code snippet is automatically added from ./libft/ft_isdigit.c -->
```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 15:09:42 by tjo               #+#    #+#             */
/*   Updated: 2022/03/10 15:57:07 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	return ('0' <= c && c <= '9');
}
```
<!-- MARKDOWN-AUTO-DOCS:END -->
* 인자가 10진수 숫자에 속한다면 1을 리턴하고, 아니라면 0을 리턴한다.
*
- - -
</details>

<details>
    <summary>ft_isalnum – alphaanumeric character test</summary>

<!-- MARKDOWN-AUTO-DOCS:START (CODE:src=./libft/ft_isalnum.c) -->
<!-- The below code snippet is automatically added from ./libft/ft_isalnum.c -->
```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 15:09:42 by tjo               #+#    #+#             */
/*   Updated: 2022/03/10 15:56:53 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	return (('0' <= c && c <= '9') \
	|| ('a' <= c && c <= 'z') || ('A' <= c && c <= 'Z'));
}
```
<!-- MARKDOWN-AUTO-DOCS:END -->
* 인자가 알파벳이나, 10진수 숫자에 속한다면 1을 리턴하고, 아니라면 0을 리턴한다.

- - -
</details>

<details>
    <summary>ft_isacii – test for ASCII character</summary>

<!-- MARKDOWN-AUTO-DOCS:START (CODE:src=./libft/ft_isascii.c) -->
<!-- The below code snippet is automatically added from ./libft/ft_isascii.c -->
```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 15:51:01 by tjo               #+#    #+#             */
/*   Updated: 2022/03/10 15:51:52 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	return (0 <= c && c <= 0177);
}
```
<!-- MARKDOWN-AUTO-DOCS:END -->
* 인자가 아스키코드에 속한다면 1을 리턴하고, 아니라면 0을 리턴한다.

- - -
</details>

<details>
    <summary>ft_isprint – printing character test (space character inclusive)</summary>

<!-- MARKDOWN-AUTO-DOCS:START (CODE:src=./libft/ft_isprint.c) -->
<!-- The below code snippet is automatically added from ./libft/ft_isprint.c -->
```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 15:52:10 by tjo               #+#    #+#             */
/*   Updated: 2022/03/10 15:53:37 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	return (040 <= c && c <= 0176);
}
```
<!-- MARKDOWN-AUTO-DOCS:END -->
* 인자가 출력가능한 문자에 속한다면 1을 리턴하고, 아니라면 0을 리턴한다.

- - -
</details>

<details>
    <summary>ft_strlen – find length of string</summary>

<!-- MARKDOWN-AUTO-DOCS:START (CODE:src=./libft/ft_strlen.c) -->
<!-- The below code snippet is automatically added from ./libft/ft_strlen.c -->
```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 15:53:54 by tjo               #+#    #+#             */
/*   Updated: 2022/03/24 15:04:23 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(const char *s)
{
	int	n;

	n = 0;
	while (s[n])
		n++;
	return (n);
}
```
<!-- MARKDOWN-AUTO-DOCS:END -->
* 인자로 주어진 스트링의 길이를 리턴한다
* 스트링의 마지막 글자가 널 문자인 것을 이용해서, 문자열의 길이를 찾는다.

- - -
</details>

<details>
    <summary>ft_memset – fill a byte string with a byte value</summary>

<!-- MARKDOWN-AUTO-DOCS:START (CODE:src=./libft/ft_memset.c) -->
<!-- The below code snippet is automatically added from ./libft/ft_memset.c -->
```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 15:55:06 by tjo               #+#    #+#             */
/*   Updated: 2022/04/07 20:51:26 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"./libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*cur;

	cur = (char *)b;
	while (len--)
		*(cur++) = (char)c;
	return (b);
}
```
<!-- MARKDOWN-AUTO-DOCS:END -->
* 인자로 주어진 포인터 b부터, *len* 만큼의 바이트를 c로 채운 후 그 주소의 포인터를 리턴한다.
* 메모리를 한 바이트씩 채우기 위해, *void*\*를 *char*\*로 변환해서 사용했다.

- - -
</details>

<details>
    <summary>ft_bzero – write zeroes to a byte string</summary>

<!-- MARKDOWN-AUTO-DOCS:START (CODE:src=./libft/ft_bzero.c) -->
<!-- The below code snippet is automatically added from ./libft/ft_bzero.c -->
```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 14:58:52 by tjo               #+#    #+#             */
/*   Updated: 2022/04/07 20:50:42 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"./libft.h"

void	ft_bzero(void *s, size_t n)
{
	while (n--)
		*(char *)(s++) = 0;
}
```
<!-- MARKDOWN-AUTO-DOCS:END -->
* 인자로 주어진 포인터 *s*부터, *n* 만큼의 바이트를 0으로 채운다.
* 메모리를 한 바이트씩 채우기 위해, *void*\*를 *char*\*로 변환해서 사용했다.

- - -
</details>

<details>
    <summary>ft_memcpy – copy memory area</summary>

<!-- MARKDOWN-AUTO-DOCS:START (CODE:src=./libft/ft_memcpy.c) -->
<!-- The below code snippet is automatically added from ./libft/ft_memcpy.c -->
```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 15:00:13 by tjo               #+#    #+#             */
/*   Updated: 2022/04/07 20:51:23 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"./libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	cur;

	if (!dst && !src)
		return (0);
	cur = -1;
	while (++cur < n)
		*(char *)(dst + cur) = *((char *)src + (cur));
	return (dst);
}
```
<!-- MARKDOWN-AUTO-DOCS:END -->
* *src* 포인터로부터 *n* 만큼의 바이트를, *dst* 포인터부터 붙여넣은 후 그 주소의 포인터를 리턴한다.
* 메모리를 한 바이트씩 채우기 위해, *void*\*를 *char*\*로 변환해서 사용했다.

- - -
</details>

<details>
    <summary>ft_memmove – copy byte string</summary>

<!-- MARKDOWN-AUTO-DOCS:START (CODE:src=./libft/ft_memmove.c) -->
<!-- The below code snippet is automatically added from ./libft/ft_memmove.c -->
```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 15:10:24 by tjo               #+#    #+#             */
/*   Updated: 2022/04/07 23:27:49 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"./libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	cur;

	if (!dst && !src)
		return (0);
	if (dst < src)
	{
		cur = 0;
		while (0 <= cur && cur < len)
		{
			*((char *)dst + cur) = *((char *)src + cur);
			cur++;
		}
	}
	else
	{
		cur = len - 1;
		while (0 <= cur && cur < len)
		{
			*((char *)dst + cur) = *((char *)src + cur);
			cur--;
		}
	}
	return (dst);
}
```
<!-- MARKDOWN-AUTO-DOCS:END -->
* *src* 포인터로부터 *n* 만큼의 바이트를, *dst* 포인터부터 붙여넣은 후 그 주소의 포인터를 리턴한다.
* 메모리를 한 바이트씩 채우기 위해, *void*\*를 *char*\*로 변환해서 사용했다.
* **ft_memcpy**와 다른 점은, **ft_memmove**는 두 메모리가 겹쳐있더라도 문제가 생기지 않는 방식으로 복사한다는 점이다.
* *dst*가 *src*보다 앞 쪽 메모리에 위치한다면 *src*의 앞부터 순차적으로 복사하며, 반대의 경우라면 *src*의 뒤부터 순차적으로 복사하여 데이터가 덮어씌워지는 것을 방지한다.

- - -
</details>

<details>
    <summary>ft_strlcpy – size-bounded string copying and concatenation</summary>

<!-- MARKDOWN-AUTO-DOCS:START (CODE:src=./libft/ft_strlcpy.c) -->
<!-- The below code snippet is automatically added from ./libft/ft_strlcpy.c -->
```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 15:13:39 by tjo               #+#    #+#             */
/*   Updated: 2022/04/08 00:43:27 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"./libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t const	src_len = ft_strlen(src);
	size_t			cur;

	if (dstsize == 0)
		return (src_len);
	cur = 0;
	while (cur < src_len && cur < dstsize - 1)
	{
		dst[cur] = src[cur];
		cur++;
	}
	dst[cur] = '\0';
	return (src_len);
}
```
<!-- MARKDOWN-AUTO-DOCS:END -->
* *src* 스트링을, *dst* 스트링의 위치에 복사한 뒤 *src* 스트링의 길이를 리턴한다.
* *dstsize*는 *dst* 포인터에 할당된 공간의 크기를 의미한다. 만약 *dst* 스트링이 *dstsize*보다 크다면, 해당 스트링은 비정상적인 스트링인 것이다.
* 리턴값을 통해 스트링이 온전히 복사되었는지 확인할 수 있다. 만약 *dstsize*보다 리턴값이 크다면, *src* 스트링이 일부 잘려서 복사된 것이다.
* *dstsize*가 1 이상이고, 인자로 주어진 *dst* 스트링이 정상이라면, 수정된 *dst* 스트링은 NULL-termination이 보장된다.

- - -
</details>

<details>
    <summary>ft_strlcat – size-bounded string copying and concatenation</summary>

<!-- MARKDOWN-AUTO-DOCS:START (CODE:src=./libft/ft_strlcat.c) -->
<!-- The below code snippet is automatically added from ./libft/ft_strlcat.c -->
```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 15:23:51 by tjo               #+#    #+#             */
/*   Updated: 2022/04/07 20:51:50 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"./libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	cur;

	src_len = ft_strlen(src);
	dst_len = 0;
	while (dst[dst_len])
	{
		if (dstsize < dst_len)
			return (dstsize + src_len);
		dst_len++;
	}
	if (dstsize < dst_len)
		return (dstsize + src_len);
	cur = dst_len;
	while (cur - dst_len < src_len && cur + 1 < dstsize)
	{
		dst[cur] = src[cur - dst_len];
		cur++;
	}
	dst[cur] = '\0';
	return (dst_len + src_len);
}
```
<!-- MARKDOWN-AUTO-DOCS:END -->
* *src* 스트링을, *dst* 스트링의 뒤부터 이어붙인 후, 만들어 질 스트링의 길이를 리턴한다.
* *dstsize*는 *dst* 포인터에 할당된 공간의 크기를 의미한다. 만약 *dst* 스트링이 *dstsize*보다 크다면, 해당 스트링은 비정상적인 스트링인 것이다.
* 리턴값을 통해 스트링이 온전히 복사되었는지 확인할 수 있다. 만약 *dstsize*보다 리턴값이 크다면, *src* 스트링이 일부 잘려서 복사된 것이다.
* dstsize가 1 이상이고, 인자로 주어진 *dst* 스트링이 정상이라면, 수정된 *dst* 스트링은 NULL-termination이 보장된다.

- - -
</details>

<details>
    <summary>ft_toupper – lower case to upper case letter conversion</summary>

<!-- MARKDOWN-AUTO-DOCS:START (CODE:src=./libft/ft_toupper.c) -->
<!-- The below code snippet is automatically added from ./libft/ft_toupper.c -->
```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 15:30:37 by tjo               #+#    #+#             */
/*   Updated: 2022/03/22 15:32:55 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if ('a' <= c && c <= 'z')
		c += 'A' - 'a';
	return (c);
}
```
<!-- MARKDOWN-AUTO-DOCS:END -->
* 인자가 소문자라면, 대문자로 바꾸어 리턴한다.

- - -
</details>

<details>
    <summary>ft_tolower – upper case to lower case letter conversion</summary>

<!-- MARKDOWN-AUTO-DOCS:START (CODE:src=./libft/ft_tolower.c) -->
<!-- The below code snippet is automatically added from ./libft/ft_tolower.c -->
```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 15:30:37 by tjo               #+#    #+#             */
/*   Updated: 2022/03/22 15:32:49 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if ('A' <= c && c <= 'Z')
		c += 'a' - 'A';
	return (c);
}
```
<!-- MARKDOWN-AUTO-DOCS:END -->
* 인자가 대문자라면, 소문자로 바꾸어 리턴한다.

- - -
</details>

<details>
    <summary>ft_strchr – locate character in string</summary>

<!-- MARKDOWN-AUTO-DOCS:START (CODE:src=./libft/ft_strchr.c) -->
<!-- The below code snippet is automatically added from ./libft/ft_strchr.c -->
```c
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
```
<!-- MARKDOWN-AUTO-DOCS:END -->
* 인자로 주어진 *s* 스트링에서, 처음으로 등장하는 *c*의 주소를 리턴한다. 만약 *c*가 존재하지 않는다면 NULL을 리턴한다.

- - -
</details>

<details>
    <summary>ft_strrchr – locate character in string</summary>

<!-- MARKDOWN-AUTO-DOCS:START (CODE:src=./libft/ft_strrchr.c) -->
<!-- The below code snippet is automatically added from ./libft/ft_strrchr.c -->
```c
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
```
<!-- MARKDOWN-AUTO-DOCS:END -->
* 인자로 주어진 *s* 스트링에서, 마지막으로 등장하는 *c*의 주소를 리턴한다. 만약 *c*가 존재하지 않는다면 NULL을 리턴한다.

- - -
</details>

<details>
    <summary>ft_memcmp – compare byte string</summary>

<!-- MARKDOWN-AUTO-DOCS:START (CODE:src=./libft/ft_memcmp.c) -->
<!-- The below code snippet is automatically added from ./libft/ft_memcmp.c -->
```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 14:54:13 by tjo               #+#    #+#             */
/*   Updated: 2022/04/07 23:50:27 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"./libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)s1 + i) != *((unsigned char *)s2 + i))
			return (*((unsigned char *)s1 + i) - *((unsigned char *)s2 + i));
		i++;
	}
	return (0);
}
```
<!-- MARKDOWN-AUTO-DOCS:END -->
* 인자로 주어진 포인터 *s1*, *s2*부터 *n*만큼의 바이트를 *unsigned char*로 비교한다.
* 두 메모리의 값이 일치한다면 0을 리턴하고, 아니라면 첫 번째로 다른 바이트의 차이를 리턴한다.
* 한 바이트씩 비교하기 위해 *void*\*를 *unsigned char*\*로 변환해서 사용했다.

- - -
</details>

<details>
    <summary>ft_strnstr – locate a substring in a string</summary>

<!-- MARKDOWN-AUTO-DOCS:START (CODE:src=./libft/ft_strnstr.c) -->
<!-- The below code snippet is automatically added from ./libft/ft_strnstr.c -->
```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 15:07:24 by tjo               #+#    #+#             */
/*   Updated: 2022/04/07 20:52:01 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"./libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	long long	cur_h;
	long long	cur_n;
	long long	len_h;
	long long	len_n;
	int			flag;

	if (!(*needle))
		return ((char *)haystack);
	cur_h = -1;
	len_h = ft_strlen(haystack);
	len_n = ft_strlen(needle);
	while (++cur_h + (size_t)len_n - 1 < len && cur_h + len_n - 1 < len_h)
	{
		cur_n = -1;
		flag = 1;
		while (++cur_n < len_n)
		{
			if (haystack[cur_h + cur_n] != needle[cur_n])
				flag = 0;
		}
		if (flag)
			return ((char *)haystack + cur_h);
	}
	return (0);
}
```
<!-- MARKDOWN-AUTO-DOCS:END -->
* *haystack* 문자열의, *needle* 문자열을 찾아 그 주소를 리턴한다. 최대 *len* 글자까지만 비교한다.
* 만약 *needle* 문자열이 빈 문자열이라면, *haystack* 문자열의 주소를 리턴하며, *needle* 문자열이 존재하지 않는다면 NULL을 리턴한다.

- - -
</details>

<details>
    <summary>ft_atoi – convert ASCII string to integer</summary>

<!-- MARKDOWN-AUTO-DOCS:START (CODE:src=./libft/ft_atoi.c) -->
<!-- The below code snippet is automatically added from ./libft/ft_atoi.c -->
```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 04:50:29 by tjo               #+#    #+#             */
/*   Updated: 2022/04/14 14:31:36 by tjo              ###   ########.fr       */
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

static int	check_overflow(long long ret, int next_digit)
{
	long long	lim;

	lim = (INT64_MAX - next_digit) / 10;
	return (lim < ret);
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
		if (check_overflow(ret, (*(cur) - '0')))
			return (minus_cnt - 1);
		ret = ret * 10 + (*(cur++) - '0');
	}
	if (minus_cnt)
		ret *= -1;
	return (ret);
}
```
<!-- MARKDOWN-AUTO-DOCS:END -->
* 인자로 주어진 문자열을 10진수 정수로 변환하여 리턴한다.
* 음수와 양수의 나머지/나눗셈 연산이 다르므로, 음수라면 양수로 바꾸어준다.
* *INT32_MIN*을 양수로 변환하는 과정에서, *int*로는 오버플로우가 일어나므로 *long long*을 사용했다.
* 유효하지 않은 글자가 등장하는 즉시, 지금까지의 결과를 반환한다.
* *atoi*는 64비트 정수형으로 다룰 수 없는 수는 수가 양수일때 -1, 음수일때 0을 반환한다.
* 연산은 무조건 양수로 이루어지므로, 각 연산마다 오버플로우가 일어나는지 확인하여 구현했다.

- - -
</details>

<details>
    <summary>ft_calloc – memory allocation</summary>

<!-- MARKDOWN-AUTO-DOCS:START (CODE:src=./libft/ft_calloc.c) -->
<!-- The below code snippet is automatically added from ./libft/ft_calloc.c -->
```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 04:46:24 by tjo               #+#    #+#             */
/*   Updated: 2022/04/07 20:50:44 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"./libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ret;

	ret = malloc(count * size);
	if (!ret)
		return (0);
	ft_bzero(ret, count * size);
	return (ret);
}
```
<!-- MARKDOWN-AUTO-DOCS:END -->
* *count* * *size* 만큼의 공간을 동적할당한 포인터를 리턴한다.
* *malloc*과 다른 점은, 동적할당된 공간을 모두 0으로 초기화 한 뒤 리턴한다는 것이다.

- - -
</details>

<details>
    <summary>ft_strdup – save a copy of a string</summary>

<!-- MARKDOWN-AUTO-DOCS:START (CODE:src=./libft/ft_strdup.c) -->
<!-- The below code snippet is automatically added from ./libft/ft_strdup.c -->
```c
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
```
<!-- MARKDOWN-AUTO-DOCS:END -->
* *s1* 스트링을 복사한, 새로운 스트링을 동적할당하여 리턴한다.

- - -
</details>


## Part 2 - Additional functions

*In this second part, you must code a set of functions that are either not included in the
libc, or included in a different form.*

<details>
    <summary>ft_substr</summary>

<!-- MARKDOWN-AUTO-DOCS:START (CODE:src=./libft/ft_substr.c) -->
<!-- The below code snippet is automatically added from ./libft/ft_substr.c -->
```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 15:14:54 by tjo               #+#    #+#             */
/*   Updated: 2022/04/17 22:33:02 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"./libft.h"

static size_t	min(size_t a, size_t b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ret;
	size_t	substr_len;

	if (!s)
		return (0);
	if ((unsigned int)ft_strlen(s) <= start)
	{
		ret = (char *)malloc(sizeof(char) * 1);
		if (!ret)
			return (0);
		ret[0] = '\0';
		return (ret);
	}
	substr_len = min(len, ft_strlen(s + start));
	ret = (char *)malloc(sizeof(char) * substr_len + 1);
	if (!ret)
		return (0);
	ft_memmove(ret, s + start, substr_len);
	ret[substr_len] = 0;
	return (ret);
}
```
<!-- MARKDOWN-AUTO-DOCS:END -->

> * Param:  
> #1. The string from which to create the substring.   
> #2. The start index of the substring in the string ’s’.  
> #3. The maximum length of the substring.  
> * Return:  
> The substring. NULL if the allocation fails.
> * Desc:  
> Allocates (with malloc(3)) and returns a substring from the string ’s’. The substring begins at index ’start’ and is of maximum size ’len’.

* *start*가 *s*의 길이보다 크다면, 빈 문자열을 반환하도록 예외를 처리해주었다.
* 그렇지 않다면, *ft_memmove*를 이용해서 *(s+start) ~ (s+start + substr_len+1)* 만큼을 옮긴 문자열을 복사해 리턴했다.

- - -
</details>

<details>
    <summary>ft_strjoin</summary>

<!-- MARKDOWN-AUTO-DOCS:START (CODE:src=./libft/ft_strjoin.c) -->
<!-- The below code snippet is automatically added from ./libft/ft_strjoin.c -->
```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 15:14:54 by tjo               #+#    #+#             */
/*   Updated: 2022/04/07 20:51:47 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"./libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ret;
	size_t	s1_len;
	size_t	s2_len;

	if (!s1 || !s2)
		return (0);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	ret = (char *)malloc(sizeof(char) * s1_len + s2_len + 1);
	if (!ret)
		return (0);
	ft_memmove(ret, s1, s1_len);
	ft_memmove(ret + s1_len, s2, s2_len);
	ret[s1_len + s2_len] = 0;
	return (ret);
}
```
<!-- MARKDOWN-AUTO-DOCS:END -->
> * Param:  
> #1. The prefix string.  
> #2. The suffix string.  
> * Return:  
> The new string. NULL if the allocation fails.  
> * Desc:  
> Allocates (with malloc(3)) and returns a new string, which is the result of the concatenation of ’s1’ and ’s2’.

* *s1*과 *s2*의 길이를 더한 값만큼 동적할당하여, *ft_memmove*를 이용해 복사해 리턴했다.
- - -
</details>

<details>
    <summary>ft_strtrim</summary>

<!-- MARKDOWN-AUTO-DOCS:START (CODE:src=./libft/ft_strtrim.c) -->
<!-- The below code snippet is automatically added from ./libft/ft_strtrim.c -->
```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 15:30:06 by tjo               #+#    #+#             */
/*   Updated: 2022/04/07 20:52:05 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"./libft.h"

static int	char_check(const char c, char *set)
{
	set--;
	while (*(++set) != '\0')
		if (c == *set)
			return (1);
	return (0);
}

static void	get_cur(size_t *lcur, size_t *rcur, char const *s1, char const *set)
{
	size_t	s_len;

	s_len = ft_strlen(s1);
	*lcur = 0;
	*rcur = s_len - 1;
	while (1)
	{
		if (!(*lcur < *rcur))
		{
			if (char_check(s1[*lcur], (char *)set))
				(*lcur)++;
			return ;
		}
		else if (*lcur < s_len && char_check(s1[*lcur], (char *)set))
			(*lcur)++;
		else if (0 <= *rcur && char_check(s1[*rcur], (char *)set))
			(*rcur)--;
		else
			return ;
	}
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ret;
	size_t	ret_len;
	size_t	lcur;
	size_t	rcur;

	if (!s1 || !set)
		return (0);
	get_cur(&lcur, &rcur, s1, set);
	ret_len = rcur - lcur + 1;
	ret = (char *)malloc(sizeof(char) * ret_len + 1);
	if (!ret)
		return (0);
	ft_memmove(ret, s1 + lcur, ret_len);
	ret[ret_len] = '\0';
	return (ret);
}
```
<!-- MARKDOWN-AUTO-DOCS:END -->
> * Param:  
> #1. The string to be trimmed.  
> #2. The reference set of characters to trim.  
> * Return:  
> The trimmed string. NULL if the allocation fails.  
> * Desc:  
> Allocates (with malloc(3)) and returns a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string.

* *s1*의 양 끝에 커서를 두고, 커서가 가리키는 글자가 *set*에 포함되는지 확인하면서, 움직이는 방법을 사용했다.
* *get_cur* 함수가 끝난 뒤, *lcur*와 *rcur*의 차이만큼을 동적할당한 뒤, *ft_memmove*를 이용해 복사해 리턴했다. 
- - -
</details>

<details>
    <summary>ft_split</summary>

<!-- MARKDOWN-AUTO-DOCS:START (CODE:src=./libft/ft_split.c) -->
<!-- The below code snippet is automatically added from ./libft/ft_split.c -->
```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/24 15:47:37 by tjo               #+#    #+#             */
/*   Updated: 2022/04/18 01:31:02 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"./libft.h"

static size_t	get_substr_cnt(char	*s_cpy, char c)
{
	size_t	cur;
	size_t	ret;

	cur = 0;
	ret = 0;
	while (s_cpy[cur])
	{
		if (s_cpy[cur] == c)
			s_cpy[cur] = 0;
		if (s_cpy[cur] && (cur == 0 || !s_cpy[cur - 1]))
			ret++;
		cur++;
	}
	return (ret);
}

static char	**free_all(char **ret, size_t cur, char *s_cpy)
{
	size_t	idx;

	idx = 0;
	while (idx < cur)
		free(ret[cur]);
	free(ret);
	free(s_cpy);
	return (0);
}

static char	**map_substr(char *s_cpy, size_t ret_cnt, size_t s_len)
{
	char	**ret;
	size_t	cur;
	size_t	ret_cur;

	cur = 0;
	ret_cur = 0;
	ret = (char **)malloc(sizeof(char *) * (ret_cnt + 1));
	if (!ret)
		return (0);
	while (cur < s_len)
	{
		if (s_cpy[cur] && (cur == 0 || !s_cpy[cur - 1]))
		{
			ret[ret_cur] = ft_strdup(s_cpy + cur);
			if (!ret[ret_cur++])
				return (free_all(ret, ret_cur - 1, s_cpy));
		}
		cur++;
	}
	ret[ret_cur] = 0;
	free(s_cpy);
	return (ret);
}

char	**ft_split(char const *s, char c)
{
	char	*s_cpy;
	size_t	s_len;
	size_t	ret_cnt;

	if (!s)
		return (0);
	s_len = ft_strlen(s);
	s_cpy = ft_strdup(s);
	if (!s_cpy)
		return (0);
	ret_cnt = get_substr_cnt(s_cpy, c);
	return (map_substr(s_cpy, ret_cnt, s_len));
}
```
<!-- MARKDOWN-AUTO-DOCS:END -->
> * Param:  
> #1. The string to be split.  
> #2. The delimiter character.  
> * Return:  
> The array of new strings resulting from the split. NULL if the allocation fails.  
> * Desc:  
> Allocates (with malloc(3)) and returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter. The array must be ended by a NULL pointer.

* 주어진 *s*를 마음대로 다루기 위해, *s_cpy*에 *ft_strdup*을 이용해 복사본을 만들었다.
* *s*로 만들 수 있는 substring의 개수를 세는 과정에서, *c*와 동일한 글자는 모두 *'\0'*으로 만들어 주었다.
* 각 substring의 시작부분만 알 수 있다면, 미리 *c*를 *'\0'*으로 바꾸어 놓았으므로 substring의 끝 부분을 구할 필요가 없어진다.
* 각 글자에 대해 문자열의 시작부분인지 확인하면서, *ft_strdup*을 이용해 복사했다.
* *ft_strdup*을 사용하다가, *NULL*이 반환될 수 있다는 점에 유의해야한다. 메모리 누수가 발생할 수 있다.
- - -
</details>

<details>
    <summary>ft_itoa</summary>

<!-- MARKDOWN-AUTO-DOCS:START (CODE:src=./libft/ft_itoa.c) -->
<!-- The below code snippet is automatically added from ./libft/ft_itoa.c -->
```c
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

int	get_length(int n)
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
```
<!-- MARKDOWN-AUTO-DOCS:END -->
> * Param:  
> #1. the integer to convert.  
> * Return:  
> The string representing the integer. NULL if the allocation fails.  
> * Desc:  
> Allocates (with malloc(3)) and returns a string representing the integer received as an argument. Negative numbers must be handled.

* 인자로 주어진 *n*를 10으로 나누면서, 이 숫자를 스트링으로 만들기 위해 몇 글자가 필요한지 센다.
* 문자열의 뒤부터, *n*을 10으로 나눈 나머지를 채우는 방법으로 숫자를 스트링으로 변환할 수 있다.
- - -
</details>

<details>
    <summary>ft_strmapi</summary>

<!-- MARKDOWN-AUTO-DOCS:START (CODE:src=./libft/ft_strmapi.c) -->
<!-- The below code snippet is automatically added from ./libft/ft_strmapi.c -->
```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:07:09 by tjo               #+#    #+#             */
/*   Updated: 2022/04/07 20:51:56 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"./libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ret;
	size_t	s_len;
	size_t	cur;

	if (!s || !f)
		return (0);
	cur = 0;
	s_len = ft_strlen(s);
	ret = (char *)malloc(sizeof(char) * s_len + 1);
	if (!ret)
		return (0);
	while (cur < s_len)
	{
		ret[cur] = f(cur, s[cur]);
		cur++;
	}
	ret[cur] = 0;
	return (ret);
}
```
<!-- MARKDOWN-AUTO-DOCS:END -->
> * Param:  
> #1. The string on which to iterate.  
> #2. The function to apply to each character.  
> * Return:  
> The string created from the successive applications of ’f’. Returns NULL if the allocation fails.
> * Desc:  
> Applies the function ’f’ to each character of the string ’s’ , and passing its index as first argument to create a new string (with malloc(3)) resulting from successive applications of ’f’.

* *s*의 글자수를 세어 그만큼 동적할당한 뒤, 각 글자에 *f()*를 적용한 결과를 순서대로 저장해 리턴했다.
- - -
</details>

<details>
    <summary>ft_striteri</summary>

<!-- MARKDOWN-AUTO-DOCS:START (CODE:src=./libft/ft_striteri.c) -->
<!-- The below code snippet is automatically added from ./libft/ft_striteri.c -->
```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:11:02 by tjo               #+#    #+#             */
/*   Updated: 2022/04/07 14:29:48 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	char	*cur;

	cur = s;
	if (!cur)
		return ;
	while (*cur)
	{
		f(cur - s, cur);
		cur++;
	}
}
```
<!-- MARKDOWN-AUTO-DOCS:END -->
> * Param:  
> #1. The string on which to iterate.  
> #2. The function to apply to each character.  
> * Return:  
> None.
> * Desc:  
> Applies the function f to each character of the string passed as argument, and passing its index as first argument. Each character is passed by address to f to be modified if necessary

* 각 글자의 인덱스가 필요하므로, 포인터 *s*를 복사한 포인터 *cur*를 만들었다.
* *\*cur*이 *'\0'*이 될 때 까지, 각 글자에 *f()*를 적용했다.
- - -
</details>

<details>
    <summary>ft_putchar_fd</summary>

<!-- MARKDOWN-AUTO-DOCS:START (CODE:src=./libft/ft_putchar_fd.c) -->
<!-- The below code snippet is automatically added from ./libft/ft_putchar_fd.c -->
```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:16:03 by tjo               #+#    #+#             */
/*   Updated: 2022/04/07 20:51:28 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"./libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
```
<!-- MARKDOWN-AUTO-DOCS:END -->
> * Param:  
> #1. The character to output.   
> #2. The file descriptor on which to write.  
> * Return:  
> None.  
> * Desc:  
> Outputs the character ’c’ to the given file descriptor.  

* 주어진 *c*를 *fd*로 출력한다.
- - -
</details>

<details>
    <summary>ft_putstr_fd</summary>

<!-- MARKDOWN-AUTO-DOCS:START (CODE:src=./libft/ft_putstr_fd.c) -->
<!-- The below code snippet is automatically added from ./libft/ft_putstr_fd.c -->
```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:16:58 by tjo               #+#    #+#             */
/*   Updated: 2022/04/07 20:51:34 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"./libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	while (*s)
		write(fd, s++, 1);
}
```
<!-- MARKDOWN-AUTO-DOCS:END -->
> * Param:  
> #1. The string to output.  
> #2. The file descriptor on which to write.  
> * Return:  
> None.  
> * Desc:  
> Outputs the string ’s’ to the given file descriptor.

* 주어진 *s*를 *fd*로 출력한다.
- - -
</details>

<details>
    <summary>ft_putendl_fd.c</summary>

<!-- MARKDOWN-AUTO-DOCS:START (CODE:src=./libft/ft_putendl_fd.c) -->
<!-- The below code snippet is automatically added from ./libft/ft_putendl_fd.c -->
```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:16:58 by tjo               #+#    #+#             */
/*   Updated: 2022/04/07 20:51:30 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"./libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	if (!s)
		return ;
	while (*s)
		write(fd, s++, 1);
	write(fd, "\n", 1);
}
```
<!-- MARKDOWN-AUTO-DOCS:END -->
> * Param:  
> #1. The string to output.  
> #2. The file descriptor on which to write.  
> * Return:  
> None.  
> * Desc:  
> Outputs the string ’s’ to the given file descriptor, followed by a newline.

* 주어진 *s*를 *fd*로 출력한다. 그리고 뒤에 개행을 출력한다.
- - -
</details>

<details>
    <summary>ft_putnbr_fd</summary>

<!-- MARKDOWN-AUTO-DOCS:START (CODE:src=./libft/ft_putnbr_fd.c) -->
<!-- The below code snippet is automatically added from ./libft/ft_putnbr_fd.c -->
```c
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
```
<!-- MARKDOWN-AUTO-DOCS:END -->
> * Param:  
> #1. The integer to output.  
> #2. The file descriptor on which to write.
> * Return:  
> None.  
> * Desc:  
> Outputs the integer ’n’ to the given file descriptor.

* 주어진 *n*를 *fd*로 출력한다. *ft_itoa*와 동일한 방법을 사용했다.
- - -
</details>

## Part 3 - Bonus functions

*The following functions will allow you to easily use your lists.*

<details>
	<summary>t_list</summary>
	
```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}t_list;
```

* content : The data contained in the element. The void * allows to store any kind of data.  
* next : The next element’s address or NULL if it’s the last element.  
</details>

<details>
    <summary>ft_lstnew</summary>

<!-- MARKDOWN-AUTO-DOCS:START (CODE:src=./libft/ft_lstnew.c) -->
<!-- The below code snippet is automatically added from ./libft/ft_lstnew.c -->
```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:23:40 by tjo               #+#    #+#             */
/*   Updated: 2022/04/07 20:51:11 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"./libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*ret;

	ret = (t_list *)malloc(sizeof(t_list));
	if (!ret)
		return (0);
	ret->content = content;
	ret->next = 0;
	return (ret);
}
```
<!-- MARKDOWN-AUTO-DOCS:END -->
> * Param:  
> #1. The content to create the new element with.  
> * Return:  
> The new element.  
> * Desc:  
> Allocates (with malloc(3)) and returns a new element. The variable ’content’ is initialized with the value of the parameter ’content’. The variable ’next’ is initialized to NULL.

* 새로운 포인터에 동적할당 한 뒤, *data*를 담아서 리턴한다.
- - -
</details>

<details>
    <summary>ft_lstadd_front</summary>

<!-- MARKDOWN-AUTO-DOCS:START (CODE:src=./libft/ft_lstadd_front.c) -->
<!-- The below code snippet is automatically added from ./libft/ft_lstadd_front.c -->
```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:29:34 by tjo               #+#    #+#             */
/*   Updated: 2022/04/07 20:51:00 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"./libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
```
<!-- MARKDOWN-AUTO-DOCS:END -->
> * Param:  
> #1. The address of a pointer to the first link of a list.  
> #2. The address of a pointer to the element to be added to the list.  
> * Return:  
> None  
> * Desc:  
> Adds the element ’new’ at the beginning of the list.

* *lst*의 처음 부분에 *new*를 삽입해야하므로, *new*의 다음 노드가, 기존 *lst*의 첫 번째 노드가 된다.
* *lst*가 이중 포인터이므로, *\*lst*를 *new*의 주소로 바꿔준다.
- - -
</details>

<details>
    <summary>ft_lstsize</summary>

<!-- MARKDOWN-AUTO-DOCS:START (CODE:src=./libft/ft_lstsize.c) -->
<!-- The below code snippet is automatically added from ./libft/ft_lstsize.c -->
```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:32:01 by tjo               #+#    #+#             */
/*   Updated: 2022/04/07 20:51:16 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"./libft.h"

int	ft_lstsize(t_list *lst)
{
	int		cnt;
	t_list	*cur;

	if (!lst)
		return (0);
	cnt = 0;
	cur = lst;
	while (cur)
	{
		cur = cur->next;
		cnt++;
	}
	return (cnt);
}
```
<!-- MARKDOWN-AUTO-DOCS:END -->
> * Param:  
> #1. The beginning of the list.  
> * Return:  
> Length of the list.  
> * Desc:  
> Counts the number of elements in a list.

* *lst*의 끝까지 이동한 뒤, 이동한 횟수를 반환한다.
- - -
</details>

<details>
    <summary>ft_lstlast</summary>

<!-- MARKDOWN-AUTO-DOCS:START (CODE:src=./libft/ft_lstlast.c) -->
<!-- The below code snippet is automatically added from ./libft/ft_lstlast.c -->
```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:35:12 by tjo               #+#    #+#             */
/*   Updated: 2022/04/07 20:51:07 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"./libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*ret;

	if (!lst)
		return (0);
	ret = lst;
	while (ret->next)
		ret = ret->next;
	return (ret);
}
```
<!-- MARKDOWN-AUTO-DOCS:END -->
> * Param:  
> #1. The beginning of the list.  
> * Return:  
> Last element of the list.  
> * Desc:  
> Returns the last element of the list.

* 마지막 노드의 *next*는 *NULL*을 가리키기에, *ret->next*가 *NULL*일 때 까지 이동하고, *ret*을 반환한다.
- - -
</details>

<details>
    <summary>ft_lstadd_back</summary>

<!-- MARKDOWN-AUTO-DOCS:START (CODE:src=./libft/ft_lstadd_back.c) -->
<!-- The below code snippet is automatically added from ./libft/ft_lstadd_back.c -->
```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:37:37 by tjo               #+#    #+#             */
/*   Updated: 2022/04/07 20:50:58 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"./libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*cur;

	if (!(*lst))
	{
		*lst = new;
		return ;
	}
	cur = *lst;
	while (cur->next)
		cur = cur->next;
	cur->next = new;
}
```
<!-- MARKDOWN-AUTO-DOCS:END -->
> * Param:  
> #1. The address of a pointer to the first link of a list.  
> #2. The address of a pointer to the element to be added to the list.  
> * Return:  
> None  
> * Desc:  
> Adds the element ’new’ at the end of the list.

* 마지막 노드까지 이동한 뒤, 마지막 노드의 *next* 포인터를 *new*의 주소로 바꿔주었다.
- - -
</details>

<details>
    <summary>ft_lstdelone</summary>

<!-- MARKDOWN-AUTO-DOCS:START (CODE:src=./libft/ft_lstdelone.c) -->
<!-- The below code snippet is automatically added from ./libft/ft_lstdelone.c -->
```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:42:11 by tjo               #+#    #+#             */
/*   Updated: 2022/04/07 20:51:04 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"./libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	del(lst->content);
	free(lst);
}
```
<!-- MARKDOWN-AUTO-DOCS:END -->
> * Param:  #1. The element to free.  
> #2. The address of the function used to delete the content.  
> * Return:  
> None  
> * Desc:  
> Takes as a parameter an element and frees the memory of the element’s content using the function ’del’ given as a parameter and free the element. The memory of ’next’ must not be freed.

* *lst->content*는 주어진 *del* 함수를 이용해 삭제해주고, 해당 노드는 *free*해준다.
- - -
</details>

<details>
    <summary>ft_lstclear</summary>

<!-- MARKDOWN-AUTO-DOCS:START (CODE:src=./libft/ft_lstclear.c) -->
<!-- The below code snippet is automatically added from ./libft/ft_lstclear.c -->
```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 15:43:18 by tjo               #+#    #+#             */
/*   Updated: 2022/04/07 20:51:03 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"./libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*cur;
	t_list	*tmp;

	cur = *lst;
	while (cur)
	{
		tmp = cur;
		cur = cur->next;
		del(tmp->content);
		free(tmp);
	}
	*lst = 0;
}
```
<!-- MARKDOWN-AUTO-DOCS:END -->
> * Param:  
> #1. The address of a pointer to an element.  
> #2. The address of the function used to delete the content of the element.  
> * Return:  
> None  
> * Desc:  
> Deletes and frees the given element and every successor of that element, using the function ’del’ and free(3). Finally, the pointer to the list must be set to NULL.

* *ft_lstdelone*과 같은 방법으로, *content*는 *del* 함수를 이용해 삭제해준다.
* 해당 작업을 리스트의 모든 노드에 대해 반복한 뒤, 리스트의 시작을 *NULL*로 초기화한다.
- - -
</details>

<details>
    <summary>ft_lstiter</summary>

<!-- MARKDOWN-AUTO-DOCS:START (CODE:src=./libft/ft_lstiter.c) -->
<!-- The below code snippet is automatically added from ./libft/ft_lstiter.c -->
```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 14:51:12 by tjo               #+#    #+#             */
/*   Updated: 2022/04/07 20:51:06 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"./libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
```
<!-- MARKDOWN-AUTO-DOCS:END -->
> * Param:  
> #1. The adress of a pointer to an element.  
> #2. The adress of the function used to iterate on the list.  
> * Return:  
> None  
> * Desc:  
> Iterates the list ’lst’ and applies the function ’f’ to the content of each element.

* *lst*를 순회하면서, 각 노드의 *content*에 *f*를 적용한다.
- - -
</details>

<details>
    <summary>ft_lstmap</summary>

<!-- MARKDOWN-AUTO-DOCS:START (CODE:src=./libft/ft_lstmap.c) -->
<!-- The below code snippet is automatically added from ./libft/ft_lstmap.c -->
```c
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tjo <tjo@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 14:52:36 by tjo               #+#    #+#             */
/*   Updated: 2022/04/07 20:51:09 by tjo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"./libft.h"

static void	free_nodes(t_list *dummy, void (*del)(void *))
{
	t_list	*cur;
	t_list	*tmp;

	cur = dummy->next;
	while (cur)
	{
		tmp = cur;
		cur = cur->next;
		del(tmp->content);
		free(tmp);
	}
	free(dummy);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*dummy;
	t_list	*tmp;
	t_list	*cur;

	dummy = ft_lstnew(NULL);
	if (!dummy)
		return (0);
	cur = dummy;
	while (lst)
	{
		tmp = ft_lstnew(f(lst->content));
		if (!tmp)
		{
			free_nodes(dummy, del);
			return (0);
		}
		cur->next = tmp;
		cur = cur->next;
		lst = lst->next;
	}
	cur = dummy->next;
	free(dummy);
	return (cur);
}
```
<!-- MARKDOWN-AUTO-DOCS:END -->
> * Param:  
> #1. The adress of a pointer to an element.  
> #2. The adress of the function used to iterate on the list.  
> #3. The adress of the function used to delete the content of an element if needed.  
> * Return:  
> The new list. NULL if the allocation fails.  
> * Desc:  
> Iterates the list ’lst’ and applies the function ’f’ to the content of each element. Creates a new list resulting of the successive applications of the function ’f’. The ’del’ function is used to delete the content of an element if needed.

* *ft_lstiter*와 같이 *lst*를 순회하면서, 각 노트의 *content*에 *f*를 적용한 결과를 새로운 리스트에 담아 반환해야한다.
* 그러나 *del* 함수가 왜 주어졌는지에 대해 생각해보니, 기존에는 동적할당을 한 번만 사용해도 됐기에, 할당에 실패하면 바로 *NULL*을 반환해도 괜찮았지만, 리스트는 어느 한 노드의 동적할당이 실패하더라도, 이전에 할당했던 노드들에 대해서는 이미 할당이 되어있으니, 동적할당이 실패하는 즉시 리턴하게 될 경우 이 부분에서 메모리 누수가 발생할 수 있다.
* 그러므로 동적할당을 실패했다면, 새로 만들어두었던 리스트에 대해서 *free*하는 작업을 해주었다.
- - -
</details>
