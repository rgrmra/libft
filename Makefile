# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/12 10:01:10 by rde-mour          #+#    #+#              #
#    Updated: 2023/10/12 19:50:27 by rde-mour         ###   ########.org.br    #
#                                                                              #
# **************************************************************************** #

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
		  ft_substr.c \
		  ft_strjoin.c \
		  ft_strtrim.c \
		  ft_itoa.c \
		  ft_strmapi.c \
		  ft_striteri.c \
		  ft_putchar_fd.c \
		  ft_putstr_fd.c \
		  ft_putendl_fd.c \
		  ft_putnbr_fd.c \
		  ft_split.c

BONUS = ft_lstnew.c \
		ft_lstadd_front.c \
		ft_lstsize.c \
		ft_lstlast.c \
		ft_lstadd_back.c \
		ft_lstdelone.c \
		ft_lstclear.c \
		ft_lstiter.c \
		ft_lstmap.c

HEADER = ./ 

OBJS = $(SRCS:%.c=%.o)
OBJSBONUS = $(BONUS:%.c=%.o)

CC = cc
FLAGS = -Wall -Wextra -Werror

ifdef WITH_BONUS
	OBJS += $(OBJSBONUS)
endif

all: $(NAME)

$(NAME): $(OBJS)
	@echo "Creating archive: $@"
	@ar rc -s $(NAME) $(OBJS)

%.o: %.c
	@echo "Compiling: $@"
	@$(CC) $(FLAGS) -c $< -o $@ -I$(HEADER)

bonus:
	@make WITH_BONUS=TRUE --no-print-directory

so:
	$(CC) -nostartfiles -fPIC $(CFLAGS) $(SRCS)
	gcc -nostartfiles -shared -o libft.so $(OBJS) $(OBJSBONUS)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
