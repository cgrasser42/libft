NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror -03
AR = ar rcs
RM = rm -f

SRC_DIR = src
INC_DIR = include
OBJ_DIR = build

SRCS = 

OBJS = $(SRCS:%.c=$(OBJ_DIR)/%.o)

all: $(NAME)

$(NAME): $(OBJ_DIR) $(OBJS)
	$(AR) $(NAME) $(OBJS)

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -I $(INC_DIR) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re