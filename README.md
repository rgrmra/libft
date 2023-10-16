#  libft.h
<pre style="overflow-x: auto; white-space: pre-wrap; word-wrap: break-word;">
<b>NAME</b>

    libft.h - forty-two standard library

<b>SYNOPSIS</b>

    #include "libft.h"

<b>DESCRIPTION</b>

    The <b>"libft.h"</b> headers defines the folowing:

    <b>size_t</b>
        Unsigned integral type of the result of the sizeof operator. As described in <i>&#60;stddef.h&#62;</i>.

    <b>list_t</b>
        Linked list structure that provides the folowing filds:

    void         *<a href="./doc/list_t.md">content;</a>
    struct s_list <a href="./doc/list_t.md">next;</a>


    The following functions are declared as functions and may also be defined as macros.

    int		  <a href="./doc/ft_atoi.md">ft_atoi</a>(const char *nptr);
    void	  <a href="./doc/ft_bzero.md">ft_bzero</a>(void *s, size_t n);
    void	 *<a href="./doc/ft_calloc.md">ft_calloc</a>(size_t nmemb, size_t size);
    int		  <a href="./doc/ft_isalnum.md">ft_isalnum</a>(int i);
    int		  <a href="./doc/ft_isalpha.md">ft_isalpha</a>(int i);
    int		  <a href="./doc/ft_isascii.md">ft_isascii</a>(int i);
    int		  <a href="./doc/ft_isdigit.md">ft_isdigit</a>(int i);
    int		  <a href="./doc/ft_isprint.md">ft_isprint</a>(int i);
    char	 *<a href="./doc/ft_itoa.md">ft_itoa</a>(int i);
    void	  <a href="./doc/ft_lstadd.md">ft_lstadd_back</a>(t_list **lst, t_list *new);
    void	  <a href="./doc/ft_lstadd.md">ft_lstadd_front</a>(t_list **lst, t_list *new);
    void	  <a href="./doc/ft_lstclear.md">ft_lstclear</a>(t_list **lst, void (*del)(void *));
    void	  <a href="./doc/ft_lstdelone.md">ft_lstdelone</a>(t_list *lst, void (*del)(void *));
    void	  <a href="./doc/ft_lstiter.md">ft_lstiter</a>(t_list *lst, void (*f)(void *));
    t_list	 *<a href="./doc/ft_lstlast.md">ft_lstlast</a>(t_list *lst);
    t_list	 *<a href="./doc/ft_lstmap.md">ft_lstmap</a>(t_list *lst, void *(*f)(void *), void (*del)(void *));
    t_list	 *<a href="./doc/ft_lstnew.md">ft_lstnew</a>(void *content);
    int		  <a href="./doc/ft_lstsize.md">ft_lstsize</a>(t_list *lst);
    void	 *<a href="./doc/ft_memchr.md">ft_memchr</a>(const void *s, int c, size_t n);
    int		  <a href="./doc/ft_memcmp.md">ft_memcmp</a>(const void *s1, const void *s2, size_t n);
    void	 *<a href="./doc/ft_memcpy.md">ft_memcpy</a>(void *dest, const void *src, size_t	n);
    void	 *<a href="./doc/ft_memmove.md">ft_memmove</a>(void *dest, const void *src, size_t	n);
    void	 *<a href="./doc/ft_memset.md">ft_memset</a>(void *s, int c, size_t n);
    void	  <a href="./doc/ft_putchar_fd.md">ft_putchar_fd</a>(char c, int fd);
    void	  <a href="./doc/ft_putendl_fd.md">ft_putendl_fd</a>(char *s, int fd);
    void	  <a href="./doc/ft_putnbr.md">ft_putnbr_fd</a>(int n, int fd);
    void	  <a href="./doc/ft_putstr.md">ft_putstr_fd</a>(char *s, int fd);
    char	**<a href="./doc/ft_split.md">ft_split</a>(const char *s, char c);
    char	 *<a href="./doc/ft_strchr.md">ft_strchr</a>(const char *s, int c);
    char	 *<a href="./doc/ft_strdup.md">ft_strdup</a>(const char *s);
    void	  <a href="./doc/ft_striteri.md">ft_striteri</a>(char *s, void (*f)(unsigned int, char *));
    char	 *<a href="./doc/ft_strljoin.md">ft_strjoin</a>(const char *s1, const char *s2);
    size_t	  <a href="./doc/ft_strlcat.md">ft_strlcat</a>(char *dest, char *src, size_t size);
    size_t	  <a href="./doc/ft_strlcpy.md">ft_strlcpy</a>(char *dest, char *src, size_t size);
    size_t	  <a href="./doc/ft_strlen.md">ft_strlen</a>(const char *s);
    char	 *<a href="./doc/ft_strmapi.md">ft_strmapi</a>(const char *s, char (*f)(unsigned int, char));
    int		  <a href="./doc/ft_strncmp.md">ft_strncmp</a>(const char *s1, const char *s2, size_t n);
    char	 *<a href="./doc/ft_strrchr.md">ft_strrchr</a>(const char *s, int c);
    char	 *<a href="./doc/ft_strtrim.md">ft_strtrim</a>(const char *s1, const char *set);
    char	 *<a href="./doc/ft_substr.md">ft_substr</a>(const char *s, unsigned int start, size_t len);
    int		  <a href="./doc/ft_tolower.md">ft_tolower</a>(int i);
    int		  <a href="./doc/ft_toupper.md">ft_toupper</a>(int i);


    Inclusion of <i>"libft.h"</i> header may also make visible all symbols from <i>&#60;stddef.h&#62;</i> and <i>&#60;stdlib.h&#62;</i>.

<b>APPLICATION USAGE</b>

    None

<b>FUTURE DIRECTIONS</b>

    None
</pre>
