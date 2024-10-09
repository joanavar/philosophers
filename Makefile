# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joanavar <joanavar@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/16 17:49:35 by joanavar          #+#    #+#              #
#    Updated: 2024/06/15 12:37:16 by joanavar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Standard
NAME				= push_swap

# Directories
LIBFT				= ./projects/libft/libft.a
PRINTF				= ./projects/printf/libftprintf.a
INC					= ./header/push_swap.h
SRC_DIR				= src
OBJ_DIR				= obj

# Compiler and CFlags
CC					= cc
CFLAGS				= -Wall -Werror -Wextra
RM					= rm -rf

# Source Files
COMMANDS_DIR		=	commands/push.c \
						commands/rev_rotate.c \
						commands/rotate.c \
						commands/sort_stacks.c \
						commands/sort_three.c \
						commands/swap.c

PUSH_SWAP_DIR		=	push_swap/errors.c \
						push_swap/init_a_to_b.c \
						push_swap/init_b_to_a.c \
						push_swap/main.c \
						push_swap/split.c \
						push_swap/stack_init.c \
						push_swap/stack_utils.c

# Concatenate all source files
SRCS 				= $(COMMANDS_DIR) $(PUSH_SWAP_DIR)

# Apply the pattern substitution to each source file in SRC and produce a corresponding list of object files in the OBJ_DIR
OBJ 				= $(addprefix $(OBJ_DIR)/, ${SRCS:.c=.o})
# Build ruleft_locks

all: 				$(NAME)

$(NAME): 			$(OBJ) $(LIBFT) $(PRINTF)
					$(CC) $(CFLAGS) $(OBJ) $(LIBFT) $(PRINTF) -o $(NAME)

$(LIBFT):
					@make -C projects/libft

$(PRINTF):
					@make -C projects/printf


# Compile object files from source files
$(OBJ_DIR)/%.o:		$(SRC_DIR)/%.c Makefile $(INC)
					@mkdir -p $(OBJ_DIR)
					@mkdir -p $(OBJ_DIR)/commands
					@mkdir -p $(OBJ_DIR)/push_swap
					$(CC) $(CFLAGS) -I $(INC) -c $< -o $@

clean:
					@make $@ -C ./projects/libft
					@make $@ -C ./projects/printf
					$(RM) $(OBJ_DIR)

fclean: 			clean
					@$(RM) $(NAME)
					@make $@ -C ./projects/libft
					@make $@ -C ./projects/printf

re: 				fclean all

.PHONY: 			all clean fclean re $(LIBFT) $(PRINTF)
