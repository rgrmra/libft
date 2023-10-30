#  Libft Documentation

It's the documentation of my personal libft made at 42 São Paulo to use in my projects.

It's a collection of functions made by myself that behaves as the originals.

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

- **size_t**<br>
  Unsigned integral type of the result of the sizeof operator. As described in _<stddef.h>_.

- **[list_t](./doc/list_t.md)** | **[source code](../libft.h)**<br>
Linked list structure that provides the folowing filds:

```c
void            *content;
struct s_list    next;
```

<br>

**Declarations:**

#### The following are declared as functions and may also be defined as macros. Function prototypes must be provided for use with an ISO C compiler.


-  **[ft_atoi](./doc/ft_atoi.md)** | **[source code](../ft_atoi.c)**<br>
    Converts the initial portion of the string containing numeric characters to integer.
```c
int    ft_atoi(const char *nptr);
```

<br>

- **[ft_bzero](./doc/ft_bzero.md)** | **[source code](../ft_bzero.c)**<br>
    Erase all bytes of the memory required with zero.
```c
void    ft_bzero(void *s, size_t n);
```

<br>

- **[ft_calloc](./doc/ft_calloc.md)** | **[source code](../ft_calloc.c)**<br>
    Alloc a required space of memory and sets all bytes to zero.
```c
void    *ft_calloc(size_t nmemb, size_t size);
```

<br>

-    **[ft_isalnum](./doc/ft_isalnum.md)** | **[source code](../ft_isalnum.c)**<br>
    Checks for an alphanumeric character.
```c
int    ft_isalnum(int i);
```

<br>

- **[ft_isalpha](./doc/ft_isalpha.md)** | **[source code](../ft_isalpha.c)**<br>
    Checks for an alphabetic character.
```c
int    ft_isalpha(int i);
```

<br>

- **[ft_isascii](./doc/ft_isascii.md)** | **[source code](../ft_isascii.c)**<br>
    Checks whether character is a 7-bit US-ASCII character code.
```c
int    ft_isascii(int i);
```

<br>

- **[ft_isdigit](./doc/ft_isdigit.md)** | **[source code](../ft_isdigit.c)**<br>
    Checks for a digit (0 through 9).
```c
int    ft_isdigit(int i);
```

<br>

- **[ft_isprint](./doc/ft_isprint.md)** | **[source code](../ft_isprint.c)**<br>
    Checks for any printable character including space.
```c
int    ft_isprint(int i);
```

<br>

- **[ft_itoa](./doc/ft_itoa.md)** | **[source code](../ft_itoa.c)**<br>
    Converts a integer to string.
```c
char    *ft_itoa(int i);
```

<br>

- **[ft_lstadd_back](./doc/ft_lstadd_back.md)** | **[source code](../ft_lstadd_back_bonus.c)**<br>
    
```c
void    ft_lstadd_back(t_list **lst, t_list *new);
```

<br>

- **[ft_lstadd_front](./doc/ft_lstadd_front.md)** | **[source code](../ft_lstadd_front_bonus.c)**<br>
    
```c
void    ft_lstadd_front(t_list **lst, t_list *new);
```

<br>

- **[ft_lstclear](./doc/ft_lstclear.md)** | **[source code](../ft_lstclear_bonus.c)**<br>
    
```c
void    ft_lstclear(t_list **lst, void (*del)(void *));
```

<br>

- **[ft_lstdelone](./doc/ft_lstdelone.md)** | **[source code](../ft_lstdelone_bonus.c)**<br>
    
```c
void    ft_lstdelone(t_list *lst, void (*del)(void *));
```

<br>

- **[ft_lstiter](./doc/ft_lstiter.md)** | **[source code](../ft_lstiter_bonus.c)**<br>
    
```c
void    ft_lstiter(t_list *lst, void (*f)(void *));
```

<br>

- **[ft_lstlast](./doc/ft_lstlast.md)** | **[source code](../ft_lstlast_bonus.c)**<br>
    
```c
t_list    ft_lstlast(t_list *lst);
```

<br>

- **[ft_lstmap](./doc/ft_lstmap.md)** | **[source code](../ft_lstmap_bonus.c)**<br>
    
```c
t_list    ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
```

<br>

- **[ft_lstnew](./doc/ft_lstnew.md)** | **[source code](../ft_lstnew_bonus.c)**<br>
    
```c
t_list    *ft_lstnew(void *content);
```

<br>

- **[ft_lstsize](./doc/ft_lstsize.md)** | **[source code](../ft_lstsize_bonus.c)**<br>
    
```c
int    ft_lstsize(t_list *lst);
```

<br>

- **[ft_memchr](./doc/ft_memchr.md)** | **[source code](../ft_memchr.c)**<br>
    
```c
void    *ft_memchr(const void *s, int c, size_t n);
```

<br>

- **[ft_memcmp](./doc/ft_memcmp.md)** | **[source code](../ft_memcmp.c)**<br>
    
```c
int    ft_memcmp(const void *s1, const void *s2, size_t n);
```

<br>

- **[ft_memcpy](./doc/ft_memcpy.md)** | **[source code](../ft_memcpy.c)**<br>
    
```c
void    *ft_memcpy(void *dest, const void *src, size_t n);
```

<br>

- **[ft_memmove](./doc/ft_memmove.md)** | **[source code](../ft_memmove.c)**<br>
    
```c
void    *ft_memmove(void *dest, const void *src, size_t	n);
```

<br>

- **[ft_memset](./doc/ft_memset.md)** | **[source code](../ft_memset.c)**<br>
    
```c
void    *ft_memset(void *s, int c, size_t n);
```

<br>

- **[ft_putchar_fd](./doc/ft_putchar_fd.md)** | **[source code](../ft_putchar_fd.c)**<br>
    
```c
void    ft_putchar_fd(char c, int fd);
```

<br>

- **[ft_putendl_fd](./doc/ft_putendl_fd.md)** | **[source code](../ft_putendl_fd.c)**<br>
    
```c
void    ft_putendl_fd(char *s, int fd);
```

<br>

- **[ft_putnbr_fd](./doc/ft_putnbr_fd.md)** | **[source code](../ft_putnbr_fd.c)**<br>
    
```c
void    ft_putnbr_fd(int n, int fd);
```

<br>

- **[ft_putstr_fd](./doc/ft_putstr_fd.md)** | **[source code](../ft_putstr_fd.c)**<br>
    
```c
void    ft_putstr_fd(char *s, int fd);
```

<br>

- **[ft_split](./doc/ft_split.md)** | **[source code](../ft_split.c)**<br>
    
```c
char    **ft_split(const char *s, char c);
```

<br>

- **[ft_strchr](./doc/ft_strchr.md)** | **[source code](../ft_strchr.c)**<br>
    
```c
char    *ft_strchr(const char *s, int c);
```

<br>

- **[ft_strdup](./doc/ft_strdup.md)** | **[source code](../ft_strdup.c)**<br>
    
```c
char    *ft_strdup(const char *s);
```

<br>

- **[ft_striteri](./doc/ft_striteri.md)** | **[source code](../ft_striteri.c)**<br>
    
```c
void    ft_striteri(char *s, void (*f)(unsigned int, char *));
```

<br>

- **[ft_strljoin](./doc/ft_strljoin.md)** | **[source code](../ft_strljoin.c)**<br>
    
```c
char    *ft_strjoin(const char *s1, const char *s2);
```

<br>

- **[ft_strlcat](./doc/ft_strlcat.md)** | **[source code](../ft_strlcat.c)**<br>
    
```c
size_t    ft_strlcat(char *dest, char *src, size_t size);
```

<br>

- **[ft_strlcpy](./doc/ft_strlcpy.md)** | **[source code](../ft_strlcpy.c)**<br>
    
```c
size_t    ft_strlcpy(char *dest, char *src, size_t size);
```

<br>

- **[ft_strlen](./doc/ft_strlen.md)** | **[source code](../ft_strlen.c)**<br>
    
```c
size_t    ft_strlen(const char *s);
```

<br>

- **[ft_strmapi](./doc/ft_strmapi.md)** | **[source code](../ft_strmapi.c)**<br>
    
```c
char    *ft_strmapi(const char *s, char (*f)(unsigned int, char));
```

<br>

- **[ft_strncmp](./doc/ft_strncmp.md)** | **[source code](../ft_strncmp.c)**<br>
    
```c
int    ft_strncmp(const char *s1, const char *s2, size_t n);
```

<br>

- **[ft_strrchr](./doc/ft_strrchr.md)** | **[source code](../ft_strrchr.c)**<br>
    
```c
char    *ft_strrchr(const char *s, int c);
```

<br>

- **[ft_strtrim](./doc/ft_strtrim.md)** | **[source code](../ft_strtrim.c)**<br>
    
```c
char    *ft_strtrim(const char *s1, const char *set);
```

<br>

- **[ft_substr](./doc/ft_substr.md)** | **[source code](../ft_substr.c)**<br>
    
```c
char    *ft_substr(const char *s, unsigned int start, size_t len);
```

<br>

- **[ft_tolower](./doc/ft_tolower.md)** | **[source code](../ft_tolower.c)**<br>
    
```c
int    ft_tolower(int i);
```

<br>

- **[ft_toupper](./doc/ft_toupper.md)** | **[source code](../ft_toupper.c)**<br>
    
```c
int    ft_toupper(int i);
```

<br>

- Inclusion of _"libft.h"_ header may also make visible all symbols from _<stddef.h>_ and _<stdlib.h>_.

### APPLICATION USAGE

- None

### FUTURE DIRECTIONS

- None
