*This activity has been created as part of the 42 curriculum by nathalex.*

<a id="top"></a>

```text
██╗     ██╗██████╗ ███████╗████████╗
██║     ██║██╔══██╗██╔════╝╚══██╔══╝
██║     ██║██████╔╝█████╗     ██║
██║     ██║██╔══██╗██╔══╝     ██║
███████╗██║██████╔╝██║        ██║
╚══════╝╚═╝╚═════╝ ╚═╝        ╚═╝
```

<div align="center">

<img src="https://img.shields.io/badge/language-C-00599C?style=for-the-badge&logo=c&logoColor=white" alt="C">
<img src="https://img.shields.io/badge/school-42-000000?style=for-the-badge" alt="42">
<img src="https://img.shields.io/badge/output-libft.a-00BABC?style=for-the-badge" alt="libft.a">
<img src="https://img.shields.io/badge/functions-43-blueviolet?style=for-the-badge" alt="43 functions">

</div>

## Contents

- [Description](#description)
- [Instructions](#instructions)
- [Library content](#library-content)
  - [Part 1: libc functions](#part-1-libc-functions)
  - [Part 2: additional functions](#part-2-additional-functions)
  - [Part 3: linked lists](#part-3-linked-lists)
- [Resources](#resources)
- [Use of AI](#use-of-ai)

## Description

This activity is called libft. It is the first project of the 42 curriculum. The point is to do an overview of essential functions from the piscine (such as ft_split, ft_strlen...), first and foremost to recall them and clarify their use, but also to slightly change them so that they are closer to the man of their original function. It is also a way to help us grasp what a library is, how to use a .h file, and how to use a Makefile.

<p align="right"><a href="#top">⬆ back to top</a></p>

## Instructions

```bash
make        # compiles every .c file and creates libft.a
make clean  # removes the object files (.o)
make fclean # removes the object files and libft.a
make re     # runs fclean, then make
```

Every file is compiled with `cc -Wall -Wextra -Werror`.

<p align="right"><a href="#top">⬆ back to top</a></p>

## Library content

### Part 1: libc functions

```text
 ___  _   ___ _____   _
| _ \/_\ | _ \_   _| / |
|  _/ _ \|   / | |   | |
|_|/_/ \_\_|_\ |_|   |_|
```

Reimplementations of standard functions, with the same prototype and behaviour as the originals.

**Character checks and conversion**

<details>
<summary><b>See the 7 functions</b></summary>

| Function | Description |
|---|---|
| `ft_isalpha` | Checks if the character is a letter |
| `ft_isdigit` | Checks if the character is a digit |
| `ft_isalnum` | Checks if the character is a letter or a digit |
| `ft_isascii` | Checks if the character is in the ASCII table (0 to 127) |
| `ft_isprint` | Checks if the character is printable (32 to 126) |
| `ft_toupper` | Converts a lowercase letter to uppercase |
| `ft_tolower` | Converts an uppercase letter to lowercase |

</details>

**Strings**

<details>
<summary><b>See the 9 functions</b></summary>

| Function | Description |
|---|---|
| `ft_strlen` | Returns the length of a string |
| `ft_strchr` | Finds the first occurrence of a character in a string |
| `ft_strrchr` | Finds the last occurrence of a character in a string |
| `ft_strncmp` | Compares two strings, up to n characters |
| `ft_strnstr` | Finds a substring in the first len characters of a string |
| `ft_strlcpy` | Copies a string into a buffer of a given size, never overflowing |
| `ft_strlcat` | Appends a string to another, never overflowing the buffer |
| `ft_atoi` | Converts a string to an int |
| `ft_strdup` | Returns a newly allocated copy of a string |

</details>

**Memory**

<details>
<summary><b>See the 7 functions</b></summary>

| Function | Description |
|---|---|
| `ft_memset` | Fills a memory area with a byte |
| `ft_bzero` | Fills a memory area with zeros |
| `ft_memcpy` | Copies a memory area to another (areas must not overlap) |
| `ft_memmove` | Copies a memory area to another, even if they overlap |
| `ft_memchr` | Finds a byte in a memory area |
| `ft_memcmp` | Compares two memory areas |
| `ft_calloc` | Allocates memory and fills it with zeros |

</details>

<p align="right"><a href="#top">⬆ back to top</a></p>

### Part 2: additional functions

```text
 ___  _   ___ _____   ___
| _ \/_\ | _ \_   _| |_  )
|  _/ _ \|   / | |    / /
|_|/_/ \_\_|_\ |_|   /___|
```

Functions that are not in the libc, or that exist in a different form.

<details>
<summary><b>See the 11 functions</b></summary>

| Function | Description |
|---|---|
| `ft_substr` | Returns a new string, extracted from a string at a given index |
| `ft_strjoin` | Returns a new string, the concatenation of two strings |
| `ft_strtrim` | Returns a new string, without the given characters at the start and the end |
| `ft_split` | Splits a string with a delimiter, returns a NULL-terminated array of strings |
| `ft_itoa` | Converts an int to a newly allocated string |
| `ft_strmapi` | Applies a function to each character, returns the result in a new string |
| `ft_striteri` | Applies a function to each character, modifying the string in place |
| `ft_putchar_fd` | Writes a character to a file descriptor |
| `ft_putstr_fd` | Writes a string to a file descriptor |
| `ft_putendl_fd` | Writes a string followed by a newline to a file descriptor |
| `ft_putnbr_fd` | Writes an integer to a file descriptor |

</details>

<p align="right"><a href="#top">⬆ back to top</a></p>

### Part 3: linked lists

```text
 ___  _   ___ _____   ____
| _ \/_\ | _ \_   _| |__ /
|  _/ _ \|   / | |    |_ \
|_|/_/ \_\_|_\ |_|   |___/
```

Functions to manipulate linked lists, built on this structure:

```c
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;
```

<details>
<summary><b>See the 9 functions</b></summary>

| Function | Description |
|---|---|
| `ft_lstnew` | Creates a new node |
| `ft_lstadd_front` | Adds a node at the beginning of a list |
| `ft_lstadd_back` | Adds a node at the end of a list |
| `ft_lstsize` | Returns the number of nodes in a list |
| `ft_lstlast` | Returns the last node of a list |
| `ft_lstdelone` | Frees the content of a node, then the node itself |
| `ft_lstclear` | Frees every node of a list and sets the list to NULL |
| `ft_lstiter` | Applies a function to the content of each node |
| `ft_lstmap` | Creates a new list by applying a function to the content of each node |

</details>

<p align="right"><a href="#top">⬆ back to top</a></p>

## Resources

- The man pages of each original function (`man 3 memmove`, `man 3 strlcpy`...)
- GNU Make manual, for the Makefile rules
- francinette, a community tester used to check the functions

## Use of AI

I used Claude (Anthropic) mainly as a tutor during this project. It also helped me write the long part of this README. I read and checked everything it wrote.

It helped me mainly when I was coding on Floor 4, because at moments I needed my head out of talking with everyone, so I talked with this AI to grasp a few concepts, especially linked lists. It also helped me review my code for indentation and errors, and write a main for my tests. One of the main helps was setting up francinette, and helping me with a few git commands in the console when I had issues with my repository.

<p align="right"><a href="#top">⬆ back to top</a></p>

```text
            _
 _ __  __ _| |_____   _ _ ___
| '  \/ _` | / / -_) | '_/ -_)
|_|_|_\__,_|_\_\___| |_| \___|
```
