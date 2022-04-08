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

	cur  = (char *)b;
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
/*   Updated: 2022/04/07 20:50:29 by tjo              ###   ########.fr       */
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

int	ft_atoi(const char *str)
{
	char		*cur;
	size_t		minus_cnt;
	long long	ret;

	cur = (char *)str;
	minus_cnt = 0;
	while (my_isspace(*cur))
		cur++;
	ret = 0;
	if (my_issign(*cur))
	{
		if (*cur == '-')
			minus_cnt++;
		cur++;
	}
	while (ft_isdigit(*cur))
		ret = ret * 10 + (*(cur++) - '0');
	if (minus_cnt & 1)
		ret *= -1;
	return (ret);
}
```
<!-- MARKDOWN-AUTO-DOCS:END -->
* 인자로 주어진 문자열을 10진수 정수로 변환하여 리턴한다.
* 음수와 양수의 나머지/나눗셈 연산이 다르므로, 음수라면 양수로 바꾸어준다.
* *INT32_MIN*을 양수로 변환하는 과정에서, *int*로는 오버플로우가 일어나므로 *long long*을 사용했다.
* 유효하지 않은 글자가 등장하는 즉시, 지금까지의 결과를 반환한다.

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
* *s1* 스트링을 복사한, 새로운 스트링을 동적할당하여 반환한다.

- - -
</details>


## Part 2 - Additional functions

*In this second part, you must code a set of functions that are either not included in the
libc, or included in a different form.*


## Part 3 - Bonus functions

*The following functions will allow you to easily use your lists.*
