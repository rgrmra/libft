# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rde-mour <rde-mour@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/12 10:01:10 by rde-mour          #+#    #+#              #
#    Updated: 2024/03/02 17:59:11 by rde-mour         ###   ########.org.br    #
#                                                                              #
# **************************************************************************** #

RED					= $(shell tput setaf 1)
GREEN				= $(shell tput setaf 2)
YELLOW				= $(shell tput setaf 3)
BLUE				= $(shell tput setaf 4)
MAGENT				= $(shell tput setaf 5)
RESET				= $(shell tput sgr0)

NAME				= libftx.a

FILES				= libft/ctype/ft_isalnum.c \
					  libft/ctype/ft_isalpha.c \
					  libft/ctype/ft_isascii.c \
					  libft/ctype/ft_isdigit.c \
					  libft/ctype/ft_isprint.c \
					  libft/ctype/ft_isspace.c \
					  libft/ctype/ft_tolower.c \
					  libft/ctype/ft_toupper.c \
					  libft/stdlib/ft_atoi.c \
					  libft/stdlib/ft_atol.c \
					  libft/stdlib/ft_calloc.c \
					  libft/stdlib/ft_itoa.c \
					  libft/stdlib/ft_realloc.c \
					  libft/string/ft_bzero.c \
					  libft/string/ft_memchr.c \
					  libft/string/ft_memcmp.c \
					  libft/string/ft_memcpy.c \
					  libft/string/ft_memmove.c \
					  libft/string/ft_memset.c \
					  libft/string/ft_split.c \
					  libft/string/ft_strchr.c \
					  libft/string/ft_strdup.c \
					  libft/string/ft_strjoin.c \
					  libft/string/ft_strlcat.c \
					  libft/string/ft_strlcpy.c \
					  libft/string/ft_strlen.c \
					  libft/string/ft_strncmp.c \
					  libft/string/ft_strnstr.c \
					  libft/string/ft_strrchr.c \
					  libft/string/ft_strrplc.c \
					  libft/string/ft_strtrim.c \
					  libft/string/ft_strmapi.c \
					  libft/string/ft_striteri.c \
					  libft/string/ft_substr.c \
					  libft/stdio/ft_putchar_fd.c \
					  libft/stdio/ft_putstr_fd.c \
					  libft/stdio/ft_putendl_fd.c \
					  libft/stdio/ft_putnbr_fd.c \
					  libft/stdlst/ft_lstnew_bonus.c \
					  libft/stdlst/ft_lstadd_front_bonus.c \
					  libft/stdlst/ft_lstsize_bonus.c \
					  libft/stdlst/ft_lstlast_bonus.c \
					  libft/stdlst/ft_lstadd_back_bonus.c \
					  libft/stdlst/ft_lstdelone_bonus.c \
					  libft/stdlst/ft_lstclear_bonus.c \
					  libft/stdlst/ft_lstiter_bonus.c \
					  libft/stdlst/ft_lstmap_bonus.c \
					  libft/arrlst/ft_arraylist.c \
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
					  printf/ft_build_bonus.c \
					  utils/ft_getenv.c \
					  utils/ft_getenv_utils.c
SRCSDIR				= ./srcs
OBJSDIR				= ./objs

INCLUDES			= ./includes 

SRCS				= $(FILES:%.c=$(SRCSDIR)/%.c)
OBJS				= $(FILES:%.c=$(OBJSDIR)/%.o)

COMPILER 			= cc
CFLAGS 				= -Wall -Wextra -Werror -g3

all: 				$(NAME)

$(NAME): 			$(OBJS)
					@echo "$(BLUE)Compiled $(NAME) successfully$(RESET)"

$(OBJSDIR)/%.o: $(SRCSDIR)/%.c
					@mkdir -p $(@D)
					@$(COMPILER) $(CFLAGS) -c $< -o $@ -I $(INCLUDES)
					@echo "$(GREEN)Compiled $(RESET)$(notdir $<)"
					@ar rc -s $(NAME) $@
#					@echo "$(GREEN)Added to $(RESET)$(NAME)"

clean:
					@rm -Rf $(OBJSDIR)

fclean: 			clean
					@echo "$(RED)Removing $(RESET)$(NAME)"
					@rm -f $(NAME)

re:					fclean all

.PHONY:			 	all clean fclean re
