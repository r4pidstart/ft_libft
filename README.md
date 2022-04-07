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
<!-- MARKDOWN-AUTO-DOCS:END -->
* 인자가 알파벳에 속한다면 1을 리턴하고, 아니라면 0을 리턴한다.

- - -
</details>

<details>
    <summary>ft_isdigit – decimal-digit character test</summary>

<!-- MARKDOWN-AUTO-DOCS:START (CODE:src=./libft/ft_isdigit.c) -->
<!-- MARKDOWN-AUTO-DOCS:END -->
* 인자가 10진수 숫자에 속한다면 1을 리턴하고, 아니라면 0을 리턴한다.
* 
- - -
</details>

<details>
    <summary>ft_isalnum – alphaanumeric character test</summary>

<!-- MARKDOWN-AUTO-DOCS:START (CODE:src=./libft/ft_isalnum.c) -->
<!-- MARKDOWN-AUTO-DOCS:END -->
* 인자가 알파벳이나, 10진수 숫자에 속한다면 1을 리턴하고, 아니라면 0을 리턴한다.

- - -
</details>

<details>
    <summary>ft_isacii – test for ASCII character</summary>

<!-- MARKDOWN-AUTO-DOCS:START (CODE:src=./libft/ft_isascii.c) -->
<!-- MARKDOWN-AUTO-DOCS:END -->
* 인자가 아스키코드에 속한다면 1을 리턴하고, 아니라면 0을 리턴한다.

- - -
</details>

<details>
    <summary>ft_isprint – printing character test (space character inclusive)</summary>

<!-- MARKDOWN-AUTO-DOCS:START (CODE:src=./libft/ft_isprint.c) -->
<!-- MARKDOWN-AUTO-DOCS:END -->
* 인자가 출력가능한 문자에 속한다면 1을 리턴하고, 아니라면 0을 리턴한다.

- - -
</details>

<details>
    <summary>ft_strlen – find length of string</summary>

<!-- MARKDOWN-AUTO-DOCS:START (CODE:src=./libft/ft_strlen.c) -->
<!-- MARKDOWN-AUTO-DOCS:END -->
* 인자로 주어진 스트링의 길이를 리턴한다
* 스트링의 마지막 글자가 널 문자인 것을 이용해서, 문자열의 길이를 찾는다.

- - -
</details>

<details>
    <summary>ft_memset – fill a byte string with a byte value</summary>

<!-- MARKDOWN-AUTO-DOCS:START (CODE:src=./libft/ft_memset.c) -->
<!-- MARKDOWN-AUTO-DOCS:END -->
* 인자로 주어진 포인터 b부터, *len* 만큼의 바이트를 c로 채운 후 그 주소의 포인터를 리턴한다.
* 메모리를 한 바이트씩 채우기 위해, *void*\*를 *char*\*로 변환해서 사용했다.

- - -
</details>

<details>
    <summary>ft_bzero – write zeroes to a byte string</summary>

<!-- MARKDOWN-AUTO-DOCS:START (CODE:src=./libft/ft_bzero.c) -->
<!-- MARKDOWN-AUTO-DOCS:END -->
* 인자로 주어진 포인터 *s*부터, *n* 만큼의 바이트를 0으로 채운다.
* 메모리를 한 바이트씩 채우기 위해, *void*\*를 *char*\*로 변환해서 사용했다. 

- - -
</details>

<details>
    <summary>ft_memcpy – copy memory area</summary>

<!-- MARKDOWN-AUTO-DOCS:START (CODE:src=./libft/ft_memcpy.c) -->
<!-- MARKDOWN-AUTO-DOCS:END -->
* *src* 포인터로부터 *n* 만큼의 바이트를, *dst* 포인터부터 붙여넣은 후 그 주소의 포인터를 리턴한다.
* 메모리를 한 바이트씩 채우기 위해, *void*\*를 *char*\*로 변환해서 사용했다.

- - -
</details>

<details>
    <summary>ft_memmove – copy byte string</summary>

<!-- MARKDOWN-AUTO-DOCS:START (CODE:src=./libft/ft_memmove.c) -->
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
<!-- MARKDOWN-AUTO-DOCS:END -->
* 인자가 소문자라면, 대문자로 바꾸어 리턴한다.

- - -
</details>

<details>
    <summary>ft_tolower – upper case to lower case letter conversion</summary>

<!-- MARKDOWN-AUTO-DOCS:START (CODE:src=./libft/ft_tolower.c) -->
<!-- MARKDOWN-AUTO-DOCS:END -->
* 인자가 대문자라면, 소문자로 바꾸어 리턴한다.

- - -
</details>

<details>
    <summary>ft_strchr – locate character in string</summary>

<!-- MARKDOWN-AUTO-DOCS:START (CODE:src=./libft/ft_strchr.c) -->
<!-- MARKDOWN-AUTO-DOCS:END -->
* 인자로 주어진 *s* 스트링에서, 처음으로 등장하는 *c*의 주소를 리턴한다. 만약 *c*가 존재하지 않는다면 NULL을 리턴한다.

- - -
</details>

<details>
    <summary>ft_strrchr – locate character in string</summary>

<!-- MARKDOWN-AUTO-DOCS:START (CODE:src=./libft/ft_strrchr.c) -->
<!-- MARKDOWN-AUTO-DOCS:END -->
* 인자로 주어진 *s* 스트링에서, 마지막으로 등장하는 *c*의 주소를 리턴한다. 만약 *c*가 존재하지 않는다면 NULL을 리턴한다.
  
- - -
</details>

<details>
    <summary>ft_memcmp – compare byte string</summary>

<!-- MARKDOWN-AUTO-DOCS:START (CODE:src=./libft/ft_memcmp.c) -->
<!-- MARKDOWN-AUTO-DOCS:END -->
* 인자로 주어진 포인터 *s1*, *s2*부터 *n*만큼의 바이트를 *unsigned char*로 비교한다.
* 두 메모리의 값이 일치한다면 0을 리턴하고, 아니라면 첫 번째로 다른 바이트의 차이를 리턴한다.
* 한 바이트씩 비교하기 위해 *void*\*를 *unsigned char*\*로 변환해서 사용했다.
  
- - -
</details>

<details>
    <summary>ft_strnstr – locate a substring in a string</summary>

<!-- MARKDOWN-AUTO-DOCS:START (CODE:src=./libft/ft_strnstr.c) -->
<!-- MARKDOWN-AUTO-DOCS:END -->
* *haystack* 문자열의, *needle* 문자열을 찾아 그 주소를 리턴한다. 최대 *len* 글자까지만 비교한다.
* 만약 *needle* 문자열이 빈 문자열이라면, *haystack* 문자열의 주소를 리턴하며, *needle* 문자열이 존재하지 않는다면 NULL을 리턴한다.
  
- - -
</details>

<details>
    <summary>ft_atoi – convert ASCII string to integer</summary>

<!-- MARKDOWN-AUTO-DOCS:START (CODE:src=./libft/ft_atoi.c) -->
<!-- MARKDOWN-AUTO-DOCS:END -->
* 인자로 주어진 문자열을 10진수 정수로 변환하여 리턴한다.
* 음수와 양수의 나머지/나눗셈 연산이 다르므로, 음수라면 양수로 바꾸어준다.
* *INT32_MIN*을 양수로 변환하는 과정에서, *int*로는 오버플로우가 일어나므로 *long long*을 사용했다.
* 유효하지 않은 글자가 등장하는 즉시, 지금까지의 결과를 반환한다.
  
- - -
</details>


## Part 2 - Additional functions

*In this second part, you must code a set of functions that are either not included in the
libc, or included in a different form.*


## Part 3 - Bonus functions

*The following functions will allow you to easily use your lists.*