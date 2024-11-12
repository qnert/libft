# Libft - C Library Project

Libft is a custom C library that implements essential functions found in the standard C library, as well as additional utility functions useful for other C projects. This project is part of the **42 School** curriculum and introduces the concepts of creating a static library, memory management, and adhering to strict coding standards.

---

## Table of Contents
1. [Project Overview](#project-overview)
2. [Common Instructions](#common-instructions)
3. [Part 1 - Libc Functions](#part-1---libc-functions)
4. [Part 2 - Additional Functions](#part-2---additional-functions)
5. [Bonus Part - Linked List Functions](#bonus-part---linked-list-functions)

---

## Project Overview

**Program name:** `libft.a`  
**Files:** `Makefile`, `libft.h`, `ft_*.c`  
**Makefile Rules:** `NAME`, `all`, `clean`, `fclean`, `re`, `bonus`  
**Objective:** Write a collection of functions for a C library that will be useful across multiple projects.

---

## Common Instructions

- **Language:** The project must be written in **C** and adhere to the 42 School **Norm**.
- **Memory Management:** All allocated memory on the heap must be properly freed; no memory leaks are allowed.
- **Makefile Requirements:** The Makefile must compile with `-Wall`, `-Wextra`, and `-Werror` flags and should contain the specified rules. `libtool` is not allowed; use `ar` to create `libft.a`.
- **Testing:** It’s recommended to create personal test programs to verify each function, even though these tests won’t be submitted.
- **Submission:** Only files in the Git repository will be graded, and any error during automated grading (Deepthought) will stop the evaluation process.

---

### Makefile Rules
- **all**: Compiles the library
- **clean**: Removes object files
- **fclean**: Removes object files and the library
- **re**: Recompiles everything from scratch
- **bonus**: Compiles additional functions in separate `_bonus` files

---

## Part 1 - Libc Functions

This section involves recreating several functions from the standard C library. Each function has the same behavior as the original, but the name is prefixed with `ft_` (e.g., `ft_strlen` for `strlen`). These functions do not use external library calls unless stated otherwise.

### List of Part 1 Functions

- **Character Checks**: `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`
- **String Manipulation**: `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`
- **Memory Manipulation**: `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`
- **Character Conversion**: `ft_toupper`, `ft_tolower`
- **String to Integer**: `ft_atoi`
- **Memory Allocation**: `ft_calloc`, `ft_strdup`

---

## Part 2 - Additional Functions

The following functions provide additional functionality not directly included in the C library. They are useful for string manipulation, memory allocation, and other utilities.

### List of Part 2 Functions

- **String Manipulation and Memory Allocation**:
  - `ft_substr`: Creates a substring from a given string
  - `ft_strjoin`: Concatenates two strings into a new string
  - `ft_strtrim`: Trims specified characters from the beginning and end of a string
  - `ft_split`: Splits a string into an array based on a delimiter
  - `ft_itoa`: Converts an integer to a string
  - `ft_strmapi`: Creates a new string by applying a function to each character
  - `ft_striteri`: Applies a function to each character of a string by reference

- **File Descriptor Functions**:
  - `ft_putchar_fd`: Writes a character to a given file descriptor
  - `ft_putstr_fd`: Writes a string to a given file descriptor
  - `ft_putendl_fd`: Writes a string followed by a newline to a given file descriptor
  - `ft_putnbr_fd`: Writes an integer to a given file descriptor

---

## Bonus Part - Linked List Functions

If completed, the bonus section introduces functions to work with linked lists. Use the following structure for each node:

```c
typedef struct s_list {
    void *content;
    struct s_list *next;
} t_list;


