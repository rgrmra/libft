# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/12 10:01:10 by rde-mour          #+#    #+#              #
#    Updated: 2023/12/28 12:14:23 by rde-mour         ###   ########.org.br    #
#                                                                              #
# **************************************************************************** #

RED					= \033[0;91m
GREEN				= \033[0;92m
YELLOW				= \033[0;93m
BLUE				= \033[0;94m
RESET				= \033[0m

NAME				= libftx.a

FILES				= libft/ft_isalpha.c \
					  libft/ft_isdigit.c \
					  libft/ft_isalnum.c \
					  libft/ft_isascii.c \
					  libft/ft_isprint.c \
					  libft/ft_isspace.c \
					  libft/ft_strlen.c \
					  libft/ft_memset.c \
					  libft/ft_bzero.c \
					  libft/ft_toupper.c \
					  libft/ft_tolower.c \
					  libft/ft_strchr.c \
					  libft/ft_strrchr.c \
					  libft/ft_strncmp.c \
					  libft/ft_memchr.c \
					  libft/ft_memcpy.c \
					  libft/ft_memcmp.c \
					  libft/ft_strlcpy.c \
					  libft/ft_strlcat.c \
					  libft/ft_atoi.c \
					  libft/ft_calloc.c \
					  libft/ft_strdup.c \
					  libft/ft_memmove.c \
					  libft/ft_strnstr.c \
					  libft/ft_substr.c \
					  libft/ft_strjoin.c \
					  libft/ft_strtrim.c \
					  libft/ft_itoa.c \
					  libft/ft_strmapi.c \
					  libft/ft_striteri.c \
					  libft/ft_putchar_fd.c \
					  libft/ft_putstr_fd.c \
					  libft/ft_putendl_fd.c \
					  libft/ft_putnbr_fd.c \
					  libft/ft_split.c \
					  libft/ft_lstnew_bonus.c \
					  libft/ft_lstadd_front_bonus.c \
					  libft/ft_lstsize_bonus.c \
					  libft/ft_lstlast_bonus.c \
					  libft/ft_lstadd_back_bonus.c \
					  libft/ft_lstdelone_bonus.c \
					  libft/ft_lstclear_bonus.c \
					  libft/ft_lstiter_bonus.c \
					  libft/ft_lstmap_bonus.c \
					  gnl/get_next_line.c \
					  gnl/get_next_line_utils.c \
					  printf/ft_printf_bonus.c \
					  printf/ft_printf_utils_bonus.c \
					  printf/ft_build_string_bonus.c \
					  printf/ft_build_number_bonus.c \
					  printf/ft_build_unsigned_bonus.c \
					  printf/ft_build_hexadecimal_bonus.c \
					  printf/ft_build_pointer_bonus.c \
					  printf/ft_build_character_bonus.c \
					  printf/ft_find_characters_bonus.c \
					  printf/ft_build_config_bonus.c \
					  printf/ft_build_bonus.c

SRCSDIR				= ./srcs
OBJSDIR				= ./objs

INCLUDES			= ./includes 

SRCS				= $(FILES:%.c=$(SRCSDIR)/%.c)
OBJS				= $(FILES:%.c=$(OBJSDIR)/%.o)

COMPILER 			= cc
CFLAGS 				= -Wall -Wextra -Werror -g3

all: 				$(NAME)

$(NAME): 			$(OBJS)
					@echo -e "$(BLUE)Compiled $(NAME) successfully$(RESET)"

$(OBJSDIR)/%.o: $(SRCSDIR)/%.c
					@mkdir -p $(@D)
					@$(COMPILER) $(CFLAGS) -c $< -o $@ -I $(INCLUDES)
					@echo -e "$(GREEN)Compiled $(RESET)$(notdir $<)"
					@ar rc -s $(NAME) $@
					@echo -e "$(GREEN)Added to $(RESET)$(NAME)"

clean:
					@rm -Rf $(OBJSDIR)

fclean: 			clean
					@echo -e "$(RED)Removing $(RESET)$(NAME)"
					@rm -f $(NAME)

re:					fclean all

.PHONY:			 	all clean fclean re
