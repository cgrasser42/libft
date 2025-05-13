# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cgrasser <cgrasser@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/05/14 00:20:28 by cgrasser          #+#    #+#              #
#    Updated: 2025/05/14 00:24:30 by cgrasser         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

BIN			:= libft.a
CC			:= cc
CFLAGS		:= -Wall -Wextra -Werror

SRC_DIR		:= src
OBJ_DIR		:= obj
INC_DIR		:= inc

SRC			:= $(wildcard $(SRC_DIR)/*.c) $(wildcard $(SRC_DIR)/**/*.c)
OBJ			:= $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRC))

AR			:= ar rcs

all: $(BIN)

$(BIN): $(OBJ)
	$(AR) $(BIN) $(OBJ)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) -I $(INC_DIR) -c $< -o $@

clean:
	rm -rf $(OBJ_DIR)

fclean: clean
	rm -f $(BIN)

re: fclean all

.PHONY: all clean fclean re