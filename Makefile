NAME = libft.a
SRCS = ft_isalpha.c \
		  ft_isdigit.c \
		  ft_isalnum.c \
		  ft_isascii.c \
		  ft_isprint.c \
		  ft_strlen.c \
		  ft_memset.c \
		  ft_bzero.c \
		  ft_toupper.c \
		  ft_tolower.c \
		  ft_strchr.c \
		  ft_strrchr.c \
		  ft_strncmp.c \
		  ft_memchr.c \
		  ft_memcpy.c \
		  ft_memcmp.c \
		  ft_strlcpy.c \
		  ft_strlcat.c \
		  ft_atoi.c \
		  ft_calloc.c \
		  ft_strdup.c \
		  ft_memmove.c \
		  ft_strnstr.c \
		  ft_substr.c

HEADER = ./ 

OBJS = $(SRCS:%.c=%.o)

CC = cc
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	@echo "Creating archive: $@"
	@ar rc -s $(NAME) $(OBJS)

%.o: %.c
	@echo "Compiling: $@"
	@$(CC) $(FLAGS) -c $< -o $@ -I$(HEADER)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
