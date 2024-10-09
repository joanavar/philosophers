# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joanavar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/09 13:44:37 by joanavar          #+#    #+#              #
#    Updated: 2024/10/09 16:07:50 by joanavar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME				= philo

LIBFT				= ./Libreries/Libft/libft.a
PRINTF				= ./Libreries/Printf/libftprintf.a
INC					= header
SRC_DIR				= src
OBJ_DIR				= obj


CC					= cc
CFLAGS				= -Wall -Werror -Wextra
RM					= rm -rf

SRCS				=	data_init.c			\
						init.c				\
						main.c				\
						monitor.c			\
						parsing.c			\
						safe.c				\
						setters_getters.c	\
						syncro_utils.c		\
						utils.c				\
						write.c				\

OBJ					= $(addprefix $(OBJ_DIR)/, ${SRCS:.c=.o})

all:				$(NAME)

$(NAME):			$(OBJ) $(LIBFT) $(PRINTF)
					$(CC) $(CFLAGS) -I $(INC) $(OBJ) $(LIBFT) $(PRINTF) -o $(NAME)

$(LIBFT):
					@make -C Libreries/libft

$(PRINTF):
					@make -C Libreries/Printf

$(OBJ_DIR)/%.o:		$(SRC_DIR)/%.c makefile $(INC)
					@mkdir -p $(OBJ_DIR)
					$(CC) $(CFLAGS) -I $(INC) -c $< -o $@

clean:
					@make $@ -C ./Libreries/Libft
					@make $@ -C ./Libreries/Printf
					$(RM) $(OBJ_DIR)

fclean:				clean
					@$(RM) $(NAME)
					@make $@ -C ./Libreries/Libft
					@make $@ -C ./Libreries/Printf

re:					fclean all

.PHONY:				all clean fclean re $(LIBFT) $(PRINTF)

