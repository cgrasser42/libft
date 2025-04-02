# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cgrasser <cgrasser@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/08 08:14:23 by cgrasser          #+#    #+#              #
#    Updated: 2025/04/02 21:59:42 by cgrasser         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc -Wall -Wextra -Werror -O3

SRC_LINKED_LIST = ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c \
	ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c
SRC_STRING_UTILS = ft_split.c ft_strchr.c ft_strcmp.c ft_strcount.c ft_strcpy.c ft_strdup.c \
	ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c \
	ft_strnstr.c ft_strrchr.c ft_strsclear.c ft_strsjoin.c ft_strslen.c ft_strtrim.c ft_substr.c
SRC_MEMORY_UTILS = ft_bzero.c ft_calloc.c ft_memchr.c ft_memcmp.c \
	ft_memcpy.c ft_memmove.c ft_memset.c
SRC_GNL = get_next_line.c ft_clear_fd.c
SRC_OUTPUT = ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_base_fd.c ft_putnbr_fd.c ft_putstr_fd.c
SRC_CONV = ft_atoi.c ft_atoi_base.c ft_itoa.c
SRC_CHARACTER = ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_isspace.c \
	ft_tolower.c ft_toupper.c
	
SRC += $(SRC_LINKED_LIST:%=linked_list/%) $(SRC_STRING_UTILS:%=string_utils/%) \
	$(SRC_MEMORY_UTILS:%=memory_utils/%) $(SRC_GNL:%=get_next_line/%) \
	$(SRC_OUTPUT:%=output_utils/%) $(SRC_CONV:%=conversion_utils/%) \
	$(SRC_CHARACTER:%=character_utils/%)

OBJ = $(SRC:%.c=obj/%.o)

ifndef VERBOSE
MAKEFLAGS += --silent
endif

all: $(NAME)

$(NAME): $(OBJ)
	echo "\n\t\e[1;32mBuilding\e[0m \e[36m$(NAME)\e[0m\n"
	ar rcs $(NAME) $(OBJ)

obj/%.o: src/%.c
	echo "$(NAME) \e[90m➤\e[0m \e[32mCompiling\e[0m \e[36m$<\e[0m"
	mkdir -p $(dir $@)
	$(CC) -c $< -o $@ -I . -I inc

clean:
	echo "$(NAME) \e[90m➤\e[0m \e[31mCleaning\e[0m object files"
	rm -rf ./obj

fclean: clean
	echo "$(NAME) \e[90m➤\e[0m \e[31mCleaning\e[0m $(NAME)\e[0m"
	rm -f $(NAME)

re: fclean all
