# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/12 10:01:10 by rde-mour          #+#    #+#              #
#    Updated: 2023/11/04 11:15:48 by rde-mour         ###   ########.org.br    #
#                                                                              #
# **************************************************************************** #

NAME				= libft.a

SRCS				= ft_isalpha.c \
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

BONUS				= ft_lstnew_bonus.c \
					  ft_lstadd_front_bonus.c \
					  ft_lstsize_bonus.c \
					  ft_lstlast_bonus.c \
					  ft_lstadd_back_bonus.c \
					  ft_lstdelone_bonus.c \
					  ft_lstclear_bonus.c \
					  ft_lstiter_bonus.c \
					  ft_lstmap_bonus.c

INCLUDES			= ./ 

OBJS				= $(SRCS:%.c=%.o)
OBJSBONUS			= $(BONUS:%.c=%.o)

COMPILER 			= cc
CFLAGS 				= -Wall -Wextra -Werror

ifdef 				WITH_BONUS
					OBJS += $(OBJSBONUS)
endif

all: 				$(NAME)

$(NAME): 			$(OBJS)
					@echo "Creating archive: $@"
					@ar rc -s $(NAME) $(OBJS)

%.o: %.c
					@echo "Compiling: $<"
					@$(COMPILER) $(CFLAGS) -c $< -o $@ -I $(INCLUDES)

bonus:
					@make WITH_BONUS=TRUE --no-print-directory

clean:
					@echo "Deleting all objects"
					@rm -f $(OBJS) $(OBJSBONUS)

fclean: 			clean
					@echo "Deleting $(NAME)"
					@rm -f $(NAME)

re:					fclean all

.PHONY:			 	all bonus clean fclean re
