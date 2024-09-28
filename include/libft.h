/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 19:00:04 by rde-mour          #+#    #+#             */
/*   Updated: 2024/09/28 12:13:55 by rde-mour         ###   ########.org.br   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include "ft_printf_bonus.h"

# ifndef FT_CTYPE_H
#  define FT_CTYPE_H

int		check(char *str, int (*f)(int));
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_isspace(int c);
int		ft_tolower(int c);
int		ft_toupper(int c);

# endif

# ifndef GET_NEXT_LINE_H
#  define GET_NEXT_LINE_H

#  ifndef BUFFER_SIZE
#   define BUFFER_SIZE 2048 
#  endif

typedef struct s_string
{
	int				character;
	struct s_string	*next;
}					t_buffered;

enum	e_end
{
	NEW_LINE,
	END_LINE
};

char	*get_next_line(int fd);
char	*gnl_lstclear(t_buffered **list);
void	gnl_lstadd_back(t_buffered **list, int character);
int		gnl_lstfind_character(t_buffered *list, int character, int eof);

# endif

# ifndef FT_STDIO_H
#  define FT_STDIO_H

void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);

# endif

# ifndef FT_STDLIB_H
#  define FT_STDLIB_H

int		ft_atoi(const char *nptr);
long	ft_atol(const char *nptr);
void	*ft_calloc(size_t nmemb, size_t size);
char	*itoa(int n);
void	*ft_realloc(void *ptr, size_t old_size, size_t new_size);

# endif

# ifndef FT_STDLST_H
#  define FT_STDLST_H

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list	*ft_lstnew(void *content);
int		ft_lstsize(t_list *lst);

# endif

# ifndef FT_STRING_H
#  define FT_STRING_H

void	ft_bzero(void *s, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
char	**ft_split(const char *s, char c);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s);
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strjoin(const char *s1, const char *s2);
size_t	ft_strlcat(char *dest, const char *src, size_t size);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
size_t	ft_strlen(const char *s);
char	*ft_strmapi(const char *s, char (*f)(unsigned int, char));
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strrchr(const char *s, int c);
void	ft_strrplc(char *str, char old, char new);
char	*ft_strtrim(const char *s1, const char *set);
char	*ft_substr(const char *s, unsigned int start, size_t len);
void	ft_split_clear(char **str);

# endif

#endif
