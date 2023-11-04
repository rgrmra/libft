#  Libft Documentation

It's theumentation of my personal libft made at 42 São Paulo to use in my projects.

It's a collection of functions made by myself that behaves as the originals.

## How to use it?

Clone the repository to your project directory:

```shell
https://github.com/rgrmra/libft.git
```

#### Mandatory:

Then use the command `make` inside the _libft_ directory to build the compiled _libft archive_ the mandatory part of the project.

#### Bonus:

If you need the bonus part, use the command `make bonus` to include the bonus functions in the _libft archive_.

#### Remove:

To remove the objects compiled, use the command `make clean`. 

#### Delete:

And, if you want to delete everything, use the command `make fclean`.

---

### NAME

- libft.h - forty-two standard library

### SYNOPSIS

```c
#include "libft.h"
```

### DESCRIPTION

#### The **"libft.h"** headers defines the folowing:

**Type Definitions:**

<details>
    <summary><b>size_t</b></summary>
  <br> 

> Unsigned integral type of the result of the sizeof operator. As described in _<stddef.h>_.

<br>
</details>
<details>
    <summary><b>t_list</b></summary>
    <br>

> Linked list structure that provides the folowing filds:

**[source code](./libft.h)**

```c
void            *content;
struct s_list    next;
```
<br>
</details>
<br>

**Declarations:**

#### The following are declared as functions and may also be defined as macros. Function prototypes must be provided for use with an ISO C compiler.

<details>
    <summary><b>ft_atoi</b></summary>
    <br>

> Converts the initial portion of the string containing numeric characters to integer.

**[source code](./ft_atoi.c)**

```c
int    ft_atoi(const char *nptr);
```
<br>
</details>
<details>
    <summary><b>ft_bzero</b></summary>
    <br>

> Erase all bytes of the memory required with zero.

**[source code](./ft_bzero.c)**

```c
void    ft_bzero(void *s, size_t n);
```
<br>
</details>
<details>
    <summary><b>ft_calloc</b></summary>
    <br>

> Alloc a required space of memory and sets all bytes to zero.

**[source code](./ft_calloc.c)**

```c
void    *ft_calloc(size_t nmemb, size_t size);
```
<br>
</details>
<details>
    <summary><b>ft_isalnum</b></summary>
    <br>

> Checks for an alphanumeric character.

**[source code](./ft_isalnum.c)**

```c
int    ft_isalnum(int i);
```

</details>
<details>
    <summary><b>ft_isalpha</b></summary>
    <br>

> Checks for an alphabetic character.

**[source code](./ft_isalpha.c)**

```c
int    ft_isalpha(int i);
```
<br>
</details>
<details>
    <summary><b>ft_isascii</b></summary>
    <br>

> Checks whether character is a 7-bit US-ASCII character code.

**[source code](./ft_isascii.c)**

```c
int    ft_isascii(int i);
```
<br>
</details>
<details>
    <summary><b>ft_isdigit</b></summary>
    <br>

> Checks for a digit (0 through 9).

**[source code](./ft_isdigit.c)**

```c
int    ft_isdigit(int i);
```
---
<br>
</details>
<details>
    <summary><b>ft_isprint</b></summary>
    <br>

> Checks for any printable character including space.

**[source code](./ft_isprint.c)**

```c
int    ft_isprint(int i);
```
<br>
</details>
<details>
    <summary><b>ft_itoa</b></summary>
    <br>

> Converts a integer to string.

**[source code](./ft_itoa.c)**

```c
char    *ft_itoa(int i);
```
<br>
</details>
<details>
    <summary><b>ft_lstadd_back</b></summary>
    <br>

> Append a new node to the end of a list.

**[source code](./ft_lstadd_back.c)**

```c
void    ft_lstadd_back(t_list **lst, t_list *new);
```
<br>
</details>
<details>
    <summary><b>ft_lstadd_front</b></summary>
    <br>

> Append a new node to the begin of a list.

**[source code](./ft_lstadd_front.c)**
    
```c
void    ft_lstadd_front(t_list **lst, t_list *new);
```
<br>
</details>
<details>
    <summary><b>ft_lstclear</b></summary>
    <br>

> Erases all content and nodes of a list.

**[source code](./ft_lstclear.c)**
    
```c
void    ft_lstclear(t_list **lst, void (*del)(void *));
```
<br>
</details>
<details>
    <summary><b>ft_lstdelone</b></summary>
    <br>

> Deletes one node of a list.

**[source code](./ft_lstdelone.c)**
    
```c
void    ft_lstdelone(t_list *lst, void (*del)(void *));
```
<br>
</details>
<details>
    <summary><b>ft_lstiter</b></summary>
    <br>

> Applies a function to each content of a node of a list.

**[source code](./ft_lstiter.c)**
    
```c
void    ft_lstiter(t_list *lst, void (*f)(void *));
```
<br>
</details>
<details>
    <summary><b>ft_lstlast</b></summary>
    <br>

> Gets the last node of a list.

**[source code](./ft_lstlast.c)**
    
```c
t_list    ft_lstlast(t_list *lst);
```
<br>
</details>
<details>
    <summary><b>ft_lstmap</b></summary>
    <br>

> Returns a new list applying a required function to each node of the list.

**[source code](./ft_lstmap.c)**
    
```c
t_list    ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
```
<br>
</details>
<details>
    <summary><b>ft_lstnew</b></summary>
    <br>

> Creates a new node.

**[source code](./ft_lstnew.c)**
    
```c
t_list    *ft_lstnew(void *content);
```
<br>
</details>
<details>
    <summary><b>ft_lstsize</b></summary>
    <br>

> Gets the size of a list.

**[source code](./ft_lstsize.c)**
    
```c
int    ft_lstsize(t_list *lst);
```
<br>
</details>
<details>
    <summary><b>ft_memchr</b></summary>
    <br>

> Finds the first required byte in an area pointed in the memory.

**[source code](./ft_memchr.c)**
    
```c
void    *ft_memchr(const void *s, int c, size_t n);
```
<br>
</details>
<details>
    <summary><b>ft_memcmp</b></summary>
    <br>

>  Compares the amount of bytes between two areas pointed in the memory.

**[source code](./ft_memcmp.c)**
    
```c
int    ft_memcmp(const void *s1, const void *s2, size_t n);
```
<br>
</details>
<details>
    <summary><b>ft_memcpy</b></summary>
    <br>

> Copies the required amount of bytes from an area to another area pointed in the memory.

**[source code](./ft_memcpy.c)**

    
```c
void    *ft_memcpy(void *dest, const void *src, size_t n);
```
<br>
</details>
<details>
    <summary><b>ft_memmove</b></summary>
    <br>

> Moves an requried amount of bytes from an area to another area pointed in the memory.

**[source code](./ft_memmove.c)**
    
```c
void    *ft_memmove(void *dest, const void *src, size_t	n);
```
<br>
</details>
<details>
    <summary><b>ft_memset</b></summary>
    <br>

> Sets all bytes required in the memory area pointed with the byte informed.

**[source code](./ft_memset.c)**
    
```c
void    *ft_memset(void *s, int c, size_t n);
```
<br>
</details>
<details>
    <summary><b>ft_putchar_fd</b></summary>
    <br>

> Prints a char in the required filedescriptor.

**[source code](./ft_putchar_fd.c)**
    
```c
void    ft_putchar_fd(char c, int fd);
```
<br>
</details>
<details>
    <summary><b>ft_putendl_fd</b></summary>
    <br>

> Prints a string followed by a new line in the required filedescriptor.

**[source code](./ft_putendl_fd.c)**
    
```c
void    ft_putendl_fd(char *s, int fd);
```
<br>
</details>
<details>
    <summary><b>ft_putnbr_fd</b></summary>
    <br>

> Prints a integer number in the required filedescriptor.

**[source code](./ft_putnbr_fd.c)**
    
```c
void    ft_putnbr_fd(int n, int fd);
```
<br>
</details>
<details>
    <summary><b>ft_putstr_fd</b></summary>
    <br>

> Prints a string in the required filedescriptor.

**[source code](./ft_putstr_fd.c)**
    
```c
void    ft_putstr_fd(char *s, int fd);
```
<br>
</details>
<details>
    <summary><b>ft_split</b></summary>
    <br>

> Splits a constant string into an allocated array of strings containg the words splited by the required separator.

**[source code](./ft_split.c)**
    
```c
char    **ft_split(const char *s, char c);
```
<br>
</details>
<details>
    <summary><b>ft_strchr</b></summary>
    <br>

> Finds the first required character in a constant string.

**[source code](./ft_strchr.c)**
    
```c
char    *ft_strchr(const char *s, int c);
```
<br>
</details>
<details>
    <summary><b>ft_strdup</b></summary>
    <br>

> Duplicates a required constant string.

**[source code](./ft_strdup.c)**
    
```c
char    *ft_strdup(const char *s);
```
<br>
</details>
<details>
    <summary><b>ft_striteri</b></summary>
    <br>

> Iterates a function to each character of a string.

**[source code](./ft_striteri.c)**
    
```c
void    ft_striteri(char *s, void (*f)(unsigned int, char *));
```
<br>
</details>
<details>
    <summary><b>ft_strjoin</b></summary>
    <br>

> Concatenates a new string containg the two strings informed.

**[source code](./ft_strljoin.c)**
    
```c
char    *ft_strjoin(const char *s1, const char *s2);
```
<br>
</details>
<details>
    <summary><b>ft_strlcat</b></summary>
    <br>

> Concatemates a string to another string informed.

**[source code](./ft_strlcat.c)**
    
```c
size_t    ft_strlcat(char *dest, char *src, size_t size);
```
<br>
</details>
<details>
    <summary><b>ft_strlcpy</b></summary>
    <br>

> Copies the content of a string to another string informed.

**[source code](./ft_strlcpy.c)**
    
```c
size_t    ft_strlcpy(char *dest, char *src, size_t size);
```
<br>
</details>
<details>
    <summary><b>ft_strlen</b></summary>
    <br>

> Gets the size of a constant string.

**[source code](./ft_strlen.c)**
    
```c
size_t    ft_strlen(const char *s);
```
<br>
</details>
<details>
    <summary><b>ft_strmapi</b></summary>
    <br>

> Duplicates a new string and applies a function to each character of the string.

**[source code](./ft_strmapi.c)**
    
```c
char    *ft_strmapi(const char *s, char (*f)(unsigned int, char));
```
<br>
</details>
<details>
    <summary><b>ft_strncmp</b></summary>
    <br>

> Compares two strings.

**[source code](./ft_strncmp.c)**
    
```c
int    ft_strncmp(const char *s1, const char *s2, size_t n);
```
<br>
</details>
<details>
    <summary><b>ft_strrchr</b></summary>
    <br>

> Finds the last required character in a constant string.

**[source code](./ft_strrchr.c)**
    
```c
char    *ft_strrchr(const char *s, int c);
```
<br>
</details>
<details>
    <summary><b>ft_strtrim</b></summary>
    <br>

> Removes the amount of required characters in the begin and end of the string.

**[source code](./ft_strtrim.c)**
    
```c
char    *ft_strtrim(const char *s1, const char *set);
```
<br>
</details>
<details>
    <summary><b>ft_substr</b></summary>
    <br>

> Generates a sub new string from a required string.

**[source code](./ft_substr.c)**
    
```c
char    *ft_substr(const char *s, unsigned int start, size_t len);
```
<br>
</details>
<details>
    <summary><b>ft_tolower</b></summary>
    <br>

> Changes all uppercase characters to lowecase.

**[source code](./ft_tolower.c)**
    
```c
int    ft_tolower(int i);
```
<br>
</details>
<details>
    <summary><b>ft_toupper</b></summary>
    <br>

> Changes all lowecase characters to uppercase.

**[source code](./ft_toupper.c)**
    
```c
int    ft_toupper(int i);
```
<br>
</details>

- Inclusion of _"libft.h"_ header may also make visible all symbols from _<stddef.h>_ and _<stdlib.h>_.

### APPLICATION USAGE

- None

### FUTURE DIRECTIONS

- None
