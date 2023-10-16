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

    void         *<a href="">content;</a>
    struct s_list <a href="">next;</a>


    The following functions are declared as functions and may also be defined as macros.

    int		  <a href="./doc/ft_atoi">ft_atoi</a>(const char *nptr);
    void	  <a href="./doc/ft_bzero">ft_bzero</a>(void *s, size_t n);
    void	 *<a href="./doc/ft_calloc">ft_calloc</a>(size_t nmemb, size_t size);
    int		  <a href="./doc/ft_isalnum">ft_isalnum</a>(int i);
    int		  <a href="./doc/ft_isalpha">ft_isalpha</a>(int i);
    int		  <a href="./doc/ft_isascii">ft_isascii</a>(int i);
    int		  <a href="./doc/ft_isdigit">ft_isdigit</a>(int i);
    int		  <a href="./doc/ft_isprint">ft_isprint</a>(int i);
    char	 *<a href="./doc/ft_itoa">ft_itoa</a>(int i);
    void	  <a href="./doc/ft_lstadd">ft_lstadd_back</a>(t_list **lst, t_list *new);
    void	  <a href="./doc/ft_lstadd">ft_lstadd_front</a>(t_list **lst, t_list *new);
    void	  <a href="./doc/ft_lstclear">ft_lstclear</a>(t_list **lst, void (*del)(void *));
    void	  <a href="./doc/ft_lstdelone">ft_lstdelone</a>(t_list *lst, void (*del)(void *));
    void	  <a href="./doc/ft_lstiter">ft_lstiter</a>(t_list *lst, void (*f)(void *));
    t_list	 *<a href="./doc/ft_lstlast">ft_lstlast</a>(t_list *lst);
    t_list	 *<a href="./doc/ft_lstmap">ft_lstmap</a>(t_list *lst, void *(*f)(void *), void (*del)(void *));
    t_list	 *<a href="./doc/ft_lstnew">ft_lstnew</a>(void *content);
    int		  <a href="./doc/ft_lstsize">ft_lstsize</a>(t_list *lst);
    void	 *<a href="./doc/ft_memchr">ft_memchr</a>(const void *s, int c, size_t n);
    int		  <a href="./doc/ft_memcmp">ft_memcmp</a>(const void *s1, const void *s2, size_t n);
    void	 *<a href="./doc/ft_memcpy">ft_memcpy</a>(void *dest, const void *src, size_t	n);
    void	 *<a href="./doc/ft_memmove">ft_memmove</a>(void *dest, const void *src, size_t	n);
    void	 *<a href="./doc/ft_memset">ft_memset</a>(void *s, int c, size_t n);
    void	  <a href="./doc/ft_putchar_fd">ft_putchar_fd</a>(char c, int fd);
    void	  <a href="./doc/ft_putendl_fd">ft_putendl_fd</a>(char *s, int fd);
    void	  <a href="./doc/ft_putnbr">ft_putnbr_fd</a>(int n, int fd);
    void	  <a href="./doc/ft_putstr">ft_putstr_fd</a>(char *s, int fd);
    char	**<a href="./doc/ft_split">ft_split</a>(const char *s, char c);
    char	 *<a href="./doc/ft_strchr">ft_strchr</a>(const char *s, int c);
    char	 *<a href="./doc/ft_strdup">ft_strdup</a>(const char *s);
    void	  <a href="./doc/ft_striteri">ft_striteri</a>(char *s, void (*f)(unsigned int, char *));
    char	 *<a href="./doc/ft_strljoin">ft_strjoin</a>(const char *s1, const char *s2);
    size_t	  <a href="./doc/ft_strlcat">ft_strlcat</a>(char *dest, char *src, size_t size);
    size_t	  <a href="./doc/ft_strlcpy">ft_strlcpy</a>(char *dest, char *src, size_t size);
    size_t	  <a href="./doc/ft_strlen">ft_strlen</a>(const char *s);
    char	 *<a href="./doc/ft_strmapi">ft_strmapi</a>(const char *s, char (*f)(unsigned int, char));
    int		  <a href="./doc/ft_strncmp">ft_strncmp</a>(const char *s1, const char *s2, size_t n);
    char	 *<a href="./doc/ft_strrchr">ft_strrchr</a>(const char *s, int c);
    char	 *<a href="./doc/ft_strtrim">ft_strtrim</a>(const char *s1, const char *set);
    char	 *<a href="./doc/ft_substr">ft_substr</a>(const char *s, unsigned int start, size_t len);
    int		  <a href="./doc/ft_tolower">ft_tolower</a>(int i);
    int		  <a href="./doc/ft_toupper">ft_toupper</a>(int i);


    Inclusion of <i>"libft.h"</i> header may also make visible all symbols from <i>&#60;stddef.h&#62;</i> and <i>&#60;stdlib.h&#62;</i>.

<b>APPLICATION USAGE</b>

    None

<b>FUTURE DIRECTIONS</b>

    None

<b>SEE ALSO</b>

    <a href="./doc/ft_atoi">ft_atoi()</a>, <a href="./doc/ft_bzero">ft_bzero()</a>, <a href="./doc/ft_calloc">ft_calloc()</a>, <a href="./doc/ft_isalnum">ft_isalnum()</a>, <a href="./doc/ft_isalpha">ft_isalpha()</a>, <a href="./doc/ft_isascii">ft_isascii()</a>, <a href="./doc/ft_isdigit">ft_isdigit()</a>, <a href="./doc/ft_isprint">ft_isprint()</a>, 
    <a href="./doc/ft_itoa">ft_itoa()</a>, <a href="./doc/ft_lstadd">ft_lstadd_back()</a>, <a href="./doc/ft_lstadd">ft_lstadd_front()</a>, <a href="./doc/ft_lstclear">ft_lstclear()</a>, <a href="./doc/ft_lstdelone">ft_lstdelone()</a>, <a href="./doc/ft_lstiter">ft_lstiter()</a>, <a href="./doc/ft_lstlast">ft_lstlast</a>, 
    <a href="./doc/ft_lstmap">ft_lstmap()</a>, <a href="./doc/ft_lstnew">ft_lstnew()</a>, <a href="./doc/ft_lstsize">ft_lstsize()</a>, <a href="./doc/ft_memchr">ft_memchr()</a>, <a href="./doc/ft_memcmp">ft_memcmp()</a>, <a href="./doc/ft_memcpy">ft_memcpy()</a>, <a href="./doc/ft_memmove">ft_memmove()</a>, <a href="./doc/ft_memset">ft_memset()</a>,
    <a href="./doc/ft_putchar_fd">ft_putchar_fd()</a>, <a href="./doc/ft_putendl_fd">ft_putendl_fd()</a>, <a href="./doc/ft_putnbr">ft_putnbr_fd()</a>, <a href="./doc/ft_putstr">ft_putstr_fd()</a>, <a href="./doc/ft_split">ft_split()</a>, <a href="./doc/ft_strchr">ft_strchr()</a>, <a href="./doc/ft_strdup">ft_strdup()</a>,
  <a href="./doc/ft_striteri">ft_striteri()</a>, <a href="./doc/ft_strljoin">ft_strjoin()</a>, <a href="./doc/ft_strlcat">ft_strlcat()</a>, <a href="./doc/ft_strlcpy">ft_strlcpy()</a>, <a href="./doc/ft_strlen">ft_strlen()</a>, <a href="./doc/ft_strmapi">ft_strmapi()</a>, <a href="./doc/ft_strncmp">ft_strncmp()</a>,
  <a href="./doc/ft_strrchr">ft_strrchr()</a>, <a href="./doc/ft_strtrim">ft_strtrim()</a>, <a href="./doc/ft_substr">ft_substr()</a>, <a href="./doc/ft_tolower">ft_tolower()</a>, <a href="./doc/ft_toupper">ft_toupper()</a>
</pre>
