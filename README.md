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
/*   Updated: 2022/04/07 20:52:08 by tjo              ###   ########.fr       */
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
/*   Updated: 2022/04/12 15:28:24 by tjo              ###   ########.fr       */
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
			ret[ret_cur++] = ft_strdup(s_cpy + cur);
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

## Part 3 - Bonus functions

*The following functions will allow you to easily use your lists.*
