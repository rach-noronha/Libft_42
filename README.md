<h1 align="center">
	Libft_42 🚀
</h1>

<p align="center">
	<b><i>My own C Library!</i></b>
</p>

<p align="center">
  <img src="https://c.tenor.com/8XHjYF26qQQAAAAC/girl-pixel.gif" display="inline-block" width="40%" height="30%">
</p>

## 💡About

>Summary:
This project is about coding a C library.
It will contain a lot of general purpose functions following programs will rely upon.

### Functions from `<ctype.h>` library

* [`ft_isascii`](Libft_Raquel/ft_isascii.c)			- test for ASCII character.
* [`ft_isalnum`](Libft_Raquel/ft_isalnum.c)			- alphanumeric character test.
* [`ft_isalpha`](Libft_Raquel/ft_isalpha.c)			- alphabetic character test.
* [`ft_isdigit`](Libft_Raquel/ft_isdigit.c)			- decimal-digit character test.
* [`ft_isprint`](Libft_Raquel/ft_isprint.c)			- printing character test (space character inclusive).
* [`ft_tolower`](Libft_Raquel/ft_tolower.c)			- upper case to lower case letter conversion.
* [`ft_toupper`](Libft_Raquel/ft_toupper.c)			- lower case to upper case letter conversion.

### Functions from `<stdlib.h>` library

* [`ft_atoi`](Libft_Raquel/ft_atoi.c)		- convert ASCII string to integer.
* [`ft_calloc`](Libft_Raquel/ft_calloc.c)	- memory allocation.

### Functions from `<strings.h>` library

* [`ft_bzero`](Libft_Raquel/ft_bzero.c)		- write zeroes to a byte string.
* [`ft_memset`](Libft_Raquel/ft_memset.c)		- write a byte to a byte string.
* [`ft_memchr`](Libft_Raquel/ft_memchr.c)		- locate byte in byte string.
* [`ft_memcmp`](Libft_Raquel/ft_memcmp.c)		- compare byte string.
* [`ft_memmove`](Libft_Raquel/ft_memmove.c)	- copy byte string.
* [`ft_memcpy`](Libft_Raquel/ft_memcpy.c)		- copy memory area.

### Functions from `<string.h>` library

* [`ft_strlen`](Libft_Raquel/ft_strlen.c)				- find length of string.
* [`ft_strchr`](Libft_Raquel/ft_strchr.c)				- locate character in string (first occurrence).
* [`ft_strrchr`](Libft_Raquel/ft_strrchr.c)			- locate character in string (last occurence).
* [`ft_strncmp`](Libft_Raquel/ft_strncmp.c)			- compare strings (size-bounded).
* [`ft_strnrcmp`](Libft_Raquel/ft_strnrcmp.c)			- reversely compare strings (size-bounded).
* [`ft_strdup`](Libft_Raquel/ft_strdup.c)				- save a copy of a string (with malloc).
* [`ft_strlcpy`](Libft_Raquel/ft_strlcpy.c)			- size-bounded string copying.
* [`ft_strlcat`](Libft_Raquel/ft_strlcat.c)			- size-bounded string concatenation.

### Non-standard functions

* [`ft_putchar_fd`](Libft_Raquel/ft_putchar_fd.c)		- output a character to given file.
* [`ft_putstr_fd`](Libft_Raquel/ft_putstr_fd.c)		- output string to given file.
* [`ft_putendl_fd`](Libft_Raquel/ft_putendl_fd.c)		- output string to given file with newline.
* [`ft_putnbr_fd`](Libft_Raquel/ft_putnbr_fd.c)		- output integer to given file.
* [`ft_itoa`](Libft_Raquel/ft_itoa.c)					- convert integer to ASCII string.
* [`ft_substr`](Libft_Raquel/ft_substr.c)				- extract substring from string.
* [`ft_strtrim`](Libft_Raquel/ft_strtrim.c)			- trim beginning and end of string with the specified characters.
* [`ft_strjoin`](Libft_Raquel/ft_strjoin.c)			- concatenate two strings into a new string (with malloc).
* [`ft_split`](Libft_Raquel/ft_split.c)				- split string, with specified character as delimiter, into an array of strings.
* [`ft_strmapi`](Libft_Raquel/ft_strmapi.c)			- create new string from modifying string with specified function.

### Linked list functions

* [`ft_lstnew`](Libft_Raquel/ft_lstnew.c)				- create new list.
* [`ft_lstsize`](Libft_Raquel/ft_lstsize.c)			- count elements of a list.
* [`ft_lstlast`](Libft_Raquel/ft_lstlast.c)			- find last element of list.
* [`ft_lstadd_back`](Libft_Raquel/ft_lstadd_back.c)	- add new element at end of list.
* [`ft_lstadd_front`](Libft_Raquel/ft_lstadd_front.c)	- add new element at beginning of list.
* [`ft_lstdelone`](Libft_Raquel/ft_lstdelone.c)		- delete element from list.
* [`ft_lstclear`](Libft_Raquel/ft_lstclear.c)			- delete sequence of elements of list from a starting point.
* [`ft_lstiter`](Libft_Raquel/ft_lstiter.c)			- apply function to content of all list's elements.
* [`ft_lstmap`](Libft_Raquel/ft_lstmap.c)				- apply function to content of all list's elements into new list.
